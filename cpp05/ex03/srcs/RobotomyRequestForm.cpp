/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:12:23 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/07 18:52:22 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define RED "\033[0;31m"
#define END "\033[0m"
#define UND "\033[4m"

#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm() :
AForm("Robot Form", 72, 45)
{
	const_cast<std::string&>(_target) = "";
	return;
}
RobotomyRequestForm::RobotomyRequestForm(std::string target) :
AForm("Robot Form", 72, 45)
{
	const_cast<std::string&>(_target) = target;
	return;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
	return;
}
RobotomyRequestForm::RobotomyRequestForm(AForm const &tmp) : AForm(tmp)
{
	return;
}
RobotomyRequestForm &RobotomyRequestForm::operator = (RobotomyRequestForm const &tmp)
{
	setName(tmp.getName());
	setIsSign(tmp.getIsSign());
	setGradToSign(tmp.getGradToSign());
	setGradToExec(tmp.getGradToExec());
	return (*this);
}




std::string RobotomyRequestForm::getTarget()
{
	return (_target);
}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	static int i;
	try
	{
		if (getIsSign() == 1)
		{
			if (executor.getGrade() <= getGradToExec())
			{
				std::cout << "🛠 🛠 🛠 " << _target;
				if (i % 2 != 0)
					std::cout << " has been robotomized successfully";
				else
					std::cout << " could not be robotomized";
				std::cout << std::endl;
				i++;
			}
			else
				throw( RobotomyRequestForm::GradeTooLowException());
		}
		else
			throw( RobotomyRequestForm::FormNotSigned());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
