/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 11:42:49 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/19 14:47:11 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string weapon) : _type(weapon)
{
	std::cout << GREEN << "[Weapon]:\t Constructor called, weapon \"" << _type
		<< "\" is created." << END << std::endl;
	return ;
}

Weapon::~Weapon()
{
	std::cout << RED << "[Weapon]:\t Destructor called, weapon "
		<< " is destructed." << END << std::endl;
	return ;
}

const std::string	&Weapon::getType() const
{
	return (this->_type);
}

void				Weapon::setType(const std::string &new_type)
{
	_type = new_type;
	return ;
}
