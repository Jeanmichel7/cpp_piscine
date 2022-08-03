/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:42:56 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/03 17:17:43 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"


int main(int argc, char **argv)
{
	std::string str;
	int			i;
	int			is_same = 1;
	char 		c;

	if (argc != 4)
	{
		std::cout << "bad nbs args" << std::endl;
		return (0);
	}
		
	str = argv[2];
	std::ifstream ifs(argv[1]);
	std::ofstream ofs("output.txt");

	c = ifs.get();
	while (c != EOF)
	{
		if ((c >= 9 && c <= 13) || c == ' ') {
			ofs << c;
		}
		else {
			if (c == argv[2][0]) {

				i = 0;
				while ((c < 9 || c > 13) && c != ' ')
				{
					if (c != argv[2][i])
					{
						is_same = 0;
						break;
					}
					c = ifs.get();
					i++;
				}

				if (i != (int)str.length())
					is_same = 0;
				ifs.seekg ((i * -1) - 1, std::ios::cur);
				c = ifs.get();
				if (is_same)
				{
					i = 0;
					while ((c < 9 || c > 13) && c != ' ')
					{
						ofs << argv[3][i];
						c = ifs.get();
						i++;
					}
				}
				ofs << c;
				is_same = 1;
			}
			else
				ofs << c;
		}
		c = ifs.get();
	}
	ifs.close();
	ofs.close();

	return 0;
}



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
