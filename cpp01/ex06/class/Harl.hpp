/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 22:12:39 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/08 20:08:28 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{

private:
	void debug( void ) const;
	void info( void ) const;
	void warning( void ) const;
	void error( void ) const;

public:
	Harl();
	~Harl();
	void complain( std::string level );
	
};

#endif