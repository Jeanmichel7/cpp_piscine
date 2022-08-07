/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:12:27 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/07 18:16:15 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTFORM__
# define __ROBOTFORM__

#include "Aform.h"

class RobotomyRequestForm : public AForm
{
	std::string const	_target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	RobotomyRequestForm(AForm const &);
	RobotomyRequestForm &operator = (RobotomyRequestForm const &);

	std::string getTarget();
	void 		execute(Bureaucrat const & executor) const;
};



#endif