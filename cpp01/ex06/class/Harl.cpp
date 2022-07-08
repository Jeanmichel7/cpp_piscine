/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 22:12:42 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/08 20:06:57 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	return;
}

Harl::~Harl()
{
	return;
}

void	Harl::debug() const {
	std::cout
	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup \
burger. I really do!"
	<< std::endl;
}

void	Harl::info() const{
	std::cout
	<< "I cannot believe adding extra bacon costs more money. You didn’t put \
enough bacon in my burger! If you did, I wouldn’t be asking for more!"
	<< std::endl;
}

void	Harl::warning() const{
	std::cout
	<< "I think I deserve to have some extra bacon for free. I’ve been coming for \
years whereas you started working here since last month."
	<< std::endl;
}

void	Harl::error() const{
	std::cout
	<< "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}


void Harl::complain( std::string level )
{
	//tableau de str avec 4 level
	std::string tab_levels[4];
	tab_levels[0] = "DEBUG";
	tab_levels[1] = "INFO";
	tab_levels[2] = "WARNING";
	tab_levels[3] = "ERROR";

	enum Level {
		DEBUG,
		INFO,
		WARNING,
		ERROR
	};

	int		i;
	for(i = 0; i < 4; i++) {
		if (level == tab_levels[i]) {
			break;
		}
	}

	//tableau de fonctions avec les 4 fcts
	typedef	void (Harl::*p_fct)(void) const;
	p_fct	tab_p_fct[4];
	
	tab_p_fct[0] = &Harl::debug;
	tab_p_fct[1] = &Harl::info;
	tab_p_fct[2] = &Harl::warning;
	tab_p_fct[3] = &Harl::error;

	switch (i)
	{
	case (DEBUG) :
		std::cout << "[" << tab_levels[i] << "]" << std::endl;
		(this->*tab_p_fct[i])();
		i++;
	case (INFO) :
		std::cout << "[" << tab_levels[i] << "]" << std::endl;
		(this->*tab_p_fct[i])();
		i++;
	case (WARNING):
		std::cout << "[" << tab_levels[i] << "]" << std::endl;
		(this->*tab_p_fct[i])();
		i++;
	case (ERROR):
		std::cout << "[" << tab_levels[i] << "]" << std::endl;
		(this->*tab_p_fct[i])();
	    break;
	default: std::cout << "Pas de correspondance" << std::endl;
	    break;
	}
}

/*
https://fr.wikibooks.org/wiki/Programmation_C-C%2B%2B/Pointeurs_et_r%C3%A9f%C3%A9rences_de_fonctions
*/