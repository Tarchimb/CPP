/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:11:16 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/24 13:13:23 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	PhoneBook	rep;
	std::string	buffer;

	std::cout << "This phonebook accept 3 commands : SEARCH, ADD, EXIT"
		<< std::endl;
	while (1)
	{
		std::cout << "-->";
		if (!std::getline(std::cin, buffer))
			break ;
		if (buffer.compare("ADD") == 0)
			rep.add_contact();
		else if (buffer.compare("SEARCH") == 0)
			rep.search_contact();
		else if (buffer.compare("EXIT") == 0)
			return (0);
		else
			std::cout << "Please enter a valid command" << std::endl;
	}
	return (0);
}