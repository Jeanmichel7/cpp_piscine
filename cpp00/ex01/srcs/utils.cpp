/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 23:12:29 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/03 00:50:03 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	ft_bad_input(std::string str) {
	std::cout << "\001\e[01;31m\002Commande \"" << str << "\" non reconnue\001\e[00;37m\002" << std::endl;
	ft_clear_buffer();
}

void	ft_clear_buffer() {
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
