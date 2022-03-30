/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 11:41:33 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/19 14:13:38 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define END "\033[0m"

class Weapon
{
private:
	std::string	_type;
	
public:
	Weapon();
	Weapon(std::string weapon);
	~Weapon();
	
	const std::string	&getType() const;
	void				setType(const std::string &new_type);
};


#endif