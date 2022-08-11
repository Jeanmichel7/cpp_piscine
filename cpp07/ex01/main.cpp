/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 05:20:52 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/11 20:44:37 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.h"

/*
template< typename T > 
int	sizeOfArray(T arr)
{
	int l = sizeof(arr) / sizeof(arr[0]);
	return (l);
}
*/

int main()
{
	char	string[11] 	= {'H','e','l','l','o',' ','w','o','r','l','d'};
	int		tab_int[11] = {'H','e','l','l','o',' ','w','o','r','l','d'};
	float	tab_f[3]	= {42.042f, 123.456, 0.1f};


	std::cout << "TEST char" << std::endl;
	std::cout << "Address tab	: " << &string << std::endl
			  << "Taille tab	: " << *(&string + 1) - string << std::endl
			  << "Fct display	: ";
	::iter(string, 11, the_function<char>);
	std::cout << std::endl << std::endl;


	std::cout << "TEST int" << std::endl;
	std::cout << "Address tab	: " << &tab_int << std::endl
			  << "Taille tab	: " << *(&tab_int + 1) - tab_int << std::endl
			  << "Fct display	: ";
	::iter(tab_int, 11, the_function<int>);
	std::cout << std::endl << std::endl;


	std::cout << "TEST float" << std::endl;
	std::cout << "Address tab	: " << &tab_f << std::endl
			  << "Taille tab	: " << *(&tab_f + 1) - tab_f << std::endl
			  << "Fct display	: ";
	::iter(tab_f, 3, the_function<float>);
	std::cout << std::endl << std::endl;

	return 0;
}