/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:46:26 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/12 21:06:05 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANT__
# define __MUTANT__

#include <iostream>
#include <stack>
#include <list>
#include <deque>

//using UnderlyingContainer = std::deque<int>;
//using Stack = std::stack< int, UnderlyingContainer>;
//using StackIterator = const int *;



template< typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C>
{
	
public:
	MutantStack();
	MutantStack(MutantStack const &);
	void operator = (MutantStack const &);
	~MutantStack();

	typedef typename C::iterator iterator;
	iterator begin();
	iterator end();
};

/* CONSTRUCTOR */
template< typename T, typename C> MutantStack<T, C>::MutantStack() {
	return ;
}

template< typename T, typename C> MutantStack<T, C>::~MutantStack() {
	return ;
}

template< typename T, typename C> MutantStack<T, C>::MutantStack(MutantStack const &tmp)
: std::stack<T, C>::c(tmp.c)
{
	return ;
}

template< typename T, typename C> void MutantStack<T, C>::operator = (MutantStack const &tmp) {

	// delete old
	iterator it = this.begin();
	while(it != this.end())
	{
		this.pop();
		++it;
	}

	this.c = tmp.c;
}




/* FCT MEMBER */
template< typename T, typename C> typename C::iterator MutantStack<T, C>::begin() {
	return std::stack<T>::c.begin();
}

template< typename T, typename C > typename C::iterator MutantStack<T, C>::end() {
	return std::stack<T,C>::c.end();
}

#endif

























































/*
#ifndef __MUTANT__
# define __MUTANT__

#include <iostream>
#include <stack>
#include <list>

template< typename T>
class MutantStack : public std::stack<T>
{
	
public:
	MutantStack();
	~MutantStack();

	using std::stack<T>::c;
	typedef T* iterator;

	T *begin();
	T *end();

};




template< typename T> MutantStack<T>::MutantStack()
{ return ; }

template< typename T> MutantStack<T>::~MutantStack()
{ return ; }









template< typename T > T *MutantStack<T>::begin()
{
	


	return;
}




template< typename T > T *MutantStack<T>::end() {
	


	return ;
}


#endif
*/