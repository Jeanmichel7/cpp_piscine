/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 23:33:08 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/07 00:57:38 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include "Bureaucrat.h"

int main( void )
{
	try
	{
		Bureaucrat employee1("Employee1", 1);
		std::cout << employee1;

		Bureaucrat employee2("Employee2", 100);
		std::cout << employee2;

		//Bureaucrat employee3("Employee3", 0);
		//std::cout << employee3;

		Bureaucrat employee4("Employee4", 151);
		std::cout << employee4;

	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}