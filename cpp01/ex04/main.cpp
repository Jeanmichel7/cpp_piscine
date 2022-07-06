/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:42:56 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/06 19:37:12 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

/*
int main(int argc, char **argv)
{

	if (argc != 4)
	{
		std::cout << "bad nbs args" << std::endl;
		return (0);
	}

	std::fstream src, dest;
	src.open(argv[1]);
	dest.open("output.txt");

	std::filebuf *inbuf = src.rdbuf();
	std::filebuf *outbuf = dest.rdbuf();



	std::cout << "str : " << inbuf << std::endl;

	char c = inbuf->sbumpc();
	while (c != EOF)
	{
		std::cout << c << std::endl;
		//dest << c;
		dest << outbuf->sputc(c);
		c = inbuf->sbumpc();
	}

	dest.close();
	src.close();

	return 0;
}
*/

int main(int argc, char **argv)
{

	std::ifstream ifs(argv[1]);
	std::ofstream ofs("output.txt");

	std::string str;
	char c;

	if (argc != 4)
	{
		std::cout << "bad nbs args" << std::endl;
		return (0);
	}

	ifs >> str;
	c = ifs.get();

	while (ifs)
	{
		std::cout << "str : " << str << std::endl;
		std::cout << "char : '" << c << "'" << std::endl;


		if (str == argv[2])
			ofs << argv[3];
		else
			ofs << str;

		if ( c != EOF && ((c >= 9 && c <= 13) || c == ' ')) {
			ofs << c;
		}

		ifs >> str;
		c = ifs.get();
	}
	//c = ifs.get();
	ofs << str;


	ifs.close();
	ofs.close();

	return 0;
}