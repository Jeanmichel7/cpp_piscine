/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 02:13:41 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/08 20:51:25 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <cmath>
#include "Convert.h"

int	ft_check_literal(std::string str)
{
	int 	type = 0;
	int		nb_dot = 0;
	int		nb_f = 0;
	bool	contain_only_num = true;
	bool	contain_asci = false;
	size_t i;

	for(i = 0; i < str.length(); i++ )
	{
		if ((str[i] < '0' || str[i] > '9') || ( i > 0 && (str[i] == '-')))
			contain_only_num = false;
		if (str[i] == '.')
			nb_dot ++;
		if ((str[i] == 'f' || str[i] == 'F'))
			nb_f ++;
		if ((((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
		&& str[i] != 'f' && str[i] != 'F') || ( i > 0 && (str[i] == '-')))
			contain_asci = true;
	}
	//std::cout << "nb_dot: " << nb_dot << std::endl;
	//std::cout << "nb_f: " << nb_f << std::endl;
	if (contain_only_num)
		type = 2;
	if (nb_f == 1 && str[str.length() - 1] == 'f' && nb_dot < 2)
		type = 3;
	if (nb_f == 0 && nb_dot < 2 && !contain_asci)
		type = 4;
	if (i == 1 && !contain_only_num)
		type = 1;
	return (type);
}

int	ft_stoi(std::string str)
{
	std::stringstream degree(str);

	int x = 0;
	degree >> x;
	return x;
}

float	ft_stof(std::string str)
{
	float f;
	std::istringstream(str) >> f;
	return (f);
}

double	ft_stod(std::string str)
{
	double temp = ::atof(str.c_str());
	return (temp);
}


int main(int argc, char const *argv[])
{
	std::string input;
	int			type = 0;

	if (argc != 2)
	{
		std::cout << "Need 1 arg (char, int, float or double)" << std::endl;
		return (0);
	}

	input = argv[1];
	type = ft_check_literal(input);

	Convert b(0);
	if (type == 1)
	{
		Convert a(argv[1][0]);
		std::cout << "input type char " << input << std::endl;
		b = a;
		//std::cout << "Value in class " << b.getChar() << std::endl << std::endl;
	}
	else if (type == 2)
	{
		Convert a(ft_stoi(input));
		std::cout << "input type int " << input << std::endl << std::endl;
		b = a;
		//std::cout << "Value in class " << b.getInt() << std::endl << std::endl;
	}
	else if (type == 3)
	{
		Convert a(ft_stof(input));
		std::cout << "input type float " << input << std::endl << std::endl;
		b = a;
		//std::cout << "Value in class b " << b.getFloat() << std::endl << std::endl;
	}
	else if (type == 4)
	{
		Convert a(ft_stod(input));
		std::cout << "input type double " << input << std::endl << std::endl;
		b = a;
		//std::cout << "Value in class " << b.getDouble() << std::endl << std::endl;
	}
	else
	{
		Convert a(input);
		std::cout << "input type string " << input << std::endl << std::endl;

		b = a;
	}

	char	c = b;
	int		i = b;
	float	f = b;
	double	d = b;

	std::cout << "char	 ";
	if (c == -1)
	{
		
		if (c < 30 || c > 126)
			std::cout << "Cannot display" << std::endl;
		else
			std::cout << "impossible" << std::endl;
	}
	else
	{
		if (c < 30 || c > 126)
			std::cout << "Cannot display" << std::endl;
		else
			std::cout << c << std::endl;
	}

	std::cout << "int	 ";
	if (i == -1)
		std::cout << "Impossible" << std::endl;
	else
		std::cout << i << std::endl;


	std::cout << "float	 ";
	if (f == -1)
		std::cout << "NaN";
	else
		std::cout << f;
		//std::cout << f << (ceilf(f) == f ? ".0" : "");
	std::cout << "f" << std::endl;


	std::cout << "double	 ";
	if (d == -1)
		std::cout << "NaN" << std::endl;
	else
		std::cout << d << std::endl;
		//std::cout << d << (ceilf(d) == d ? ".0" : "") << std::endl;

	return 0;
}
