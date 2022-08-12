/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:50:02 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/12 13:14:36 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND__
# define __EASYFIND__

# define RED "\033[0;31m"
# define END "\033[0m"

# include <vector>
# include <iostream>

class OccurenceNotFound : public std::exception {
public:
	virtual const char* what() const throw() {
		return (RED "Error : Occurence not found" END);
	}
};


template< typename T >
void	display_container( std::vector<T> &v1 )
{
	std::cout << "myvector contains:";

	for (typename std::vector<T>::iterator it = v1.begin(); it != v1.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';
}


template< typename T >
int 	easyfind( std::vector<T> &v1, const int i )
{
	try {
		for ( typename std::vector<T>::iterator it = v1.begin(); it != v1.end(); ++it )
		{
			if ( *it == i )
				return it - v1.begin();
		}
		throw OccurenceNotFound();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return -1;
	}
}


#endif
