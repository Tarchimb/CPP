/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:45:58 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/17 13:45:05 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*dst;
	
	randomChump("Pierre");
	std::cout << std::endl;
	dst = newZombie("Foo");
	dst->announce();
	delete(dst);
	return (0);
}