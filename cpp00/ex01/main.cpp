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

#include <iostream>
#include <limits>
#include <string>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

void	ft_bad_input(std::string str)
{
	std::cout << "commande " << str << " non reconnu" << std::endl;
}

int	ft_nb_word(std::string str)
{
	//std::cout << "test " << std::endl;
	for (int i = 0; str[i]; i++) {
		if (str[i] == ' ') return (1);
	}
	//std::cout << std::endl;
	return (0);
}

int main() {
	
	PhoneBook	phonebook;
	
	std::string	input;

	while (1) {
		std::cout << "entrer une commade : ";
		std::cin >> input;
		//std::cout << input << " len " << input.length() << std: :endl;
		if (ft_nb_word(input))
			ft_bad_input(input);
		else
		{
			input.length() == 3 && input == "ADD" ? phonebook.add_contact(): \
			input.length() == 6 && input == "SEARCH" ? phonebook.search_contact(): \
			input.length() == 4 && input == "EXIT" ? phonebook.exit() \
			: ft_bad_input(input);
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	return (0);
}
