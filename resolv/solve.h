/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 23:13:14 by fjanoty           #+#    #+#             */
/*   Updated: 2016/05/13 00:58:24 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVE_H
# define SOLVE_H

#define POLY_DIM 5

typedef	struct	s_poly
{
	int	dim;
	int	nb_roots;
	float	coef[POLY_DIM + 1];
	float	roots[POLY_DIM];
}		t_poly;

#endif

void	poly_creat(t_poly *eq, float *coef);
void	poly_derivate(t_poly *eq);
//  -initiaiser le tableau de toutee equation	[ DONE ]
//  -definir les derive							[ DONE ]
//  -definir les racine
//	-solve deg1
//	-solve deg2
//	-solve deg(3)
//	-solve deg(4)
//	-solve degn
//		-f(x)
//		-def_interval
//		-found_zero
//		(dicotomie)
//		(newtone)
//		(l'autre truc opti)
