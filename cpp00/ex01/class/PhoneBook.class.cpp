/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 12:13:03 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/03 01:20:19 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.hpp"

PhoneBook::PhoneBook (void) {
	return;
}

PhoneBook::~PhoneBook (void) {
	return;
}

void	PhoneBook::add_contact() {
	int	i;

	std::cout << "\001\e[04;37m\002Menu add contact\001\e[00;37m\002" << std::endl << std::endl;
	ft_clear_buffer();


	for(i = 7; i >= 0; i--) {
		if (tab_contact[i].get_first_name() != "" && i != 7)
		{
			this->tab_contact[i + 1].set_first_name(this->tab_contact[i].get_first_name());
			this->tab_contact[i + 1].set_last_name(this->tab_contact[i].get_last_name());
			this->tab_contact[i + 1].set_nickname(this->tab_contact[i].get_nickname());
			this->tab_contact[i + 1].set_phone_number(this->tab_contact[i].get_phone_number());
			this->tab_contact[i + 1].set_darkest_secret(this->tab_contact[i].get_darkest_secret());
		}
	}
	this->tab_contact[0].set_contact();
	std::cout << "\001\e[02;34m\002Contact ajouté\001\e[00;37m\002 " << std::endl;
}

void	PhoneBook::search_contact() {
	std::string	index_search;
	int			index;

	std::cout << "\001\e[04;37m\002Menu search contact\001\e[00;37m\002" << std::endl;
	this->display_phonebook();

	while (index_search != "STOP")
	{
		std::cout << "\001\e[01;34m\002Indiquer l'index du contact rechercher ou \001\e[01;32m\002STOP\001\e[00;37m\002: ";
		std::cin >> index_search;
		index = (int)(index_search[0] - '0');
		if (index_search.length() == 1 && index < 8 && tab_contact[index].get_first_name() != "")
			this->display_contact(index);
		else
			std::cout << "Essaye encore..." << std::endl << std::endl;
	}
	ft_clear_buffer();
}

void	PhoneBook::display_contact(int i) {
	std::cout
	<< std::endl << std::endl
	<< "First name :     " << tab_contact[i].get_first_name()		<< std::endl
	<< "Last_name :      " << tab_contact[i].get_last_name()		<< std::endl
	<< "Nickname :       " << tab_contact[i].get_nickname()			<< std::endl
	<< "Phone number :   " << tab_contact[i].get_phone_number()		<< std::endl
	<< "Darkest secret : " << tab_contact[i].get_darkest_secret()	<< std::endl << std::endl;
}

void	PhoneBook::display_phonebook() {
	std::string	str;

	std::cout << std::endl;
	if (tab_contact[0].get_first_name() != "")
	{
		std::cout << "\001\e[01;34m\002   Index  |First_name| Last_name| Nickname \001\e[00;37m\002" << std::endl;
		for(int i = 0; i < 8; i++) {
			if (tab_contact[i].get_first_name() != "")
			{
				std::cout << std::setw(10) << (char)('0' + i) << "|";
				str = tab_contact[i].get_first_name();
				std::cout << std::setw(10) << (str.length() > 9 ? (str.erase(9) + ".") : str) << "|";
				str = tab_contact[i].get_last_name();
				std::cout << std::setw(10) << (str.length() > 9 ? (str.erase(9) + ".") : str) << "|";
				str = tab_contact[i].get_nickname();
				std::cout << std::setw(10) << (str.length() > 9 ? (str.erase(9) + ".") : str) << std::endl;
			}
		}
	}
	else
		std::cout << "Aucun contact" << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::exit(void) {
	std::cout << "A bientot" << std::endl << std::endl;
	std::exit(0);
}
