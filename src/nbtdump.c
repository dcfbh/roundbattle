#include "nbt.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include "expr.h"
static inline void *readall(intptr_t fd,ssize_t *len){
	char *save;
	ssize_t r=expr_file_readfd((void *)read,fd,1,&save);
	if(r<0)
		return NULL;
	if(len)
		*len=r;
	save[r]=0;
	return save;
}
int dump(char *file){
	int fd;
	struct nbt_node *np;
	ssize_t sz;
	char *buf;
	fd=open(file,O_RDONLY);
	if(fd<0){
		perror("open()");
		exit(EXIT_FAILURE);
	}
	buf=readall(fd,&sz);
	close(fd);
	if(!buf){
		perror("readall()");
		exit(EXIT_FAILURE);
	}
	errno=0;
	np=nbt_read(buf,sz);
	free(buf);
	if(!np){
		if(errno)
			perror("malloc()");
		else
			fprintf(stderr,"bad data\n");
		exit(EXIT_FAILURE);
	}
	buf=malloc(nbt_strlen(np));
	if(!buf){
		perror("malloc()");
		exit(EXIT_FAILURE);
	}
	nbt_writestr(np,buf);
	printf("%s:%s\n",file,buf);
	free(buf);
	nbt_free(np);
	return 0;
}
int main(int argc,char **argv){
	if(argc<2){
		fprintf(stderr,"no file input\n");
		exit(EXIT_FAILURE);
	}
	for(char **p=argv+1;*p;++p){
		dump(*p);
	}
}
