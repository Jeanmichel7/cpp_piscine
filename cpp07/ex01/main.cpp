/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 05:20:52 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/09 05:56:45 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.h"

int main()
{
	int		tab_int[5] 	= {1, 2, 3, 4, 5};
	char	string[11] 	= {'H','e','l','l','o',' ','w','o','r','l','d'};
	float	tab_f[3]	= {42.042f, 123.456, 0.1f};


	::iter(tab_int, 5, the_function<int>);
	std::cout << std::endl;
	
	::iter(string, 11, the_function<char>);
	std::cout << std::endl;

	::iter(tab_f, 3, the_function<float>);
	std::cout << std::endl;

	return 0;
}