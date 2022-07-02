/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 12:46:30 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/03 00:50:35 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.hpp"

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

	std::cout << "First_name     : ";
	std::cin >> str;
	this->first_name = str;
	ft_clear_buffer();

	std::cout << "Last_name      : ";
	std::cin >> str;
	this->last_name = str;
	ft_clear_buffer();

	std::cout << "Nickname       : ";
	std::cin >> str;
	this->nickname = str;
	ft_clear_buffer();

	std::cout << "Phone_number   : ";
	std::cin >> str;
	this->phone_number = str;
	ft_clear_buffer();

	std::cout << "Darkest_secret : ";
	std::getline (std::cin, str);
	this->darkest_secret = str;
	//ft_clear_buffer();


}

std::string	Contact::get_first_name() {
	return (this->first_name);
}

std::string	Contact::get_last_name() {
	return (this->last_name);
}

std::string	Contact::get_nickname() {
	return (this->nickname);
}

std::string	Contact::get_phone_number() {
	return (this->phone_number);
}

std::string	Contact::get_darkest_secret() {
	return (this->darkest_secret);
}