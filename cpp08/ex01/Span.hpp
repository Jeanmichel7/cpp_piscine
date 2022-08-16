/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:28:56 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/12 16:33:15 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN__
# define __SPAN__

# define RED "\033[0;31m"
# define BLU "\033[0;34m"
# define END "\033[0m"

# include <iostream>
# include <vector>
# include <limits>
# include <cstdlib>
# include <algorithm>


class Span
{
private:
	unsigned int		_n;
	std::vector<int>	_stock;

public:
	Span();
	Span(unsigned int n);
	~Span();
	Span(Span const &);
	Span	&operator = (Span &);

	void			display();
	void			display_resume();
	void			addNumber(int num);
	void			addRandomNumbers(unsigned int n);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();

	class ContainerFull : public std::exception {
	public:
		virtual const char* what() const throw() {
			return (RED "Container is full!" END);
		}
	};

	class ContainerEmpty : public std::exception {
	public:
		virtual const char* what() const throw() {
			return (RED "Cannot find the distance" END);
		}
	};
};

#endif