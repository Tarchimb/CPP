/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:59:52 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/31 16:35:27 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie::Zombie() : _name(std::string())
{
	std::cout << GREEN << "[Zombie]:\t Constructor called for " << this->_name 
		<< END << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << GREEN << "[Zombie]:\t Constructor called for " << this->_name 
		<< END << std::endl;
}

Zombie::~Zombie()
{
	std::cout << RED << "[Zombie]:\t Destructor called for "
		<< this->_name << END << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << ":\t" <<  "BraiiiiiiinnnzzzZ..." << std::endl;
}