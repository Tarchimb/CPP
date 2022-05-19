/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:06:22 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/19 12:26:12 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


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
	Bureaucrat	b1("Max", 1);
	Bureaucrat	b2("Anas", 150);
	Bureaucrat	b3(b2);


	printTitle("Exception Test");
	std::cout << "Value under 1:" << std::endl;
	Bureaucrat	b4("Brice", 0);
	std::cout << "Value above 150:" << std::endl;
	Bureaucrat	b5("Leo", 151);

	printTitle("Bureaucrat Declaration");
	std::cout << b1 << b2 << b3;
	printTitle("Change grades");
	b1.upperGrade();
	b1.lowerGrade();
	b2.lowerGrade();
	b2.upperGrade();
	printTitle("New Bureaucrat grades");
	std::cout << b1 << b2;
	printTitle("Try operator '='");
	std::cout << "Before: " << std::endl;
	std::cout << b1 << b2;
	std::cout << "After: " << std::endl;
	b1 = b2;
	std::cout << b1 << b2;
}
