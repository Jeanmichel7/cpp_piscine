/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 23:13:35 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/02 02:11:36 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# include "class/PhoneBook.class.hpp"
# include "class/Contact.class.hpp"
# include <iostream>
# include <limits>
# include <string>
# include <stdio.h>
# include <stdlib.h>

void	ft_bad_input(std::string str);
void	ft_clear_buffer();
void	ft_display_tab_contact(Contact tab[]);

#endif