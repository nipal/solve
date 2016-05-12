#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAX 300


inline	float	pow_f_up(float nb, int pow)
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
		{
			result *= power;
		}

		power *= power;
		i <<= 1;	
	}
	return ((float)result);
}

int	main(int ac, char **av)
{
	float	i;
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
			r1 = powf(i, power);
			r2 = pow_f_up(i, power);
			result = r1 - r2;
			printf("pow_org:%f	pow_opt%f	diff:%f\n", r1, r2, result);
			i += 0.1;
		}
	}
	return (0);
}
