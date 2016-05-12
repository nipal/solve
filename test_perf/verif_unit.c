#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAX 3000


inline	float	pow_f_up(float nb, int pow)
{
	float	result;
	float	power;
	int	i;

	i = 1;
	result = 1;
	power = nb;
	printf("POWER UP\n");
	while (i <= pow)
	{
		if (i & pow)	
		{
			result *= power;
		}
		
		printf("i:%d	power:%f	result:%f\n", i, power, result);
		power *= power;
		i <<= 1;	
	}
	printf("END\n");
	return (result);
}

//	x ^ n
int	main(int ac, char **av)
{
	float	x;
	int	n;
	double	result;
	double	r1;
	double	r2;

	if (ac >= 3)
	{
		n = atoi(av[2]);
		x = atof(av[1]);
		printf("x:%f	n:%d:\n", x, n);
		r1 = powf(x, n);
		r2 = pow_f_up(x, n);
		result = r1 - r2;
		printf("pow_org:[%f]	pow_opt:[%f]	diff:%f\n\n\n", r1, r2, result);
	}
	return (0);
}
