/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 11:56:10 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/31 16:55:13 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <Weapon.hpp>

class HumanB
{
private:
	std::string	_name;
	Weapon		*_Weapon;
	HumanB		();
		
public:
	HumanB				(std::string name);
	~HumanB				();
	void	attack		(void) const;
	void	setWeapon	(Weapon &weapon);
};

#endif