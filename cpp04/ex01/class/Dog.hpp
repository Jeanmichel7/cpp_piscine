/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:22:06 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/16 15:50:34 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__

#include "Animal.hpp"

class Dog : public Animal
{
	Brain 		*_ptr_brain;

public:
	Dog();
	Dog(Dog const &);
	~Dog();
	void operator =(Dog const &);
	
	std::string	getType() const;
	Brain		*AGetBrain() const;
	void		makeSound() const;
};

#endif
