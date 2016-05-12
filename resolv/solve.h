
#ifndef SOLVE_H
# define SOLVE_H

#define POLY_DIM 6

typedef	struct	s_poly
{
	int	dim;
	int	nb_roots;
	float	coef[POLY_DIM + 1];
	float	roots[POLY_DIM];
}		t_poly;

#endif

//  -initiaiser le tableau de toutee equation
//  -definir les derive
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
