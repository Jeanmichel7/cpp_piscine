/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:50:00 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/12 13:14:44 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( void )
{
	std::vector<int>	v1;
	int					first_occur;
	int					search_int;

	search_int = 9;

	for(int i = 0; i < 10; i++)
		v1.push_back(10 - i);
	v1.push_back(search_int);


	display_container(v1);
	
	first_occur = ::easyfind(v1, search_int);
	std::cout << "First occurence of '" << search_int << "' : " << first_occur << std::endl;


	search_int = 7;
	first_occur = ::easyfind(v1, search_int);
	std::cout << "First occurence of '" << search_int << "' : " << first_occur << std::endl;


	search_int = 50;
	first_occur = ::easyfind(v1, search_int);
	std::cout << "First occurence of '" << search_int << "' : " << first_occur << std::endl;

	return 0;
}
