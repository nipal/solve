#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAX 300

/*
**	on peu un peu modifier le main pour verifier que le resultat 
**	est exacte ou bien cree deux executable pour tester les performace
**	sur les mac de l'ecole je suis 4 fois plus rapide.
**	Sur mon linux ubuntu je suis 15 fois lus rapide
*/

static inline	double	pow_l_up(double nb, int pow)
{
	double	result;
	double	power;
	int	i;

	i = 1;
	result = 1;
	power = nb;
	while (i <= pow)
	{
		if (i & pow)
			result *= power;
		power *= power;
		i <<= 1;	
	}
	return (result);
}

int	main(int ac, char **av)
{
	double	i;
	int	power;
	double	result;
	double	r1;
	double	r2;

	if (ac >= 2)
	{
		power = atoi(av[1]);
		i = -MAX;
		while(i < MAX)
		{
			r1 = pow(i, power);
			r2 = pow_l_up(i, power);
			result = r1 - r2;
			printf("pow_org:%f	pow_opt%f	diff:%f\n", r1, r2, result);
			i += 0.00001;
		}
	}
	return (0);
}
