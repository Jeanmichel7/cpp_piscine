/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:22:09 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/04 00:42:28 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONG_CAT_HPP__
# define __WRONG_CAT_HPP__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

protected:
	std::string _type;

public:
	WrongCat();
	WrongCat(WrongCat const &);
	virtual ~WrongCat();
	
	void	operator =(WrongCat const &);
	virtual std::string	getType() const;

	virtual void	makeSound() const;
	
};

#endif