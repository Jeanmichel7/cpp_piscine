/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:22:06 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/04 02:05:36 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

private:
	Brain *_ptr_brain;
	
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
