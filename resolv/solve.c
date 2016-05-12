#include "solves.h"

void	poly_creat(t_poly *eq, float *coef)
{
    int	i;

    i = 0;
    while(i <= POLY_DIM)
    {
	eq[POLY_DIM - 1]->coef[i] = coef[i];
	i++;
    }
}

void	polynome_derivate(t_poly *eq)
{
    int	i;

    i = 0;
    while(i < POY_DIM)
    {

	i++;
    }
}
