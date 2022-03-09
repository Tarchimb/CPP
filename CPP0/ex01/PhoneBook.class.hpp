/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:12:27 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/09 15:57:26 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

class	PhoneBook {
	
public	:
	PhoneBook(void);
	~PhoneBook(void);
	void	print_contact(void) const;
	void	print_str(std::string contact) const;
private	:
	Contact	contact[8];
};

#endif
