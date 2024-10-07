#include <stddef.h>
#include <string.h>
#include "species.h"
const struct species builtin_species[]={
	{
		.max={
			.id="icefield_tiger_cub",
			.max_hp=1263,
			.atk=202,
			.def=157,
			.speed=239,
			.hit=100,
			.avoid=101,
			.max_spi=128,
			.crit_effect=2.0,
			.type0=TYPE_ICE,
			.level=150,
		},
		.flag=UF_EVOLVABLE,
		.type=UTYPE_WILD,
		.evolve_level=35,
		.xp_type=160,
		.moves={
			[0]="cold_wind",
			[1]="fury_swipes",
			[13]="amuck",
			[27]="rest",
		},
	},
	{
		.max={
			.id="icefield_tiger",
			.max_hp=1527,
			.atk=259,
			.def=232,
			.speed=252,
			.hit=100,
			.avoid=101,
			.max_spi=128,
			.crit_effect=2.0,
			.type0=TYPE_ICE,
			.level=150,
		},
		.flag=UF_EVOLVABLE,
		.type=UTYPE_WILD,
		.evolve_level=83,
		.xp_type=160,
		.moves={
			[0]="cold_wind",
			[1]="fury_swipes",
			[13]="amuck",
			[27]="rest",
			[56]="mana_gather",
			[67]="hail",
		},
	},
	{
		.max={
			.id="icefield_fiercetiger",
			.max_hp=2112,
			.atk=357,
			.def=302,
			.speed=320,
			.hit=100,
			.avoid=101,
			.max_spi=128,
			.crit_effect=2.0,
			.type0=TYPE_ICE,
			.level=150,
		},
		.type=UTYPE_WILD,
		.xp_type=170,
		.moves={
			[0]="cold_wind",
			[1]="fury_swipes",
			[13]="amuck",
			[27]="rest",
			[56]="mana_gather",
			[67]="hail",
			[90]="angry",
			[96]="mosquito_bump",
			[104]="primordial_breath",
			[113]="freezing_roaring",
			[135]="cold_wave",
		},
	},
	{
		.max={
			.id="flat_mouth_duck",
			.max_hp=1443,
			.atk=178,
			.def=201,
			.speed=247,
			.hit=100,
			.avoid=101,
			.max_spi=128,
			.crit_effect=2.0,
			.type0=TYPE_NORMAL,
			.level=150,
		},
		.flag=UF_EVOLVABLE,
		.type=UTYPE_WILD,
		.evolve_level=24,
		.xp_type=155,
		.moves={
			[0]="ground_force",
			[13]="soften",
		},
	},
	{
		.max={
			.id="sharp_mouth_duck",
			.max_hp=1523,
			.atk=247,
			.def=253,
			.speed=263,
			.hit=100,
			.avoid=101,
			.max_spi=128,
			.crit_effect=2.0,
			.type0=TYPE_NORMAL,
			.type1=TYPE_SOIL,
			.level=150,
		},
		.flag=UF_EVOLVABLE,
		.type=UTYPE_WILD,
		.evolve_level=72,
		.xp_type=155,
		.moves={
			[0]="ground_force",
			[13]="soften",
			[27]="triple_cutter",
			[44]="sonic",
			[56]="mud_shot",
			[67]="clip3",
		},
	},
	{
		.max={
			.id="giant_mouth_duck",
			.max_hp=1901,
			.atk=323,
			.def=312,
			.speed=366,
			.hit=100,
			.avoid=101,
			.max_spi=128,
			.crit_effect=2.0,
			.type0=TYPE_NORMAL,
			.type1=TYPE_SOIL,
			.level=150,
		},
		.type=UTYPE_WILD,
		.xp_type=160,
		.moves={
			[0]="ground_force",
			[13]="soften",
			[27]="triple_cutter",
			[44]="sonic",
			[56]="mud_shot",
			[67]="clip3",
			[84]="cycle_erode",
			[95]="speed_up",
			[105]="magical_reflex",
		},
	},
	{
		.max={
			.id="hood_grass",
			.max_hp=623,
			.atk=75,
			.def=77,
			.speed=98,
			.hit=100,
			.avoid=101,
			.max_spi=128,
			.crit_effect=2.0,
			.type0=TYPE_GRASS,
			.level=150,
		},
		.flag=UF_EVOLVABLE,
		.type=UTYPE_WILD,
		.evolve_level=15,
		.xp_type=80,
		.moves={
			[0]="hypnosis",
			[6]="soil_loosening",
			[13]="escape",
		},
	},
	{
		.max={
			.id="hood_flower",
			.max_hp=932,
			.atk=112,
			.def=107,
			.speed=109,
			.hit=100,
			.avoid=101,
			.max_spi=128,
			.crit_effect=2.0,
			.type0=TYPE_GRASS,
			.level=150,
		},
		.flag=UF_EVOLVABLE,
		.type=UTYPE_WILD,
		.evolve_level=45,
		.xp_type=100,
		.moves={
			[0]="hypnosis",
			[6]="soil_loosening",
			[13]="escape",
			[22]="defend",
			[36]="leech_seed",
			[42]="blow_down",
		},
	},
	{
		.max={
			.id="hood_ball",
			.max_hp=1422,
			.atk=197,
			.def=232,
			.speed=246,
			.hit=100,
			.avoid=101,
			.max_spi=128,
			.crit_effect=2.0,
			.type0=TYPE_GRASS,
			.type1=TYPE_ICE,
			.level=150,
		},
		.flag=UF_EVOLVABLE,
		.type=UTYPE_WILD,
		.evolve_level=140,
		.xp_type=120,
		.moves={
			[0]="hypnosis",
			[6]="soil_loosening",
			[13]="escape",
			[22]="defend",
			[36]="leech_seed",
			[42]="blow_down",
			[57]="synthesis",
			[65]="clip3",
			[80]="entangle",
			[93]="poison_sting",
			[113]="hail",
			[126]="peanut_powder",
			[139]="freezing_roaring",
		},
	},
	{
		.max={
			.id="hood_4",
			.max_hp=2512,
			.atk=450,
			.def=450,
			.speed=450,
			.hit=100,
			.avoid=101,
			.max_spi=128,
			.crit_effect=2.0,
			.type0=TYPE_GRASS,
			.type1=TYPE_ICE,
			.level=150,
		},
		.flag=UF_CANSELECTTYPE,
		.type=UTYPE_WILD,
		.xp_type=450,
		.moves={
			[0]="hypnosis",
			[6]="soil_loosening",
			[13]="escape",
			[22]="defend",
			[36]="leech_seed",
			[42]="blow_down",
			[57]="synthesis",
			[65]="clip3",
			[80]="entangle",
			[93]="poison_sting",
			[113]="hail",
			[126]="peanut_powder",
			[139]="freezing_roaring",
			[141]="health_reset",
			[142]="mighty_wave",
			[143]="star_move",
			[144]="spatially_shatter",
			[145]="tidal",
			[146]="metal_syncretize",
			[147]="natural_shield",
			[148]="kaleido",
			[149]="primordial_breath",
			[150]="uniform_base",
		},
	},
	{.max={NULL}}
};
const size_t builtin_species_size=sizeof(builtin_species)/sizeof(builtin_species[0])-1;
const struct species *get_builtin_species_by_id(const char *id){
	unsigned long i;
	for(i=0;builtin_species[i].max.id;++i){
		if(!strcmp(id,builtin_species[i].max.id))
			return builtin_species+i;
	}
	return NULL;
}
