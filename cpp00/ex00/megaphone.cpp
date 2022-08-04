/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 23:37:37 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/04 16:56:27 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	ft_put_word(char *str)
{
	for (int i = 0; str[i]; i++) {
		std::cout << (char) toupper(str[i]);
	}
	std::cout << std::endl;
}

int main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (argc > 1) {
		for (int i = 1; i < argc; i++) {
			ft_put_word(argv[i]);
		}
	}
	return (0);
}
