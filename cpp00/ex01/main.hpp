/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 23:13:35 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/01 23:13:36 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>
# include <limits>
# include <string>
# include "PhoneBook.class.hpp"
# include "Contact.class.hpp"
# include <stdio.h>

void	ft_bad_input(std::string str);
void	ft_clear_buffer();
void	ft_display_tab_contact(Contact tab[]);

#endif