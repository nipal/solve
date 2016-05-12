/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 23:11:29 by fjanoty           #+#    #+#             */
/*   Updated: 2016/05/13 00:58:24 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve.h"
	#include <stdio.h>

void	poly_creat(t_poly *eq, float *coef)
{
	int	i;

	i = 0;
	while(i <= POLY_DIM)
	{
		eq[POLY_DIM - 1].coef[i] = coef[i];
		i++;
	}
}


/*
 **	i corespond au degre de la derive.
 * */
void	poly_derivate(t_poly *eq)
{
	int	i;
	int	j;

	i = POLY_DIM - 2;
	while(i >= 0)
	{
		j = 0;
		eq[i].dim = i;
		printf("deriv:[%d]  ", i + 1);
		while (j <= i + 1)
		{
			eq[i].coef[j] = (j + 1) * eq[i + 1].coef[j + 1];
			printf("x^%d=%f	", j, eq[i].coef[j]);
			j++;
		}
		printf("\n");
		i--;
	}
}
