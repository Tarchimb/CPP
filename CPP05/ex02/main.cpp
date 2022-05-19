/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:06:22 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/19 17:14:26 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"


static void	printTitle(std::string title)
{
	int	size;

	size = 30 - (title.size() / 2);
	std::cout << std::endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 60; j++)
		{
			if (j == size && i == 1)
			{
				j += title.size() + 1;
				std::cout << " " << Green_u << title << Reset << " ";
			}
			else
				std::cout << "=";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

int	main(void)
{
	Bureaucrat	b1("Anas", 130);
	Bureaucrat	b2("Max", 100);
	Bureaucrat	b3("Brice", 1);
	AForm		f1("Law 1", 100, 100);
	AForm		f2("Law 2", 1, 1);
	AForm		f3("Law 3", 150, 150);

	printTitle("Bureaucrats:");
	std::cout << b1 << b2 << b3;
	printTitle("Form:");
	std::cout << f1 << f2 << f3;
}
