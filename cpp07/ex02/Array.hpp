/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 05:58:17 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/11 21:30:33 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY__
# define __ARRAY__

# define BLU "\033[0;34m"
# define RED "\033[0;31m"
# define GRN "\033[0;32m"
# define END "\033[0m"

# include <iostream>
# include <stdexcept>
# include <cstdlib>
# include <typeinfo>

template< typename T >
class Array
{
private:
	T 				*_tab;
	unsigned int	_n;

public:
	Array();
	Array(unsigned int n);
	Array(const Array<T> &);
	~Array();
	void 		operator =  (const Array<T> &);
	bool 		operator != (T &);
	T			&operator[] (int i);

	void		display();
	void		modify();
	unsigned	size() const { return _n; }

	class InvalidIndex : public std::exception {
	public:
		virtual const char* what() const throw() {
			return (RED "Invalid index acces !" END);
		}
	};
};




/* CONSTRUCTOR */

template<typename T> Array<T>::Array( void )
{
	std::cout << GRN "Construct Array[0]" END << std::endl;
	_n = 0;
	_tab = new T[_n];
}

template<typename T> Array<T>::Array(unsigned int n)
{
	std::cout << GRN "Construct Array[" << n << "] type : " << typeid(T).name() << END << std::endl;
	static int init_rand = 0;
	_n = n;
	_tab = new T[_n];
	
	srand(init_rand);
	for (unsigned i = 0; i < _n; i++) {
		T value;
		if (typeid(T).name() == typeid(char).name())
			value = rand() % 26 + 'a';
		else
			value = rand();
		_tab[i] = value;
	}

	init_rand += 100;
}

template< typename T > Array<T>::Array(const Array<T> &tmp)
{
	std::cout << GRN "Construct Copy Array[" << tmp._n << "]" END<< std::endl;

	_n = tmp._n;
	_tab = new T [tmp._n];

	for(unsigned i = 0; i < _n; i++) {
		_tab[i] = tmp._tab[i];
	}
	return;
}

template<typename T> Array<T>::~Array()
{
	delete [] _tab;
}




/* OPERATOR */

template< typename T >void  Array<T>::operator=(const Array<T> &tmp){
	std::cout << GRN "Operator affection" END << std::endl;

	delete [] _tab;
	_n = tmp._n;
	_tab = new T [tmp._n];

	for(unsigned i = 0; i < _n; i++) {
		_tab[i] = tmp._tab[i];
	}
	return;
}

template< typename T > bool Array<T>::operator!=(T &tmp)
{
	return (*this != tmp ? true : false);
}

template< typename T > T &Array<T>::operator[](int i)
{
	if (i >= static_cast<int>(_n) || i < 0)
		throw (InvalidIndex());
	else
		return _tab[i];
}




/* FCT MEMBER */

template< typename T > void Array<T>::display() { // try/catch
	for(unsigned i = 0; i < _n; i++) {
		std::cout << _tab[i] << " ";
	} std::cout << std::endl << std::endl;
}

template< typename T> void	Array<T>::modify() { // try/catch
	std::cout << GRN "Fct member modify Array[]" END << std::endl;
	for(unsigned i = 0; i < _n; i++) {
		_tab[i] += 1;
	}
}


#endif