/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:27:14 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/30 17:59:04 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <ScavTrap.hpp>

int	main(void)
{
	ClapTrap	a("William");
	ScavTrap	b("Joe");
	ClapTrap	c("Averell");

	std::cout << "\n" << a << b << c << std::endl;
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	b.beRepaired(10);
	b.guardGate();
	std::cout << "\n" << a << b << c << std::endl;
	a = c;
	std::cout << "\n" << a << b << c << std::endl;
	return (0);
}