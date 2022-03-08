/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:11:16 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/08 11:28:09 by tarchimb         ###   ########.fr       */
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
	std::string	buf;
	
	rep->print_contact();
	std::cout << "Please enter index contact's you want to see" << std::endl;
	std::cin >> buf;
	i = check_index(buf, rep);
	while (i == 0)
	{
		std::cout << "Not a valid index, please try again" << std::endl;
		std::cin >> buf;
		i = check_index(buf, rep);
	}
	rep->contact[i - 1].print_info();
}

void	add_contact(PhoneBook *rep)
{
	int	i;

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
		std::cin >> rep->contact[i].first_name;
	while (rep->contact[i].last_name.empty() == true)
		std::cin >> rep->contact[i].last_name;
	while (rep->contact[i].nick_name.empty() == true)
		std::cin >> rep->contact[i].nick_name;
	while (rep->contact[i].phone_number.empty() == true)
		std::cin >> rep->contact[i].phone_number;
	while (rep->contact[i].darkest_secret.empty() == true)
		std::cin >> rep->contact[i].darkest_secret;
}

int main()
{
	PhoneBook	rep;
	std::string	buffer;

	while (buffer.compare("EXIT") != 0)
	{
		std::cin >> buffer;
		if (buffer.compare("ADD") == 0)
			add_contact(&rep);
		if (buffer.compare("SEARCH") == 0)
			search_contact(&rep);
	}
	return (0);
}