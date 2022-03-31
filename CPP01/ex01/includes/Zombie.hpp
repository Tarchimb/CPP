/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 10:51:17 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/31 16:41:25 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define END "\033[0m"

class Zombie
{
private:
	std::string	_name;
public:

	Zombie();
	Zombie(std::string name);
	~Zombie();
	
	void	announce(void) const;
	void	set_name(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif