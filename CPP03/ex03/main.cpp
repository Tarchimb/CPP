/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:27:14 by tarchimb          #+#    #+#             */
/*   Updated: 2022/04/04 11:42:04 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>
#include <ScavTrap.hpp>
#include <FragTrap.hpp>
#include <ClapTrap.hpp>

int	main(void)
{
	DiamondTrap	d("Paul");

	d.getAttackDamage();
	d.whoAmI();
	d.attack("joe");
	return (0);
}