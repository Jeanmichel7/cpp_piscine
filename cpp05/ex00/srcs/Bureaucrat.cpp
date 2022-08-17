/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 23:33:22 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/17 15:07:41 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"


Bureaucrat::Bureaucrat() : _name(""), _grade(0) 
{
	return;
}
Bureaucrat::Bureaucrat(std::string name, int grade)
{
	try{
		if (grade < 1)
			throw Bureaucrat::GradeTooHightException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();

		const_cast<std::string &>(_name) = name;
		_grade = grade;

	} catch(std::exception& e) {
		std::cerr << RED "Error : Cannot create bureaucrat : " << e.what() << '\n';
	}
	return;
}
Bureaucrat::~Bureaucrat() 
{
	return;
}
Bureaucrat::Bureaucrat(Bureaucrat const &tmp) : _name(tmp._name), _grade(tmp._grade)
{
	return;
}
void Bureaucrat::operator = (Bureaucrat const &tmp)
{ 
	const_cast<std::string&>(_name) = tmp.getName();
	_grade = tmp.getGrade();
	return;
}




std::string Bureaucrat::getName() const		{ return ( _name ); }
int			Bureaucrat::getGrade() const	{ return ( _grade ); }
void		Bureaucrat::incrementGrade()
{
	try {
		if (getGrade() - 1 < 1)
			throw Bureaucrat::GradeTooHightException();
		_grade -= 1;
	} catch(const std::exception& e) {
		std::cerr << RED "Error : Cannot increment grade : " << e.what() << '\n';
	}
	
}

void		Bureaucrat::decrementGrade()
{
	try {
		if (getGrade() + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		_grade += 1;
	} catch(const std::exception& e) {
		std::cerr << RED "Error : Cannot decrement grade : " << e.what() << '\n';
	}
	
}

std::ostream &operator<<(std::ostream &cout, const Bureaucrat &instance)
{
	if (!instance.getName().empty())
		cout << instance.getName()
			 << ", bureaucrat grade " << instance.getGrade() << std::endl;
	return (cout);
}
