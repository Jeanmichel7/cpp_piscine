/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 12:13:03 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/02 04:29:14 by jrasser          ###   ########.fr       */
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

void	PhoneBook::search_contact() {
	int	index_search = 0;
	
	std::cout << "search contact" << std::endl;
	this->display_phonebook();
	std::cout << "Indiquer le numero de contact rechercher :" << std::endl;
	std::cin >> index_search;
	this->display_contact(index_search);
}

void	PhoneBook::display_contact(int i) {
	std::cout << "first name : " << tab_contact[i].get_first_name() << std::endl
			<< "last_name : "		<< tab_contact[i].get_last_name()		<< std::endl
			<< "nickname : "		<< tab_contact[i].get_nickname()		<< std::endl
			<< "phone number : "	<< tab_contact[i].get_phone_number()	<< std::endl
			<< "darkest secret : "	<< tab_contact[i].get_darkest_secret()	<< std::endl;
}

void	PhoneBook::display_phonebook() {

	std::cout << "index	| first_name	| last_name	| kickname" << std::endl;

	for(int i = 0; i < 8; i++) {
		if (tab_contact[i].get_first_name() != "")
		{

			std::cout << i << "	| "
			<< tab_contact[i].get_first_name() << "	| "
			<< tab_contact[i].get_last_name() << "	| "
			<< tab_contact[i].get_nickname() << std::endl;
		}
	}
}

void	PhoneBook::exit(void) {
	std::exit(0);
}