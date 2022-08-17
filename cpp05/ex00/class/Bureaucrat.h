/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 23:33:24 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/17 15:01:05 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_H__
# define __BUREAUCRAT_H__

#define RED "\033[0;31m"
#define END "\033[0m"
#include <iostream>

class Bureaucrat
{
private:
	std::string const	_name;
	int 				_grade;

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &);
	void operator=(Bureaucrat const &);
	~Bureaucrat();

	std::string getName() const;
	int getGrade() const;

	void incrementGrade();
	void decrementGrade();

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return (RED "Grade too low" END);
		}
	};

	class GradeTooHightException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return (RED "Grade too hight" END);
		}
	};

};

std::ostream &operator<<(std::ostream &cout, const Bureaucrat &instance);

#endif
