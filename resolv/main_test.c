/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 23:11:12 by fjanoty           #+#    #+#             */
/*   Updated: 2016/05/13 00:58:23 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve.h"
#include <stdlib.h>

void	fill_coef(float *coef, int ac, char **av)
{
	int	i;

	i = 0;
	while (i <= POLY_DIM)
	{
		if (i < ac)
			coef[i] = atof(av[i]);
		else
			coef[i] = 0;
		i++;
	}
}

int 	main(int ac, char **av)
{
    t_poly  eq[POLY_DIM];
	float	coef[POLY_DIM];


	fill_coef(coef, ac, av);
    poly_creat(eq, coef);
	poly_derivate(eq);
    return(0);
}
