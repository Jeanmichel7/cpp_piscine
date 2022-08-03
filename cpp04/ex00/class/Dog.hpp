/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:22:06 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/04 00:55:34 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__

#include "Animal.hpp"

class Dog : public Animal
{

protected:
	std::string _type;
	
public:
	Dog();
	Dog(Dog const &);
	virtual ~Dog();
	
	void operator =(Dog const &);
	std::string	getType() const;

	void	makeSound() const;
	
};

#endif
