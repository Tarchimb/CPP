/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:12:27 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/23 09:55:49 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
#include <unistd.h>

class	PhoneBook {
	
public	:
	PhoneBook(void);
	~PhoneBook(void);
	
	void		search_contact(void);
	void		add_contact(void);
	
private	:
	int			_index;
	int			get_index_from_stdin();
	std::string	get_stdin();
	void		print_contact(void) const;
	void		syntax_print(std::string contact) const;
	Contact		contact[8];
};

#endif
