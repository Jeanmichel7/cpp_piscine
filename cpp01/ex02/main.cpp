/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:04:34 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/05 22:19:51 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {

	std::string str = "HI THIS IS BRAIN";
	std::string	*p_str = &str;
	std::string	&r_str = str;

	std::cout
	<< "The memory address of the string variable	( &str )	: "<< &str		<< std::endl
	<< "The memory address held by stringPTR 		( &p_str )	: "<< &p_str	<< std::endl
	<< "The memory address held by stringREF		( &r_str )	: "<< &r_str	<< std::endl
	<< std::endl
	<< "The value of the string variable 		( str )		: "<< str		<< std::endl
	<< "The value pointed to by stringPTR 		( *p_str )	: "<< *p_str	<< std::endl
	<< "The value pointed to by stringREF 		( r_str ) 	: "<< r_str		<< std::endl
	<< std::endl;

	return 0;
}

/*
• A string variable initialized to "HI THIS IS BRAIN".
• stringPTR: A pointer to the string.
• stringREF: A reference to the string.
Your program has to print:
• The memory address of the string variable.
• The memory address held by stringPTR.
• The memory address held by stringREF.
And then:
• The value of the string variable.
• The value pointed to by stringPTR.
• The value pointed to by stringREF
*/