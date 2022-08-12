/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:50:02 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/12 13:05:23 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND__
# define __EASYFIND__

# include <vector>
# include <iostream>


template< typename T >
void	display_container( std::vector<T> &v1 )
{
	std::cout << "myvector contains:";

	for (typename std::vector<T>::iterator it = v1.begin(); it != v1.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';
}


template< typename T >
int 	easyfind( std::vector<T> &v1, int i )
{
	for ( typename std::vector<T>::iterator it = v1.begin(); it != v1.end(); ++it )
	{
		if ( *it == i )
			return it - v1.begin();
	}
	return -1;
}


#endif
