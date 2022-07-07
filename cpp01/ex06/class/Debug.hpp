/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Debug.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 03:30:39 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/07 03:47:15 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEBUG_HPP
# define DEBUG_HPP

#include <iostream>

class Debug
{

private:
	const std::string   level = "DEBUG";


public:
	Debug(/* args */);
	~Debug();
	void debug1( void ) const;
	void debug2( void ) const;

};


#endif