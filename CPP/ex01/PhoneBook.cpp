/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:12:25 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/07 14:48:54 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) {
	std::cout << "Constructor Called -->PhoneBook" << std::endl;
	return;
}


PhoneBook::~PhoneBook(void) {
	std::cout << "Destructor Called -->PhoneBook" << std::endl;
	return;
}