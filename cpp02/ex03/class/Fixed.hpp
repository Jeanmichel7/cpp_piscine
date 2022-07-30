/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 22:57:37 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/30 20:52:20 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					_value;
	static const int	_nb_fractionnaire = 8;
public:
	Fixed();
	Fixed(const int cst_int);
	Fixed(const float cst_float);
	Fixed(const Fixed &copie);
	~Fixed();

	Fixed	&operator =(const Fixed &n);
	bool	operator >(Fixed &n) const;
	bool	operator <(Fixed &n) const;
	bool	operator >=(Fixed &n) const;
	bool	operator <=(Fixed &n) const;
	bool	operator ==(Fixed &n) const;
	bool	operator !=(Fixed &n) const;

	Fixed	operator +(Fixed n) const;
	Fixed	operator -(Fixed n) const;
	Fixed	operator *(Fixed n) const;
	Fixed	operator /(Fixed n) const;

	Fixed	&operator ++();
	Fixed	operator ++(int);

	void	setRawBits( int const raw );
	int		getRawBits( void ) const;
	float	toFloat( void ) const;
	int		toInt( void ) const;

	static Fixed	min(Fixed &ref1, Fixed &ref2);
	static Fixed	min(Fixed const &ref1, Fixed const &ref2);
	static Fixed	max(Fixed &ref1, Fixed &ref2);
	static Fixed	max(Fixed const &ref1, Fixed const &ref2);
};

std::ostream &operator<<(std::ostream &blabla, const Fixed &instance);

#endif