/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 19:17:49 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/07 22:57:57 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BLU "\033[0;34m"
#define END "\033[0m"

#include "Intern.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include <string>
#include <algorithm>

Intern::Intern() { return; }
Intern::Intern(Intern const &tmp) { (void)tmp; return ; }
Intern::~Intern() { return; }
void	Intern::operator=(Intern const &tmp) { (void)tmp; return; }


AForm *Intern::makeForm(std::string form, std::string target)
{
	AForm 	*new_form;
	int		n_form = 0;

	std::cout << "Search : '" << form << "'" << std::endl;
	try {
		n_form = ft_check_name(form);

		switch (n_form)
		{
		case 1:
			new_form = new ShrubberyCreationForm(target);
			break;
		case 2:
			new_form = new RobotomyRequestForm(target);
			break;
		case 3:
			new_form = new PresidentialPardonForm(target);
			break;
		default:
			throw InvalidForm();
			break;
		}
		std::cout << BLU "Intern creates " << new_form->getName() << END
				  << std::endl << std::endl
				  << *new_form << std::endl;
		return (new_form);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << " '" << form << "' " << '\n';
	}
	return (NULL);
}


void myfunction (int i) {  // function:
  std::cout << ' ' << i;
}

int	ft_check_name(std::string input)
{
	unsigned int i = 0;
	while (input[i])
	{
		input[i] = tolower(input[i]);
		i++;
	}

	std::size_t found_shrubbery = input.find("shrubbery");
	std::size_t found_creation 	= input.find("creation");
	std::size_t found_robot 	= input.find("robot");
	std::size_t found_request 	= input.find("request");
	std::size_t found_pardon	= input.find("pardon");
	std::size_t found_president = input.find("president");

	if (found_shrubbery != std::string::npos && found_creation != std::string::npos)
		return (1);
	if (found_robot != std::string::npos && found_request != std::string::npos)
		return (2);
	if (found_pardon != std::string::npos && found_president != std::string::npos)
		return (3);
	return (0);
}
