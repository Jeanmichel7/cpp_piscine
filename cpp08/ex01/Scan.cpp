/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scan.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:28:58 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/26 16:21:56 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span() : _n(0)
{ return; }

Span::Span(unsigned int n) : _n(n)
{ return; }

Span::~Span()
{ return; }

Span::Span(Span const &tmp) : _n(tmp._n), _stock(tmp._stock)
{ return ; }

Span	&Span::operator = (Span &tmp)
{
	//del ancien stock
	_stock.clear();

	//fill new
	for( std::vector<int>::iterator it = tmp._stock.begin(); it != tmp._stock.end(); ++it )
		_stock.push_back(*it);

	return *this;
}




/* FCT MEMBER */

void			Span::display()
{
	std::cout << "Stock contains:";
	for (std::vector<int>::iterator it = _stock.begin(); it != _stock.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';
}

void			Span::display_resume()
{
	bool			is_inter = false;
	unsigned int	i = 0;

	std::cout << "Stock resume contains:";
	for (std::vector<int>::iterator it = _stock.begin(); it != _stock.end(); ++it) {
		if (i < 10 || i > _stock.size() - 10)
			std::cout << ' ' << *it;
		else if (!is_inter)
		{
			std::cout << " [...]";
			is_inter = true;
		}
		i++;
	}
	std::cout << '\n';
}

void			Span::addNumber(int num)
{
	try {
		if (_stock.size() < _n)
			_stock.push_back(num);
		else
			throw Span::ContainerFull();
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << " add " << num << " ignored \n";
	}
}

void			Span::addRandomNumbers(unsigned int n)
{
	int random_array[n];

	for(unsigned int i = 0; i < n; i++) {
		random_array[i] = rand() % 100 ;
	}

	std::vector<int>::iterator it = _stock.end();
	_stock.insert(it, random_array, random_array + n);

}





unsigned int	Span::shortestSpan()
{
	unsigned int	dist_min = std::numeric_limits<unsigned int>::max() ;
	if (_n <= 1)
		throw Span::ContainerEmpty();
	
	for( std::vector<int>::iterator i = _stock.begin(); i != _stock.end(); ++i ){
		for( std::vector<int>::iterator j = i + 1; j != _stock.end(); ++j ){

			//std::cout << *i << " - " << *j << " = " << std::abs(*i - *j) << std::endl;
			if ((unsigned int)std::abs(*i - *j) < dist_min)
			{
				dist_min = std::abs(*i - *j);
			}
		}
	}
	return dist_min;
}





unsigned int	Span::longestSpan()
{
	unsigned int	dist_max = 0;
	if (_n <= 1)
		throw Span::ContainerEmpty();
	
	for( std::vector<int>::iterator i = _stock.begin(); i != _stock.end(); ++i ){
		for( std::vector<int>::iterator j = i + 1; j != _stock.end(); ++j ){

			//std::cout << *i << " - " << *j << " = " << std::abs(*i - *j) << std::endl;
			if ((unsigned int)std::abs(*i - *j) > dist_max)
			{
				dist_max = std::abs(*i - *j);
			}
		}
	}
	return dist_max;
}