/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 12:19:04 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/03 01:10:35 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main() {
	
	PhoneBook	phonebook;
	std::string	input;
	
	do {
		std::cout << std::endl
		<< "\001\e[01;34m\002Entrer une commande \001\e[01;32m\002(ADD / SEARCH / EXIT)\001\e[00;37m\002 : ";
		std::cin >> input;
		input.length() == 3 && input == "ADD" ? phonebook.add_contact(): \
		input.length() == 6 && input == "SEARCH" ? phonebook.search_contact(): \
		input.length() == 4 && input == "EXIT" ? phonebook.exit() \
		: ft_bad_input(input);
		std::cout << std::endl;
	} while (!input.empty());
	return (0);
}
