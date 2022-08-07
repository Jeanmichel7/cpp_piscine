/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:04:41 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/07 21:58:32 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCHURBERRY__
# define __SCHURBERRY__

#include "Aform.h"
#include <cstdio>
#include <bits/stdc++.h> 

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

int	ft_check_name(std::string input);