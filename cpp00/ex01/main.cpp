/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 12:19:04 by jrasser           #+#    #+#             */
/*   Updated: 2022/06/30 14:34:39 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main() {
	
	PhoneBook	phonebook;
	std::string	input;
	
	while (1) {
		std::cout << "entrer une commande : ";
		std::cin >> input;
		input.length() == 3 && input == "ADD" ? phonebook.add_contact(): \
		input.length() == 6 && input == "SEARCH" ? phonebook.search_contact(): \
		input.length() == 4 && input == "EXIT" ? phonebook.exit() \
		: ft_bad_input(input);
		ft_clear_buffer();
	}
	return (0);
}
