/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:49:44 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/08 22:16:53 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.h"

/*
Dans C99, il est défini comme "un type entier non signé avec la propriété que 
tout pointeur valide vers void peut être converti en ce type, puis reconverti 
en pointeur vers void, et le résultat sera égal au pointeur d'origine".
*/

int main()
{
	Data 		data = Data();
	Data 		*ptr_data = &data;
	//Data 		*ptr_data = new Data();
	uintptr_t 	ret1;
	Data 		*ptr_retour;

	std:: cout << data << std::endl;
	printf("adresse pointeur ptr_data	: %p\n", ptr_data);

	ret1 = serialize(ptr_data);
	ptr_retour = deserialize(ret1);

	printf("adresse pointeur ptr_retour	: %p\n", ptr_retour);

	//delete ptr_data;
	return 0;
}


uintptr_t	serialize(Data* ptr)
{
	uintptr_t tmp;

	tmp = reinterpret_cast<uintptr_t>(ptr);
	return (tmp);
}

Data*		deserialize(uintptr_t raw)
{
	Data* new_ptr;

	new_ptr = reinterpret_cast<Data*>(raw);
	return new_ptr;
}
