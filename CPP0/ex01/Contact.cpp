/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:12:21 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/23 10:14:55 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include <sstream>


Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

/*
	Print all private infos of the contact
*/
void	Contact::print_info(void) const
{
	std::cout << "Index: " << this->_index << std::endl;
	std::cout << "First name: "<< this->_first_name << std::endl;
	std::cout << "Last name: " << this->_last_name << std::endl;
	std::cout << "Nick name: " << this->_nick_name << std::endl;
	std::cout << "Phone number: " << this->_phone_number << std::endl;
	std::cout << "Darkest secret: " << this->_darkest_secret << std::endl;
}

//-------------------------------------Getters----------------------------------
int	Contact::get_index(void) const
{
	return (this->_index);
}

std::string	Contact::get_first_name(void) const
{
	return (this->_first_name);
}

std::string	Contact::get_last_name(void) const
{
	return (this->_last_name);
}

std::string	Contact::get_nick_name(void) const
{
	return (this->_nick_name);
}

std::string	Contact::get_phone_number(void) const
{
	return (this->_phone_number);
}

std::string	Contact::get_darkest_secret(void) const
{
	return (this->_darkest_secret);
}

//-------------------------------------Setters----------------------------------

void	Contact::set_index(int setter)
{
	this->_index = setter;
}

void	Contact::set_first_name(std::string setter)
{
	this->_first_name = setter;
}

void	Contact::set_last_name(std::string setter)
{
	this->_last_name = setter;
}

void	Contact::set_nick_name(std::string setter)
{
	this->_nick_name = setter;
}

void	Contact::set_phone_number(std::string setter)
{
	this->_phone_number = setter;
}

void	Contact::set_darkest_secret(std::string setter)
{
	this->_darkest_secret = setter;
}