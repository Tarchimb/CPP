/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 10:49:32 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/31 16:37:45 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int	main(void)
{
	Zombie	*horde;

	horde = zombieHorde(4, "Pierre");
	for (int i = 0; i < 4; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}