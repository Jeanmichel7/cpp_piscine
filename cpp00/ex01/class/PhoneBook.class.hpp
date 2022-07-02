/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 12:13:07 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/02 02:21:42 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"

class PhoneBook {

public:
	PhoneBook (void);
	~PhoneBook (void);
	void	add_contact();
	void	search_contact(void);
	void	display_phonebook(void);
	void	exit(void);

private:
	Contact tab_contact[8];

};

#endif