/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 05:58:41 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/11 21:31:34 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MAX_VAL 750

#include "Array.hpp"

int main()
{
{
	std::cout << BLU "TEST SUBJECT" END << std::endl << std::endl;

	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	//numbers.display();
	for (int i = 0; i < MAX_VAL; i++)
	{
		//std::cout << mirror[i] << " ";
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try {
		numbers[-2] = 0;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	try {
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++) {
		numbers[i] = rand();
	}
	delete [] mirror;//
}
{
	std::cout << std::endl << BLU "MY TEST" END << std::endl << std::endl;

	Array<int>	tab1;
	tab1.display();
	
	Array<int>	tab2(5);
	tab2.display();

	Array<float>	tab11(7);
	tab11.display();

	Array<char>	tab3(10);
	tab3.display();

	Array<char> tab_copie = tab3;
	tab_copie.display();
	std::cout << "TEST tab_copy : " << (tab_copie[0] != tab3[0] ? "different" : "pareil") 
			  << " que Array[10]" << std::endl << std::endl;

	tab_copie.modify();
	std::cout << "Modify tab_copie	: ";
	tab_copie.display();
	std::cout << "Original array		: ";
	tab3.display();


	Array<int>	tab10(3);
	tab10.display();

	tab10 = tab2;
	tab10.display();

	tab10.modify();
	std::cout << "Modify tab_affect	: ";
	tab10.display();

	std::cout << "Original array		: ";
	tab2.display();

	std::cout << "Test member function size() " << std::endl;
	std::cout << "size : " << tab2.size() << std::endl;
}
	return 0;
}
