/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:29:55 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/07 18:50:30 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define RED "\033[0;31m"
#define END "\033[0m"
#define UND "\033[4m"

#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm() :
AForm("Presidential Pardon Form", 25, 5)
{
	const_cast<std::string&>(_target) = "";
	return;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) :
AForm("Presidential Pardon Form", 25, 5)
{
	const_cast<std::string&>(_target) = target;
	return;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
	return;
}
PresidentialPardonForm::PresidentialPardonForm(AForm const &tmp) : AForm(tmp)
{
	return;
}
PresidentialPardonForm &PresidentialPardonForm::operator = (PresidentialPardonForm const &tmp)
{
	setName(tmp.getName());
	setIsSign(tmp.getIsSign());
	setGradToSign(tmp.getGradToSign());
	setGradToExec(tmp.getGradToExec());
	return (*this);
}




std::string PresidentialPardonForm::getTarget()
{
	return (_target);
}


void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	static int i;
	try
	{
		if (getIsSign() == 1)
		{
			if (executor.getGrade() <= getGradToExec())
			{
				std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
			}
			else
				throw( PresidentialPardonForm::GradeTooLowException());
		}
		else
			throw( PresidentialPardonForm::FormNotSigned());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
