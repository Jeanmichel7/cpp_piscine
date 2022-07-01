/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 23:12:29 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/01 23:12:31 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	ft_bad_input(std::string str) {
	std::cout << "commande " << str << " non reconnu" << std::endl;
}

void	ft_clear_buffer() {
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

/* PHONEBOOK SEARCH 
void	ft_display_tab_contact(Contact tab[])
{
	for (int i = 0; i < 2, i++)
	{
		std::cout >> tab[i] >> std::endl;
	}
}
*/