/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 23:33:08 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/07 23:00:14 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include "Bureaucrat.h"
#include "Aform.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "Intern.h"

int main( void )
{
	Bureaucrat	b2("Manager", 10);
	Intern		intern;
	AForm*		rrf;
	std::string str;

	str = "create a shrubbery creation Form, please";
	//str = "shrubbery alone";
	//str = "creation Form";

	//str = "robotomy request";
	//str = "robotomy blablaa";
	//str = "blab  l fdfdf df aa request";

	//str = "presidential pardon";
	//str = "presidential donation";
	//str = "a bli blou padonea";
	//str = "";

	rrf = intern.makeForm(str, "bender");
	if (rrf)
	{
		rrf->beSigned(b2);
		b2.executeForm(*rrf);
	}

	std::cout << std::endl;
	if (rrf)
		delete rrf;
	return (0);
}
