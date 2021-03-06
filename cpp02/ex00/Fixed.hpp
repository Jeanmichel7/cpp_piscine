/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 22:57:37 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/28 03:32:50 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					_entier;
	static const int	_frac_nb_bits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &copie);
	Fixed& operator=(Fixed &operateur);

	void	setRawBits( int const raw );
	int		getRawBits( void ) const;
};

#endif