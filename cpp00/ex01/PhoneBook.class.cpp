/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 12:13:03 by jrasser           #+#    #+#             */
/*   Updated: 2022/06/30 14:45:10 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

PhoneBook::PhoneBook (void) {

	//std::cout << "Constructor called" << std::endl;
	//Contact tab_contact[8];
	return;
}

PhoneBook::~PhoneBook (void) {
	//std::cout << "Destructor" << std::endl;
	return;
}

void	PhoneBook::add_contact() {

	std::string	str;

	std::cout << "menu add contact : ";

	std::cout << "first name : ";
	std::cin >> str;
	this->tab_contact[0].add_contact_first_name(str);
}








void	PhoneBook::search_contact(void) {
	std::cout << "search contact" << std::endl;
}

void	PhoneBook::exit(void) {
	std::exit(0);
}