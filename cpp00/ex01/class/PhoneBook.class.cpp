/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 12:13:03 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/02 04:17:02 by jrasser          ###   ########.fr       */
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
	std::cout << "menu add contact : \n" << std::endl;

	int	i;
	for(i = 0; tab_contact[i].get_first_name() != "" && i < 6; i++);
	this->tab_contact[i].set_contact();
}

//index, first name, last name and nickname.
void	PhoneBook::search_contact() {
	std::cout << "search contact" << std::endl;
	this->display_phonebook();

	int	index_search = 0;
	std::cout << "Indiquer le numero de contact rechercher :" << std::endl;
	std::cin >> index_search;

	this->display_contact(index_search);

	// recup input index
	// affiche conact[i]
}

void	PhoneBook::display_contact(int i) {
	std::cout << "first name : " << tab_contact[i].get_first_name() << std::endl
			<< "last_name : "		<< tab_contact[i].get_last_name()		<< std::endl
			<< "nickname : "		<< tab_contact[i].get_nickname()		<< std::endl
			<< "phone number : "	<< tab_contact[i].get_phone_number()	<< std::endl
			<< "darkest secret : "	<< tab_contact[i].get_darkest_secret()	<< std::endl;
}

void	PhoneBook::display_phonebook() {
	for(int i = 0; i < 8; i++) {
		if (tab_contact[i].get_first_name() != "")
		{
			std::cout << "first name : " << tab_contact[i].get_first_name() << std::endl
			<< "last_name : "		<< tab_contact[i].get_last_name()		<< std::endl
			<< "nickname : "		<< tab_contact[i].get_nickname()		<< std::endl
			<< "phone number : "	<< tab_contact[i].get_phone_number()	<< std::endl
			<< "darkest secret : "	<< tab_contact[i].get_darkest_secret()	<< std::endl;
		}
	}
}

void	PhoneBook::exit(void) {
	std::exit(0);
}