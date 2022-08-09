/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 05:54:50 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/09 05:57:21 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER__
# define __ITER__

#include <iostream>

template< typename A, typename T, typename F >
void	iter(A const *tab_ptr, T const tab_size, F *fct) {
	for(int  i = 0; i < tab_size; i++)
	{
		fct(tab_ptr, i);
	}
}

/* Function default */
template< typename A >
void	the_function(A const *tab_ptr, int i)
{
	std::cout << tab_ptr[i] << "";
}

/* Function spe int */
template<>
void	the_function(int const *tab_ptr, int i)
{
	std::cout << tab_ptr[i] << " ";
}

/* Function spe float */
template<>
void	the_function(float const *tab_ptr, int i)
{
	std::cout << tab_ptr[i] << " - ";
}

#endif