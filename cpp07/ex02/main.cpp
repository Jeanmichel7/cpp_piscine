/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 05:58:41 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/09 18:11:09 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
/*
int main()
{
	Array<int>	tab1;
	//tab1.display();
	
	Array<int>	tab2(5);
	tab2.display();

	Array<char>	tab3(10);
	tab3.display();

	Array<char> tab_copie = tab3;
	tab_copie.display();
	
	
	tab_copie.modify();
	tab_copie.display();
	tab3.display();


	Array<int>	tab10(3);
	tab10.display();

	tab10 = tab2;
	tab10.display();

	tab10.modify();
	tab10.display();

	tab2.display();
	std::cout << "size : " << tab2.size() << std::endl;


	return 0;
}
*/


#include <iostream>
//#include <Array.hpp>

#define MAX_VAL 750
int main(int, char**)
{
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

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}