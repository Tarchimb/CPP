/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:12:25 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/08 11:08:41 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <iomanip>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
}


PhoneBook::~PhoneBook(void) 
{
	
}

void	PhoneBook::print_str(std::string contact) const
{
	int	size;
	
	if (contact.size() < 10)
	{
		std::cout << std::right << std::setfill(' ') << std::setw (10);
		std::cout << contact;
		std::cout << "|";
	}
	else
	{
		size = -1;
		while (++size < 9)
			std::cout << contact[size];
		std::cout << ".";
		std::cout << "|";
	}
	
}

void	PhoneBook::print_contact(void) const
{
	int	i;

	i = 0;
	std::cout << "     Index" << "|" << "First_name" << "|" << " Last_name" 
		<< "|" << " Nick_name" << "|" << std::endl;
	while (i < 8)
	{
		if (this->contact[i].first_name.empty() == false)
		{
			std::cout << std::right << std::setfill(' ') << std::setw (10);
			std::cout << this->contact[i].index << "|";
			print_str(this->contact[i].first_name);
			print_str(this->contact[i].last_name);
			print_str(this->contact[i].nick_name);
			std::cout << std::endl;
		}
		i++;
	}
}
