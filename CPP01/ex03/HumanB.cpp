/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 11:56:36 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/19 14:46:40 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << GREEN << "[Human B]:\t Constructor called, " << _name
		<< " is born." << END << std::endl;
	return ;
}

HumanB::~HumanB()
{
	std::cout << RED << "[Human B]:\t Destructor called, " << _name
		<< " is died." << END << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_Weapon = &weapon;
	return ;
}

void	HumanB::attack(void) const
{
	std::cout << _name << " attacks with their " << _Weapon->getType()
		<< std::endl;
	return ;
}

