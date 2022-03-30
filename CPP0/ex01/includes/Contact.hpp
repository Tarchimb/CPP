/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:12:23 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/18 09:58:55 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>

class	Contact {
	
public	:
	Contact();
	~Contact(void);
	
	void		print_info(void) const;
	//Getters
	int			get_index(void) const;
	std::string	get_first_name(void) const;
	std::string	get_last_name(void) const;
	std::string	get_nick_name(void) const;
	std::string	get_phone_number(void) const;
	std::string	get_darkest_secret(void) const;
	//Setters
	void		set_index(int setter);
	void		set_first_name(std::string setter);
	void		set_last_name(std::string setter);
	void		set_nick_name(std::string setter);
	void		set_phone_number(std::string setter);
	void		set_darkest_secret(std::string setter);
	
private	:
	int			_index;
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nick_name;
	std::string	_phone_number;
	std::string	_darkest_secret;

};

#endif