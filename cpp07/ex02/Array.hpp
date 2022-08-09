/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 05:58:17 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/09 23:16:27 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY__
# define __ARRAY__

# define RED "\033[0;31m"
# define END "\033[0m"

# include <iostream>
# include <stdexcept>
# include <cstdlib>

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

template<typename T> Array<T>::Array( void )
{
	std::cout << "Construct Array[0]" << std::endl;
	_n = 0;
	_tab = new T[_n];
}

template<typename T> Array<T>::Array(unsigned int n)
{
	std::cout << "Construct Array[" << n << "]" << std::endl;
	_n = n;
	_tab = new T[_n];
	for(unsigned i = 0; i < _n; i++) {
		if (i >= _n)
			throw (InvalidIndex());
		_tab[i] = i + 100;
	}

}

template< typename T > Array<T>::Array(const Array<T> &tmp)
{
	std::cout << "Construct Copy Array[" << tmp._n << "]" << std::endl;

	_n = tmp._n;
	_tab = new T [tmp._n];

	for(unsigned i = 0; i < _n; i++) {
		if (i >= _n)
			throw (InvalidIndex());
		_tab[i] = tmp._tab[i];
	}
	return;
}

template< typename T >void  Array<T>::operator=(const Array<T> &tmp){
	std::cout << "Operator affection" << std::endl;

	delete [] _tab;
	_n = tmp._n;
	_tab = new T [tmp._n];

	for(unsigned i = 0; i < _n; i++) {
		if (i >= _n)
			throw (InvalidIndex());
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

template< typename T > void Array<T>::display() { // try/catch
	for(unsigned i = 0; i < _n; i++) {
		if (i >= _n)
			throw (InvalidIndex());
		std::cout << _tab[i] << " ";
	} std::cout << std::endl << std::endl;
}

template< typename T> void	Array<T>::modify() { // try/catch
	std::cout << "Modify Array[]" << std::endl;
	for(unsigned i = 0; i < _n; i++) {
		_tab[i] += 10;
	}
}

template<typename T> Array<T>::~Array()
{
	delete [] _tab;
}

#endif