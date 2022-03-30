/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:12:25 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/23 11:17:39 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

/*
	Constuctor
*/
PhoneBook::PhoneBook(void) : _index(0)
{
	std::cout << "Welcome to your phonebook!" << std::endl;
	return ;
}

/*
	Destructor
*/
PhoneBook::~PhoneBook(void) 
{
	std::cout << "\nGood bye!" <<std::endl;
	return ;
}

/*
	Check if the contact information is >= 10 char.
	Print '.' if yes, and fill the culumn with the right size
*/
void	PhoneBook::syntax_print(std::string contact) const
{
	if (contact.size() <= 10)
	{
		std::cout << std::right << std::setfill(' ') << std::setw (10);
		std::cout << contact << "|";
		return ;
	}
	for (int i = 0; i < 9; i++)
		std::cout << contact[i];
	std::cout << "." << "|";
	return ;
}

/*
	Print informations for the contacts, then call syntax_print
*/
void	PhoneBook::print_contact(void) const
{
	int	i;

	i = 0;
	std::cout << "     Index" << "|" << "First_name" << "|" << " Last_name" 
		<< "|" << " Nick_name" << "|" << std::endl;
	while (contact[i].get_first_name().empty() == false && i < 8)
	{
		std::cout << std::right << std::setfill(' ') << std::setw (10);
		std::cout << this->contact[i].get_index() << "|";
		syntax_print(this->contact[i].get_first_name());
		syntax_print(this->contact[i].get_last_name());
		syntax_print(this->contact[i].get_nick_name());
		std::cout << std::endl;
		i++;
	}
	return ;
}

/*
	Return if no contact saved
	Save the stdin, and try to find the contact's index asked
*/
void	PhoneBook::search_contact(void)
{
	int			i;
	std::string	buffer;
	
	if (contact[0].get_first_name().empty() == true)
	{
		std::cout << "You don't have any contact yet! Try to add one with ADD"
			<< std::endl;
		return ;
	}
	print_contact();
	std::cout << "Please enter index contact's you want to see" << std::endl;
	i = get_index_from_stdin();
	while (contact[i].get_first_name().empty() == true)
	{
		std::cout << (i + 1) << ": no contact saved at this index" << std::endl;	
		i = get_index_from_stdin();	
	}
	contact[i].print_info();
}

int	PhoneBook::get_index_from_stdin()
{
	std::string	buffer;
	int			index;
	
	index = -1;
	while(index < 1 || index > 8)
	{
		buffer = get_stdin();
		if (isdigit(buffer[0]) && std::strlen(buffer.c_str()) == 1)
			index = std::atoi(buffer.c_str());
		if (index >= 1 && index <= 8)
			return (index - 1);
		else if (index > 8)
			std::cout << buffer << ": Can't save more than 8 contact" << std::endl;
		else
			std::cout << buffer << ": not a valid index" << std::endl;
	}
	return (index - 1);
}

/*
	read input from stdin, doesn't accept empty entry
*/
std::string	PhoneBook::get_stdin()
{
	std::string	buffer;
	
	while (std::getline(std::cin, buffer))
	{
		if (buffer.empty() == false)
			return (buffer);
	}
	std::cout << "Good bye!" << std::endl;
	exit(0);
}

/*
	set index to the right position, then create a contact and save it 
	calling fill_contact
*/
void	PhoneBook::add_contact(void)
{
	std::string	buf;
	
	contact[_index].set_index(_index + 1);
	std::cout << "Please enter first name" << std::endl;
	contact[_index].set_first_name(get_stdin());
	std::cout << "Please enter last name" << std::endl;
	contact[_index].set_last_name(get_stdin());
	std::cout << "Please enter nick name" << std::endl;
	contact[_index].set_nick_name(get_stdin());
	do
	{
		std::cout << "Please enter phone number : digits only!" << std::endl;
		buf = get_stdin();
	}	while (buf.find_first_not_of("0123456789") != std::string::npos);
	contact[_index].set_phone_number(buf);
	std::cout << "Please enter darkest secret" << std::endl;
	contact[_index].set_darkest_secret(get_stdin());
	std::cout << "This contact have been registered" << std::endl;
	_index = (_index + 1) % 8;
}