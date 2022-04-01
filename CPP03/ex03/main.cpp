/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:27:14 by tarchimb          #+#    #+#             */
/*   Updated: 2022/04/01 10:30:13 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>
#include <FragTrap.hpp>

int	main(void)
{
	ClapTrap	a("William");
	ScavTrap	b("Joe");
	FragTrap	d("Jack");
	ClapTrap	c("Averell");

	std::cout << "\n" << a << b << c << d << std::endl;
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	d.takeDamage(b.getAttackDamage());
	b.beRepaired(10);
	b.guardGate();
	d.highFiveGuys();
	std::cout << "\n" << a << b << c << d << std::endl;
	d.attack(b.getName());
	a = c;
	std::cout << "\n" << a << b << c << d << std::endl;
	return (0);
}