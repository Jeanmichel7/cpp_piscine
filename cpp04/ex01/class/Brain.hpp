/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 01:38:29 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/11 15:20:14 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__

#include <iostream>
#include <string>

class Brain
{

private:
	std::string *_ideas;

public:
	Brain();
	Brain(Brain const &);
	void	operator =(Brain const &);
	~Brain();

	void		setIdea1( int idea);
	std::string getIdea1() const;
};




#endif