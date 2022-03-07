/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:11:16 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/07 16:33:20 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unistd.h>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

int main(int argc, char **argv)
{
	Contact		*test2;
	(void)argc;
	(void)argv;
	
	test2 = new Contact(42, 'c', "Theo");
	test2->f
	delete(test2);
	usleep(1000000);
	return (0);
}