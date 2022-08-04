/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 01:38:59 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/04 02:04:56 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Constructor Brain" << std::endl;
	return;
}

Brain::Brain(Brain const &tmp) : _ideas(tmp._ideas)
{
	return;
}

Brain::~Brain()
{
	std::cout << "Destrutor Brain" << std::endl;
	return;
}

void	Brain::operator =(Brain const &tmp)
{
	for(int i = 0; i < 100; i++)
	{
		_ideas[i] = tmp._ideas[i];
	}
	return;
}
