#include <stdio.h>
#include <math.h>
#include <stdlib.h>


#define MAX 10000

//*
int main (int ac, char **av)
{
	float	i;
	int	power;
	double	result;

   printf("Value 8.0 ^ 3 = %lf\n", pow(8.0, 3));

   printf("Value 3.05 ^ 1.98 = %lf", pow(3.05, 1.98));
   
	if (ac >= 2)
	{
		power = atoi(av[1]);
		i = 0;
		while(i < MAX)
		{
   printf("Value 3.05 ^ 1.98 = %lf", pow(3.05 + i, 1.98));
	//		printf("pow:%lf\n", pow((double)(i), (double)(power)));
			i++;
		}

	}
   return(0);
}
//*/

