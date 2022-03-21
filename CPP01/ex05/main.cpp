/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:27:29 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/21 15:38:36 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	test;

	test.complain("debug");
	std::cout << std::endl;
	test.complain("info");
	std::cout << std::endl;
	test.complain("warning");
	std::cout << std::endl;
	test.complain("error");
	std::cout << std::endl;
	test.complain("wrong command");
	std::cout << std::endl;
	return (0);
}