/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 01:00:01 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/07 03:06:33 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_H__
# define __FORM_H__

#define RED "\033[0;31m"
#define END "\033[0m"

#include <iostream>
#include "Bureaucrat.h"
class Bureaucrat;

class Form
{
private:
	std::string const 	_name;
	bool 				_is_sign;
	int const			_grad_to_sign;
	int const			_grad_to_exec;


public:
	Form();
	Form(std::string f_name, int grad_sign, int grad_exec);
	Form(Form const &);
	~Form();
	void operator = (Form const &);

	std::string	getName() const;
	bool 		getIsSign() const;
	int			getGradToSign() const;
	int			getGradToExec() const;
	void		beSigned(Bureaucrat &);

	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return (RED "Grade too low" END);
		}
	};

	class GradeTooHightException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return (RED "Grade too hight" END);
		}
	};

};

std::ostream &operator << ( std::ostream &cout, const Form &instance );

#endif