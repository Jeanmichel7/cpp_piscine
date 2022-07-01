/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 23:37:37 by jrasser           #+#    #+#             */
/*   Updated: 2022/06/30 10:54:11 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	ft_put_word(char *str)
{
	for (int i = 0; str[i]; i++) {
		std::cout << (char) toupper(str[i]);
	}
}

int main(int argc, char *argv[])
{
	int		i = 1;
	int		j = 0;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (argc > 1) {
		for (int i = 1; i < argc; i++) {
			ft_put_word(argv[i]);
		}
	}
	return (0);
}
