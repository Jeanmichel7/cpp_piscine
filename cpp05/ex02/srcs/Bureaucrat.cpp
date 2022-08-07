/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 23:33:22 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/07 18:10:00 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define RED "\033[0;31m"
#define GRN "\033[0;32m"
#define END "\033[0m"
#define UND "\033[4m"

#include "Bureaucrat.h"

/* CANONIQUE */

Bureaucrat::Bureaucrat() : _name(""), _grade(9999) 
{
	return;
}
Bureaucrat::Bureaucrat(std::string name, int grade)
{ 
	const_cast<std::string&>(_name) = name;

	try {
		if (grade < 1)
			throw Bureaucrat::GradeTooHightException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		_grade = grade;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
		_grade = 9999;
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



/* FCT MEMBRE */

std::string Bureaucrat::getName() const		{ return ( _name ); }
int			Bureaucrat::getGrade() const	{ return ( _grade ); }
void		Bureaucrat::incrementGrade()
{
	try {
		if (getGrade() - 1 < 1)
			throw Bureaucrat::GradeTooHightException();
		_grade -= 1;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

void		Bureaucrat::decrementGrade()
{
	try {
		if (getGrade() + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		_grade += 1;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}
void	Bureaucrat::signForm(AForm const &f)
{
	if (f.getIsSign())
		std::cout << _name << " signed	" << f.getName() << std::endl;
	else
	{
		if ( f.getGradToSign() && getGrade() > f.getGradToSign())
			std::cout << _name << " couldn't sign " << f.getName() << " because grad to low" << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		if (form.getIsSign())
		{
			if(_grade <= form.getGradToExec())
			{
				std::cout << getName() << " grad ("
					  << getGrade() << ") " << GRN "execute " END << "'"
					  << form.getName() << "' (" << form.getGradToExec()
					  << ")\n";
				form.execute(*this);
			}
			else
				throw Bureaucrat::GradeTooLowException();
		}
		else
			throw( AForm::FormNotSigned());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " to execute '"
				  << form.getName() << "' (" << form.getGradToExec()
				  << ") by " << getName() << " grad ("<< getGrade() 
				  << ")\n";
	}
}



/* OSTREAM */

std::ostream &operator<<(std::ostream &cout, const Bureaucrat &instance)
{
	cout << UND "Bureaucrat" END << " : "
		 << instance.getName()
		 << ", bureaucrat grade " << instance.getGrade()
		 << std::endl;
	return (cout);
}
