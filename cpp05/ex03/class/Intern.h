/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 19:18:02 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/07 23:07:16 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ___INTERN__
# define ___INTERN__

#define RED "\033[0;31m"
#define END "\033[0m"

#include <iostream>
#include "Aform.h"

class Intern
{

public:
	Intern();
	Intern(Intern const &);
	~Intern();
	void	operator=(Intern const &);

	AForm *makeForm(std::string form, std::string target);

	class InvalidForm : public std::exception {
	public:
		virtual const char* what() const throw() {
			return (RED "Invalid formulaire name" END);
		}
	};
};

#endif