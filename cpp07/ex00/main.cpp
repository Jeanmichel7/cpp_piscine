/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 05:03:14 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/19 16:45:54 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
class Awesome
{
public:
	Awesome(void) : _n(0) {}
	Awesome(int n) : _n(n) {}
	Awesome &operator=(Awesome &a)
	{
		_n = a._n;
		return *this;
	}
	bool
	operator==(Awesome const &rhs) const { return (this->_n == rhs._n); }
	bool operator!=(Awesome const &rhs) const { return (this->_n !=
														rhs._n); }
	bool operator>(Awesome const &rhs) const { return (this->_n > rhs._n); }
	bool operator<(Awesome const &rhs) const { return (this -> _n < rhs._n); }
	bool operator>=(Awesome const &rhs) const { return (this->_n >= rhs._n); }
	bool operator<=(Awesome const &rhs) const
	{
		return (this->_n <= rhs._n);
	}
	int get_n() const { return _n; }

private:
	int
		_n;
};

std::ostream &operator<<(std::ostream &o, const Awesome &a)
{
	o << a.get_n();
	return o;
}
*/


template<typename T>
void	swap(T &x, T &y)
{
	T temp;
	temp = x;
	x = y;
	y = temp;
}

template< typename T>
T min(T const &x, T const &y) {
	if (x < y)
		return x;
	else
		return y;
}

template< typename T >
T max(T const &x, T const &y)
{
	if (x > y)
		return x;
	else
		return y;
}

// int main(void)
// {
// 	Awesome a(2), b(4);
// 	swap(a, b);
// 	std::cout << a << " " << b << std::endl;
// 	std::cout << max(a, b) << std::endl;
// 	std::cout << min(a, b) << std::endl;
// 	return (0);
// }


int main(void)
{
	int a = 5;
	int b = 50;

	::swap(a, b);
	std::cout << "a = '" << a << "' , b = '" << b << "'" << std::endl;

	std::cout << "min( a, b ) = '" << ::min(a, b) << "'" << std::endl;
	std::cout << "max( a, b ) = '" << ::max(a, b) << "'" << std::endl;


	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

	return 0;
}
