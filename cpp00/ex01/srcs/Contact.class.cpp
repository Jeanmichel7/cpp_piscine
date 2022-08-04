/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 12:46:30 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/04 16:23:38 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact::Contact (void) {
	this->first_name = "";
	return;
}

Contact::~Contact (void) {
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
	while (str.empty())
		std::getline (std::cin, str);
	this->darkest_secret = str;
}

void	Contact::set_first_name(std::string name) {
	this->first_name = name;
}

void	Contact::set_last_name(std::string lastname) {
	this->last_name = lastname;
}

void	Contact::set_nickname(std::string nickname) {
	this->nickname = nickname;
}

void	Contact::set_phone_number(std::string phone) {
	this->phone_number = phone;
}

void	Contact::set_darkest_secret(std::string secret) {
	this->darkest_secret = secret;
}



std::string	Contact::get_first_name() const {
	return (this->first_name);
}

std::string	Contact::get_last_name() const {
	return (this->last_name);
}

std::string	Contact::get_nickname() const {
	return (this->nickname);
}

std::string	Contact::get_phone_number() const {
	return (this->phone_number);
}

std::string	Contact::get_darkest_secret() const {
	return (this->darkest_secret);
}