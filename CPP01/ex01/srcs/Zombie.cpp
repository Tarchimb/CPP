/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 10:51:15 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/31 16:41:56 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie::Zombie(void) : _name (std::string())
{
	std::cout << GREEN << "[Zombie]:\t Constructor called" << END << std::endl;
}

Zombie::~Zombie()
{
	std::cout << RED << "[Zombie]:\t Destructor called" << END << std::endl;
}

void	Zombie::set_name(std::string name)
{
	_name = name;
}

void	Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

