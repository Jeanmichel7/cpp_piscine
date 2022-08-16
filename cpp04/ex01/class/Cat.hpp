/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:22:09 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/16 16:15:10 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
# define __CAT_HPP__

#include "Animal.hpp"

class Cat : public Animal
{
	Brain 		*_ptr_brain;

public:
	Cat();
	Cat(Cat const &);
	~Cat();
	void operator =(Cat const &);
	
	std::string	getType() const;
	Brain		*AGetBrain() const;
	void		makeSound() const;
};

#endif