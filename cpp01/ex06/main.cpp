/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 22:12:37 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/08 17:30:45 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Harl.hpp"

int main(int argc, char **argv) {

	Harl harl;

	if (argc != 2) {
		std::cout << "Mauvais nombre d'argument" << std::endl;
		return (0);
	}

	harl.complain(argv[1]);
	return 0;
}