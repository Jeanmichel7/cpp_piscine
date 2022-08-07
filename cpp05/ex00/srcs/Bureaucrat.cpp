/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 23:33:22 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/07 01:29:05 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"


Bureaucrat::Bureaucrat() : _name(""), _grade(0) 
{
	return;
}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{ 
	if (grade < 1)
		throw Bureaucrat::GradeTooHightException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
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
	if (getGrade() - 1 < 1)
		throw Bureaucrat::GradeTooHightException();
	_grade -= 1;
}

void		Bureaucrat::decrementGrade()
{
	if (getGrade() + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade += 1;
}

std::ostream &operator<<(std::ostream &cout, const Bureaucrat &instance)
{
	cout << instance.getName()
		 << ", bureaucrat grade " << instance.getGrade() << std::endl;
	return (cout);
}
