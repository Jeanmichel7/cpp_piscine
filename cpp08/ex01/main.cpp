/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:28:53 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/12 16:42:34 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{

	std::cout << BLU "Subject test" END<< "\n";
	Span sp = Span(4);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.display();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;



	std::cout << BLU "\n\nMy test" END << std::endl;

	std::cout << BLU "\nTest depassement" END << std::endl;
	Span bad_sp(5);
	bad_sp.addNumber(1);
	bad_sp.addNumber(10);
	bad_sp.addNumber(100);
	bad_sp.addNumber(1000);
	bad_sp.addNumber(10000);
	bad_sp.addNumber(100000);
	bad_sp.display();



	std::cout <<  BLU "\nTest constructeur de copie " END << std::endl;
	Span span(5);
	
	span.addRandomNumbers(4);
	std::cout << "sp_original	: ";
	span.display();

	Span sp_copie = span;
	std::cout << "sp_copie	: ";
	sp_copie.display();


	std::cout << BLU "Test modif copie whitout original" END << std::endl;
	sp_copie.addNumber(987);
	
	std::cout << "sp_copie	: ";
	sp_copie.display();
	std::cout << "sp_original	: ";
	span.display();



	std::cout <<  BLU "\nTest operateur d'affectation " END<< std::endl;
	std::cout << "Avant : ";
	sp_copie.display();
	sp_copie = sp;
	std::cout << "Apres : ";
	sp_copie.display();

	std::cout << BLU "Test modif copie whitout original" END << std::endl;
	sp_copie.addNumber(987);
	
	std::cout << "sp_copie	: ";
	sp_copie.display();
	std::cout << "sp_original	: ";
	sp.display();



	std::cout <<  BLU "\nTest shorest longest" END<< std::endl;
	span.display();
	unsigned int ret = span.shortestSpan();
	std::cout << "Distance min : " << ret << std::endl;

	ret = span.longestSpan();
	std::cout << "Distance max : " << ret << std::endl;


	std::cout <<  BLU "\nTest random 10000 numbers " END<< std::endl;
	span.addRandomNumbers(10000);
	span.display_resume();

	ret = span.shortestSpan();
	std::cout << "Distance min : " << ret << std::endl;
	ret = span.longestSpan();
	std::cout << "Distance max : " << ret << std::endl;



	return 0;
}
