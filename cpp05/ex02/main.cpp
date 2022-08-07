/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 23:33:08 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/07 18:50:38 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define UND "\033[4m"
#define BLD "\033[1;34m"
#define END "\033[0m"
#define GRN "\033[0;32m"

#include <stdexcept>
#include "Bureaucrat.h"
#include "Aform.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

int main( void )
{

	Bureaucrat b1("bureaucrat", 140);
	Bureaucrat b2("Manager", 10);
	AForm *form1 = new ShrubberyCreationForm("macible");
	
	std::cout << b1;
	std::cout << b2;
	std::cout << *form1;

	std::cout << std::endl << BLD "Execution without signature " END << std::endl;
	//form1->execute(b1);
	b1.executeForm(*form1);

	std::cout << std::endl << BLD "Execution form signed without grad" END << std::endl;
	form1->beSigned(b1);
	b1.executeForm(*form1);

	std::cout << std::endl << BLD "Execution form signed with grad" END << std::endl;
	//b1 = b2;
	b2.executeForm(*form1);


	std::cout << std::endl << BLD "Test form ROBOT" END << std::endl;
	AForm *form2 = new RobotomyRequestForm("other cible");
	std::cout << *form2;
	form2->beSigned(b2);
	b2.executeForm(*form2);
	b2.executeForm(*form2);
	b2.executeForm(*form2);
	b2.executeForm(*form2);


	std::cout << std::endl << BLD "Test form PARDON " END << std::endl;
	Bureaucrat b3("CEO", 1);
	std::cout << b3;
	AForm *form3 = new PresidentialPardonForm("bidule");
	std::cout << *form3;
	form3->beSigned(b2);
	std::cout << *form3;

	b2.executeForm(*form3);
	b3.executeForm(*form3);

	delete form1;
	delete form2;
	delete form3;
	return (0);
}
