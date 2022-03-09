/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:11:16 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/09 15:51:53 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unistd.h>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"


int	check_index(std::string buf, PhoneBook *rep)
{
	int	i;

	i = 0;
	while (rep->contact[i].first_name.empty() == false)
	{
		if (rep->contact[i].index == atoi(buf.c_str()))
			return (rep->contact[i].index);
		i++;
	}
	return (0);
}

void	search_contact(PhoneBook *rep)
{
	int			i;
	std::string	buffer;
	
	rep->print_contact();
	std::cout << "Please enter index contact's you want to see" << std::endl;
	std::getline(std::cin, buffer);
	i = check_index(buffer, rep);
	while (i == 0)
	{
		std::cout << "Not a valid index, please try again" << std::endl;
		std::getline(std::cin, buffer);
		i = check_index(buffer, rep);
	}
	rep->contact[i - 1].print_info();
}

void	add_contact(PhoneBook *rep)
{
	int			i;
	std::string	buffer;

	i = 0;
	while (rep->contact[i].first_name.empty() == false)
	{
		if (i == 7)
		{
			i = 0;
			break;
		}
		i++;
	}
	rep->contact[i].index = i + 1;
	while (rep->contact[i].first_name.empty() == true)
	{
		std::cout << "Please enter first name :" << std::endl;
		std::getline(std::cin, buffer);
		rep->contact[i].first_name = buffer;
	}
	while (rep->contact[i].last_name.empty() == true)
	{
		std::cout << "Please enter last name :" << std::endl;
		std::getline(std::cin, buffer);
		rep->contact[i].last_name = buffer;
	}
	while (rep->contact[i].nick_name.empty() == true)
	{
		std::cout << "Please enter nickname :" << std::endl;
		std::getline(std::cin, buffer);
		rep->contact[i].nick_name = buffer;
	}
	while (rep->contact[i].phone_number.empty() == true)
	{
		std::cout << "Please enter phone number :" << std::endl;
		std::getline(std::cin, buffer);
		rep->contact[i].phone_number = buffer;
	}
	while (rep->contact[i].darkest_secret.empty() == true)
	{
		std::cout << "Please enter your darkest secret :" << std::endl;
		std::getline(std::cin, buffer);
		rep->contact[i].darkest_secret = buffer;
	}
}

int main()
{
	PhoneBook	rep;
	std::string	buffer;

	while (buffer.compare("EXIT") != 0)
	{
		std::cout << "> ";
		std::getline(std::cin, buffer);
		std::cout << "Buffer : " << buffer << std::endl;
		if (buffer.compare("ADD") == 0)
			add_contact(&rep);
		else if (buffer.compare("SEARCH") == 0)
			search_contact(&rep);
	}
	return (0);
}