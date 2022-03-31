/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:47:41 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/31 17:08:18 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>


Harl::Harl()
{
	std::cout << GREEN << "[Harl]:\t Constructor called\n" << END << std::endl;
	action[0].msg = "debug";
	action[0].foo = &Harl::debug;
	action[1].msg = "info";
	action[1].foo = &Harl::info;
	action[2].msg = "warning";
	action[2].foo = &Harl::warning;
	action[3].msg = "error";
	action[3].foo = &Harl::error;
	return ;
}

Harl::~Harl()
{
	std::cout << RED << "[Harl]:\t Destuctor called" << END << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
		if (level == action[i].msg)
			return (this->*(action[i].foo))();
	std::cout << "Unrecognized action." << END << std::endl;
	return ;
}

void	Harl::debug(void) const
{
	std::cout << "[DEBUG]:\t" << END;
	std::cout << "I love having extra bacon for my " 
		<< "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" 
		<< std::endl;
	return ;
}

void	Harl::info(void) const
{
	std::cout << "[INFO]:\t\t" << END;
	std::cout << "I cannot believe adding extra bacon costs more money. You " 
		<< "didn’t put enough bacon in my burger! If you did, I wouldn’t be" 
		<< "asking for more!" << std::endl;
	return ;
}

void	Harl::warning(void) const
{
	std::cout << "[WARNING]:\t" << END;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve " 
		<< "been coming for years whereas you started working here since" 
		<< "last month." << std::endl;	
	return ;
}

void	Harl::error(void) const
{
	std::cout << "[ERROR]:\t" << END;
	std::cout << "This is unacceptable! I want to speak to the manager now."
		 << std::endl;
	return ;
}
