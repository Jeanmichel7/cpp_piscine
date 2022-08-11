/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 22:20:17 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/11 20:03:30 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <exception>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);

int main()
{
	Base *p_base = generate();
	
	identify(p_base);
	identify(*p_base);

	delete p_base;
	return 0;
}

Base * generate(void)
{
	Base 	*p_base;
	int 	random;

	p_base = NULL;
	std::srand(std::time(NULL));
	random = std::rand();

	if (random % 3 == 0)
		{ p_base = new A(); std::cout << "Creat A" << std::endl; }
	else if (random % 3 == 1)
		{ p_base = new B(); std::cout << "Creat B" << std::endl; }
	else if (random % 3 == 2)
		{ p_base = new C(); std::cout << "Creat C" << std::endl; }
	return (p_base);
}


void identify(Base* p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "Identify by pointeur	: Class A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "Identify by pointeur	: Class B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "Identify by pointeur	: Class C" << std::endl;
}


void identify(Base& p)
{
	int a = 0;
	int b = 0;
	int c = 0;
	A classA;
	B classB;
	C classC;

	try {
		(void)dynamic_cast<A&>(p);
		a = 1;
	}
	catch(const std::exception& e) {}

	try {
		(void)dynamic_cast<B&>(p);
		b = 1;
	}
	catch(const std::exception& e) {}

	try {
		(void)dynamic_cast<C&>(p);
		c = 1;
	}
	catch(const std::exception& e) {}

	std::cout << "Identify by reference	: "
			  << ( a ? "Class A" : "")
			  << ( b ? "Class B" : "")
			  << ( c ? "Class C" : "") << std::endl;
}
