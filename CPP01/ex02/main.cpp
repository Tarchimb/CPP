/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 11:15:38 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/31 16:43:42 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	string("HI THIS IS BRAIN");
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Value of string from string :\t" << &string << std::endl;
	std::cout << "Adress of string from PTR :\t" << stringPTR << std::endl;
	std::cout << "Adress of string from REF :\t" << &stringREF << std::endl;

	std::cout << "Value of string from string :\t" << string << std::endl;
	std::cout << "Value of string from PTR :\t" << *stringPTR << std::endl;
	std::cout << "Value of string from REF :\t" << stringREF << std::endl;
	return (0);
}