/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:12:21 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/09 15:44:14 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.class.hpp"


Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

void	Contact::print_info(void) const
{
	std::cout << "index: " << this->index << std::endl;
	std::cout << "First name: "<< this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nick name: " << this->nick_name << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}

std::string	Contact::get_first_name(void) 
{
	return (this->first_name);
}