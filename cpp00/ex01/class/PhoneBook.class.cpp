/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 12:13:03 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/02 02:36:17 by jrasser          ###   ########.fr       */
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
	this->tab_contact[0].set_contact();
}

//  index, first name, last name and nickname.
void	PhoneBook::search_contact() {
	std::cout << "search contact" << std::endl;
	this->display_phonebook();
	// recup input index
	// affiche conact[i]
}

void	PhoneBook::display_phonebook()
{
	for(int i = 0; i < 8; i++) {
		this->tab_contact[i].get_contacts();
	}
}

void	PhoneBook::exit(void) {
	std::exit(0);
}