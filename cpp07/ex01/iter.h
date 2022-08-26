/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 05:54:50 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/19 18:19:37 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER__
# define __ITER__

#include <iostream>

template< typename T >
void	iter(T const *tab_ptr, const int tab_size, void (*function)(T const &)) {
	for(int i = 0; i < tab_size; i++)
	{
		function(tab_ptr[i]);
	}
}

#endif