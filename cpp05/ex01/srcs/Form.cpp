/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 00:59:53 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/07 05:19:07 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define RED "\033[0;31m"
#define END "\033[0m"
#define UND "\e[4m"

#include "Form.h"

/* CANONIQUE */

Form::Form() :
_name(""),
_is_sign(0),
_grad_to_sign(0),
_grad_to_exec(0)
{ return; }

Form::Form(std::string f_name, int grad_sign, int grad_exec):
_grad_to_sign(0),
_grad_to_exec(0)
{
	const_cast<std::string&>(_name) = f_name;
	_is_sign = 0;
	try {
		if (grad_sign < 1 || grad_exec < 1)
			throw Form::GradeTooHightException();
		else if (grad_sign > 150 || grad_exec > 150)
			throw Form::GradeTooLowException();
		const_cast<int&>(_grad_to_sign) = grad_sign;
		const_cast<int&>(_grad_to_exec) = grad_exec;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	return;
}

Form::~Form()
{ return; }

Form::Form(Form const &tmp) :
_name(tmp._name),
_is_sign(tmp._is_sign),
_grad_to_sign(tmp._grad_to_sign),
_grad_to_exec(tmp._grad_to_exec)
{ return; }

void Form::operator = (Form const &tmp)
{
	const_cast<std::string&>(_name) = tmp._name;
	_is_sign = tmp._is_sign;
	const_cast<int&>(_grad_to_sign) = tmp._grad_to_sign;
	const_cast<int&>(_grad_to_exec) = tmp._grad_to_exec;
}




/* FCT MEMBRE */

std::string	Form::getName() const 		{ return (_name); }
bool 		Form::getIsSign() const 	{ return (_is_sign); }
int			Form::getGradToSign() const { return (_grad_to_sign); }
int			Form::getGradToExec() const { return (_grad_to_exec); }

void		Form::beSigned(Bureaucrat &b)
{
	try {
		if ( _grad_to_sign && b.getGrade() > _grad_to_sign)
			throw( Form::GradeTooLowException() );
		_is_sign = 1;
		b.signForm(*this);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

}



/* OSTREAM */

std::ostream &operator << ( std::ostream &cout, const Form &i )
{
	cout<< UND "Form :		" END << i.getName() << std::endl
		<< "Is sign :	" 	<< i.getIsSign() << std::endl
		<< "Grad to sign :	" << i.getGradToSign() << std::endl
		<< "Grad to exec :	" << i.getGradToExec() << std::endl
		<< std::endl;

	return (cout);
}