/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 12:46:30 by jrasser           #+#    #+#             */
/*   Updated: 2022/06/30 14:34:32 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"
#include <limits>

Contact::Contact (void) {
	//std::cout << "Constructor called" << std::endl;
	this->first_name = "";
	return;
}

Contact::~Contact (void) {
	//std::cout << "Destructor" << std::endl;
	return;
}

void	Contact::set_contact() {
	std::string	str;

	std::cout << "first_name : "; 
	std::cin >> str;
	this->first_name = str;
	std::cout << this->first_name << std::endl;
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::cout << "last_name : "; 
	std::cin >> str;
	this->last_name = str;
	std::cout << this->last_name << std::endl;
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::cout << "nickname : "; 
	std::cin >> str;
	this->nickname = str;
	std::cout << this->nickname << std::endl;
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::cout << "phone_number : "; 
	std::cin >> str;
	this->phone_number = str;
	std::cout << this->phone_number << std::endl;
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::cout << "darkest_secret : "; 
	std::cin >> str;
	this->darkest_secret = str;
	std::cout << this->darkest_secret << std::endl;
}

void	Contact::get_contact() {
	std::cout << this->first_name << std::endl;
	std::cout << this->last_name << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->phone_number << std::endl;
	std::cout << this->darkest_secret << std::endl;
}