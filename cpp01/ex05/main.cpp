/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 22:12:37 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/06 23:30:25 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {

	Harl cassecouiolle;

	cassecouiolle.complain("DEBUG");
	cassecouiolle.complain("INFO");
	cassecouiolle.complain("WARNING");
	cassecouiolle.complain("ERROR");
	cassecouiolle.complain("");
	cassecouiolle.complain("blabla");


	return 0;
}