/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 05:20:52 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/19 18:23:48 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.h"

/* Function subject */
class Awesome
{
public:
	Awesome(void) : _n(42) { return; }
	int get(void) const { return this->_n; }

private:
	int _n;
};
std::ostream &operator<<(std::ostream &o, Awesome const &rhs)
{
	o << rhs.get();
	return o;
}
template <typename T>
void print(T const &x)
{
	std::cout << x << std::endl;
	return;
}


/* Function default */
template< typename A >
void	the_function(A const &x)
{
	std::cout << x << "";
}

/* Function spe int */
template<>
void	the_function(int const &x)
{
	std::cout << x << " ";
}

/* Function spe float */
template<>
void	the_function(float const &x)
{
	std::cout << x << " - ";
}


int main()
{
	char	string[11] 	= {'H','e','l','l','o',' ','w','o','r','l','d'};
	int		tab_int[11] = {'H','e','l','l','o',' ','w','o','r','l','d'};
	float	tab_f[3]	= {42.042f, 123.456, 0.1f};

	int tab[] = {0, 1, 2, 3, 4}; // <--- I never understood why you can 't write int[] tab. Wouldn' t that make more sense ? 
	Awesome tab2[5];
	iter(tab, 5, print);
	iter(tab2, 5, print);

	std::cout << "\n\nTEST char" << std::endl;
	std::cout << "Address tab	: " << &string << std::endl
			  << "Taille tab	: " << *(&string + 1) - string << std::endl
			  << "Fct display	: ";
	iter(string, 11, the_function);
	std::cout << std::endl << std::endl;


	std::cout << "TEST int" << std::endl;
	std::cout << "Address tab	: " << &tab_int << std::endl
			  << "Taille tab	: " << *(&tab_int + 1) - tab_int << std::endl
			  << "Fct display	: ";
	::iter(tab_int, 11, the_function);
	std::cout << std::endl << std::endl;


	std::cout << "TEST float" << std::endl;
	std::cout << "Address tab	: " << &tab_f << std::endl
			  << "Taille tab	: " << *(&tab_f + 1) - tab_f << std::endl
			  << "Fct display	: ";
	::iter(tab_f, 3, the_function);
	std::cout << std::endl << std::endl;

	

	return 0;
}