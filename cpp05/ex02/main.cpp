/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 23:33:08 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/07 18:11:12 by jrasser          ###   ########.fr       */
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

int main( void )
{

	Bureaucrat b1("bureaucrat", 140);
	std::cout << b1;
	Bureaucrat b2("Manager", 10);
	std::cout << b2;

	AForm *form1 = new ShrubberyCreationForm("macible");
	std::cout << *form1;

	std::cout << std::endl << BLD "Execution without signature " END << std::endl;
	//form1->execute(b1);
	b1.executeForm(*form1);


	std::cout << std::endl << BLD "Execution form signed without grad" END << std::endl;
	form1->beSigned(b1);
	b1.executeForm(*form1);


	std::cout << std::endl << BLD "Execution form signed with grad" END << std::endl;
	b1 = b2;
	b1.executeForm(*form1);


	delete form1;

	return (0);
}
