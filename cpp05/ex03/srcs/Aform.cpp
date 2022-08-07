/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aform.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 00:59:53 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/07 22:43:46 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define RED "\033[0;31m"
#define END "\033[0m"
#define UND "\033[4m"

#include "Aform.h"

/* CANONIQUE */

AForm::AForm() :
_name(""),
_is_sign(0),
_grad_to_sign(0),
_grad_to_exec(0)
{ return; }

AForm::AForm(std::string f_name, int grad_sign, int grad_exec):
_grad_to_sign(0),
_grad_to_exec(0)
{
	const_cast<std::string&>(_name) = f_name;
	_is_sign = 0;
	try {
		if (grad_sign < 1 || grad_exec < 1)
			throw AForm::GradeTooHightException();
		else if (grad_sign > 150 || grad_exec > 150)
			throw AForm::GradeTooLowException();
		const_cast<int&>(_grad_to_sign) = grad_sign;
		const_cast<int&>(_grad_to_exec) = grad_exec;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	return;
}

AForm::~AForm()
{ return; }

AForm::AForm(AForm const &tmp) :
_name(tmp._name),
_is_sign(tmp._is_sign),
_grad_to_sign(tmp._grad_to_sign),
_grad_to_exec(tmp._grad_to_exec)
{ return; }

void AForm::operator = (AForm const &tmp)
{
	const_cast<std::string&>(_name) = tmp._name;
	_is_sign = tmp._is_sign;
	const_cast<int&>(_grad_to_sign) = tmp._grad_to_sign;
	const_cast<int&>(_grad_to_exec) = tmp._grad_to_exec;
}




/* FCT MEMBRE */

std::string	AForm::getName() const 		{ return (_name); }
bool 		AForm::getIsSign() const 	{ return (_is_sign); }
int			AForm::getGradToSign() const { return (_grad_to_sign); }
int			AForm::getGradToExec() const { return (_grad_to_exec); }

void		AForm::beSigned(Bureaucrat &b)
{
	try {
		if ( _grad_to_sign && b.getGrade() > _grad_to_sign)
			throw( AForm::GradeTooLowException() );
		else
			_is_sign = 1;
		//b.signForm(*this);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << " to sign '" << getName() << "' ("
		<< getGradToSign()
		<< ") by " << b.getName() << "(" << b.getGrade() << ")\n";
	}

}

void	AForm::setSigned()
{
	_is_sign = 1;
	return;
}
void	AForm::setName(std::string const name)
{
	const_cast<std::string&>(_name) = name;
	return;
}
void	AForm::setIsSign(int i)
{
	_is_sign = i;
	return;
}

void	AForm::setGradToSign(int grad)
{
	const_cast<int&>(_grad_to_sign) = grad;
	return;
}
void	AForm::setGradToExec(int grad)
{
	const_cast<int&>(_grad_to_exec) = grad;
	return;
}


/* OSTREAM */

std::ostream &operator << ( std::ostream &cout, const AForm &i )
{
	cout<< UND "Form :		" END << i.getName() << std::endl
		<< "Is sign :	" 	<< i.getIsSign() << std::endl
		<< "Grad to sign :	" << i.getGradToSign() << std::endl
		<< "Grad to exec :	" << i.getGradToExec() << std::endl
		<< std::endl;

	return (cout);
}