/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 11:50:21 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/19 14:46:28 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _Weapon(weapon)
{
	std::cout << GREEN << "[Human A]:\t Constructor called, " << _name
		<< " is born with " << this->_Weapon.getType() << "."
		<< END << std::endl;
	return ;
}

HumanA::~HumanA()
{
	std::cout << RED << "[Human A]:\t Destructor called, " << _name
		<< " is dead." << END << std::endl;
	return ;
}

void	HumanA::attack(void) const
{
	std::cout << _name << " attacks with their " << _Weapon.getType()
		<< std::endl;
	return ;
}

