/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:04:41 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/11 16:59:40 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCHURBERRY__
# define __SCHURBERRY__

#include "Aform.h"
#include <cstdio>

class ShrubberyCreationForm : public AForm
{
	std::string const	_target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(AForm const &);
	ShrubberyCreationForm &operator = (ShrubberyCreationForm const &);

	std::string getTarget();
	void 		execute(Bureaucrat const & executor) const;
};

#endif