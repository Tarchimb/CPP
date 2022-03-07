/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:12:21 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/07 16:31:57 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.class.hpp"

Contact::Contact(int a, char b, std::string c) : d(a), e(b), f(c) {
	std::cout << "Constructor Called -->Contact" << std::endl;
	std::cout << "d--> " << this->d << std::endl;
	std::cout << "e--> " << this->e << std::endl;
	std::cout << "f--> " << this->f << std::endl;
	return ;
}

Contact::~Contact() {
	std::cout << "Destructor Called" << std::endl;
	
}
