/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 02:24:36 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/08 17:38:47 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONVERT__
# define __CONVERT__
#include <iostream>

class Convert
{
private:
	char		const  _c;
	int			const  _i;
	float 		const  _f;
	double 		const  _d;
	std::string const  _s;

public:
	Convert();
	Convert(char c);
	Convert(int i);
	Convert(float f);
	Convert(double d);
	Convert(std::string s);
	~Convert();
	Convert(Convert const &);
	void	operator=(Convert const &);

	char	getChar();
	int		getInt();
	float	getFloat();
	double	getDouble();

	operator char();
	operator int();
	operator float();
	operator double();
};




#endif