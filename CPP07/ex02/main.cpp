/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:34:45 by tarchimb          #+#    #+#             */
/*   Updated: 2022/06/06 15:44:07 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Array.hpp"
#include "Array.tpp"


int	main(void)
{
	Array<int>	test(100);
	Array<int>	copy(test);
	Array<char>	char_tab(10);

	std::cout << test << std::endl;	
	std::cout << copy << std::endl;
	std::cout << char_tab << std::endl;	
	test = copy;
	std::cout << test << std::endl;
	return (0);
}