#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAX 32768

inline float	pow_f(float nb, int pow)
{
	float tmp;

	if (pow <= 0)
	{
		return (1);
	}
	else if (pow % 2 == 0)
	{
		tmp = pow_f(nb, pow / 2);
		return (tmp * tmp);
	}
	else
	{
		return (nb * pow_f(nb, pow - 1));
	}
}

static	inline	float	pow_f_up(float nb, int pow)
{
	float	result;
	float	power;
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
	return (result);
}

int	main(int ac, char **av)
{
	float	i;
	int	power;
	double	result;

	if (ac >= 2)
	{
		power = atoi(av[1]);
		i = -MAX;
		while(i < MAX)
		{
//			printf("i:%f\n", i);
			result = pow_f_up(i, power);
			i += 0.001;
		}
	}
	(void)result;
	return (0);
}
