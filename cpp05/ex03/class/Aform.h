/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aform.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 01:00:01 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/07 22:15:12 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_H__
# define __FORM_H__

#define RED "\033[0;31m"
#define END "\033[0m"

#include <iostream>
#include "Bureaucrat.h"
class Bureaucrat;

class AForm
{
private:
	std::string const 	_name;
	bool 				_is_sign;
	int const			_grad_to_sign;
	int const			_grad_to_exec;

public:
	AForm();
	AForm(std::string f_name, int grad_sign, int grad_exec);
	AForm(AForm const &);
	virtual ~AForm();
	void operator = (AForm const &);

	std::string		getName() const;
	bool 			getIsSign() const;
	int				getGradToSign() const;
	int				getGradToExec() const;

	void			setName(std::string const name);
	void			setIsSign(int n);
	void			setGradToSign(int grad);
	void			setGradToExec(int grad);

	void			beSigned(Bureaucrat &);
	void			setSigned();
	virtual void	execute(Bureaucrat const & executor) const = 0;

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

	class FormNotSigned : public std::exception {
	public:
		virtual const char* what() const throw() {
			return (RED "Cannot execute form not signed" END);
		}
	};

};

std::ostream &operator << ( std::ostream &cout, const AForm &instance );

#endif