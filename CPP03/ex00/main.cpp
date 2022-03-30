/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:27:14 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/30 14:46:34 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("William");
	ClapTrap	b("Joe");
	ClapTrap	c("Averell");
	ClapTrap	d(a);

	std::cout << "\n" << a << b << c << d << std::endl;
	b.attack(a.getName());
	b.beRepaired(10);
	a.takeDamage(11);
	std::cout << "\n" << a << b << c << d << std::endl;
	a = b;
	std::cout << "\n" << a << b << c << d << std::endl;
	return (0);
}