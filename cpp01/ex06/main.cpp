/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 22:12:37 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/07 00:42:18 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {

	Harl harl;

	if (argc != 2) {
		std::cout << "Mauvais nombre d'argument" << std::endl;
		return (0);
	}

	harl.complain(argv[1]);
	return 0;
}