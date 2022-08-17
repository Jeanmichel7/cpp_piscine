/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 23:33:08 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/17 15:46:30 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include "Bureaucrat.h"

int main( void )
{

	Bureaucrat employee_grad1("Employee1", 1);
	std::cout << employee_grad1;

	Bureaucrat employee_grad150("Employee2", 150);
	std::cout << employee_grad150;

	Bureaucrat employee_grad0("Employee3", 0);
	std::cout << employee_grad0;

	Bureaucrat employee_grad151("Employee4", 151);
	std::cout << employee_grad151;

	std::cout << "\n\nIncrement grade employee (1)" << std::endl;
	employee_grad1.incrementGrade();
	std::cout << employee_grad1;

	std::cout << "\n\nDecrement grade employee (1)" << std::endl;
	employee_grad1.decrementGrade();
	std::cout << employee_grad1;



	std::cout << "\n\nIncrement grade employee (150)" << std::endl;
	employee_grad150.incrementGrade();
	std::cout << employee_grad150;

	std::cout << "\n\nDecrement grade employee (150)" << std::endl;
	employee_grad150.decrementGrade();
	std::cout << employee_grad150;

	std::cout << "\n\nDecrement grade employee (150)" << std::endl;
	employee_grad150.decrementGrade();
	std::cout << employee_grad150;


	return (0);
}