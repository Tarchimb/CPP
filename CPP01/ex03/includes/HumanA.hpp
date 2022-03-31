/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 11:49:15 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/31 16:52:29 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <Weapon.hpp>

class HumanA
{
private:
	std::string	_name;
	Weapon		&_Weapon;
	HumanA	();
		
public:
	HumanA	(std::string name, Weapon &weapon);
	~HumanA	();
	void	attack(void) const;
};

#endif