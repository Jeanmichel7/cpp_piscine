/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 22:12:42 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/07 03:53:58 by jrasser          ###   ########.fr       */
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

void	Harl::info() {
	std::cout
	<< "I cannot believe adding extra bacon costs more money. You didn’t put \
enough bacon in my burger! If you did, I wouldn’t be asking for more!"
	<< std::endl;
}

void	Harl::warning() {
	std::cout
	<< "I think I deserve to have some extra bacon for free. I’ve been coming for \
years whereas you started working here since last month."
	<< std::endl;
}

void	Harl::error() {
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


	//tableau de fonctions avec les 4 fcts
	typedef	void (Harl::*p_fct)(void);
	p_fct	tab_p_fct[4];

    void    (*pdebug)(void);
    typedef     void (Harl::*debug());

    pdebug = &Harl::debug->debug1;
	tab_p_fct[0] = &Debug::debug1;
	tab_p_fct[1] = &Harl::info;
	tab_p_fct[2] = &Harl::warning;
	tab_p_fct[3] = &Harl::error;

	//comparer les 2 tableaux
	int	i;
	for(i = 0; i < 4; i++) {
		if (level == tab_levels[i]) {
			while (i < 4) {
				std::cout << "[" << tab_levels[i] << "]" << std::endl;
				(this->*tab_p_fct[i])();
				i++;
			}
		}
	}
	if (i == 4)
		std::cout << "Pas de correspondance" << std::endl;
}

/*
https://fr.wikibooks.org/wiki/Programmation_C-C%2B%2B/Pointeurs_et_r%C3%A9f%C3%A9rences_de_fonctions
*/