/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wronganimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:22:04 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/04 00:56:10 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__

#include <iostream>

class WrongAnimal
{

protected:
	std::string _type;

public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &);
	virtual ~WrongAnimal();
	
	void	operator =(WrongAnimal const &);
	std::string	getType() const;

	void	makeSound() const;

};

#endif