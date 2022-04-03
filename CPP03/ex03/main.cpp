/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:27:14 by tarchimb          #+#    #+#             */
/*   Updated: 2022/04/01 23:33:24 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>
#include <ScavTrap.hpp>
#include <FragTrap.hpp>
#include <ClapTrap.hpp>

int	main(void)
{
	DiamondTrap	d("Paul");
	DiamondTrap p(d);
	ScavTrap	i(p);

	d.getAttackDamage();

	// d = p;

	std::cout << d << std::endl;
	std::cout << i << std::endl;
	std::cout << p << std::endl;
	d.whoAmI();
	p.whoAmI();
	d.attack("joe");
	return (0);
}