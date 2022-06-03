/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:16:49 by tarchimb          #+#    #+#             */
/*   Updated: 2022/06/03 17:57:03 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	test(int test1)
{
	test1 = 2;
}

void	test1(char test1)
{
	test1 = 'd';
}

void	test2(double test1)
{
	test1 = 2.5;
}
int	main(void)
{
	int	*tab_int = new int[5];

	iter(tab_int, 5, test);
	for (int i = 0; i < 5; i++)
	{
		std::cout << tab_int[i] << std::endl;
	}
	iter(&tab_int, 5, test1);
	for (int i = 0; i < 5; i++)
	{
		std::cout << tab_int[i] << std::endl;
	}
	iter(&tab_int, 5, test2);
	for (int i = 0; i < 5; i++)
	{
		std::cout << tab_int[i] << std::endl;
	}
	

	return(0);
}