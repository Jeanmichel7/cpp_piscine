/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:29:19 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/07 18:49:35 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTFORM__
# define __PRESIDENTFORM__

#include "Aform.h"

class PresidentialPardonForm : public AForm
{
	std::string const	_target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
	PresidentialPardonForm(AForm const &);
	PresidentialPardonForm &operator = (PresidentialPardonForm const &);

	std::string getTarget();
	void 		execute(Bureaucrat const & executor) const;
};

#endif