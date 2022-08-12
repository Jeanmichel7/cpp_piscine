/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:28:53 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/12 15:55:23 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{

	std::cout << "Subject test" << "\n";
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;



	std::cout << "\n\nMy test" << std::endl;

	Span span(5);

	span.addNumber(1);
	span.addNumber(10);
	span.addNumber(100);
	span.addNumber(1000);
	span.addNumber(10000);
	span.addNumber(111111);
	span.display();

	unsigned int ret = span.shortestSpan();
	std::cout << "Distance min : " << ret << std::endl;

	ret = span.longestSpan();
	std::cout << "Distance max : " << ret << std::endl;


	span.addRandomNumbers(10000);
	span.display_resume();

	ret = span.shortestSpan();
	std::cout << "Distance min : " << ret << std::endl;
	ret = span.longestSpan();
	std::cout << "Distance max : " << ret << std::endl;


	return 0;
}