/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 23:33:08 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/07 05:37:29 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define UND "\033[4m"
#define BLD "\033[1m"
#define END "\033[0m"
#define BLU "\033[0;34m"

#include <stdexcept>
#include "Bureaucrat.h"
#include "Form.h"

int main( void )
{
{
	std::cout << BLU "Bad creation bureaucrat" END << std::endl;
	Bureaucrat bad_employee("Hacker", 0);
	std::cout << bad_employee;



	std::cout << std::endl  << BLU "Creation 3 bureaucrat" END << std::endl;
	Bureaucrat employee1("CEO", 2);
	std::cout << employee1;

	Bureaucrat employee2("Manager", 10);
	std::cout << employee2;

	Bureaucrat employee3("Employee", 140);
	std::cout << employee3;

	std::cout << std::endl << BLU "Creation 3 formulaire" END << std::endl;
	Form	form1("Investissement secret", 1, 1);
	std::cout << form1;
	Form	form2("Repartition des benefices", 15, 15);
	std::cout << form2;
	Form	form3("Regle generale", 150, 150);
	std::cout << form3;



	std::cout << std::endl << BLD "Signature formulaire : " END << form1.getName() << std::endl;
	form1.beSigned(employee1);
	form1.beSigned(employee2);
	form1.beSigned(employee3);

	std::cout << std::endl << BLD "Signature formulaire : " END << form2.getName() << std::endl;
	form2.beSigned(employee1);
	form2.beSigned(employee2);
	form2.beSigned(employee3);

	std::cout << std::endl << BLD "Signature formulaire : " END << form3.getName() << std::endl;
	form3.beSigned(employee1);
	form3.beSigned(employee2);
	form3.beSigned(employee3);

	

	std::cout << std::endl << BLU "Check form signed" END << std::endl;
	std::cout << form1;
	std::cout << form2;
}
{
	std::cout << std::endl << BLU "Check autorisation before signature" END << std::endl;
	Bureaucrat employee4("Consultant", 100);
	std::cout << employee4;

	Form form1("formulaire123", 60, 1);
	std::cout << form1;
	employee4.signForm(form1);
}

	return (0);
}
