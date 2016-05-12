#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAX 30000

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
			result = powf(i, power);
			i += 0.001;
		}
	}
	return (0);
}
