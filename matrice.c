/*
*			main.c
*	 un petit .c qui va générer un matrice où des millions de gens 
*	pourrons vivre heureux ;-)
*/

#include <world_config.h>		/* Ici se passe la gestion de TOUS les paramètres	*/

#define world_pop 	100000
#define world_size 	20

int main()
{
	
	int werr;			
	werr = init_world(world_pop, world_size);
	if (!werr)
	{
		worl_destroy();
		return 0;
	}
	else 
		while(1)
			launch_world();

}
