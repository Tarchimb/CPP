/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:12:27 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/08 09:49:50 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

class	PhoneBook {
	
public	:
	PhoneBook(void);
	~PhoneBook(void);
	Contact	contact[8];
	void	print_contact(void) const;
private	:
	void	print_str(std::string contact) const;
};

#endif
