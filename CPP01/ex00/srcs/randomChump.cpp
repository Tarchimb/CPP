/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:04:44 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/31 16:35:22 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

 void	randomChump(std::string name)
 {
	 Zombie	foo(name);

	 foo.announce();
	 return ;
 }
 