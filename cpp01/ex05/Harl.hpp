/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 22:12:39 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/06 22:43:46 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>


class Harl
{

private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

	

public:
	Harl();
	~Harl();
	void complain( std::string level );
};

#endif