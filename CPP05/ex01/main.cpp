/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:06:22 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/19 16:56:27 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


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

static void	trysign(Bureaucrat &b, Form &f1, Form &f2, Form &f3)
{
	printTitle(b.getName());
	b.signForm(f1);
	b.signForm(f2);
	b.signForm(f3);
}

int	main(void)
{
	Bureaucrat	b1("Anas", 130);
	Bureaucrat	b2("Max", 100);
	Bureaucrat	b3("Brice", 1);
	Form		f1("Law 1", 100, 100);
	Form		f2("Law 2", 1, 1);
	Form		f3("Law 3", 150, 150);

	printTitle("Bureaucrats:");
	std::cout << b1 << b2 << b3;
	printTitle("Form:");
	std::cout << f1 << f2 << f3;
	trysign(b1, f1, f2, f3);
	trysign(b2, f1, f2, f3);
	trysign(b3, f1, f2, f3);
	printTitle("Besigned");
	printTitle("Operator '=' for Bureaucrat");
	std::cout << "Before: " << std::endl;
	std::cout << b1 << b2 << b3;
	std::cout << "After: " << std::endl;
	b1 = b2 = b3;
	std::cout << b1 << b2 << b3;
	printTitle("Operator '=' for Form");
	std::cout << "Before: " << std::endl;
	std::cout << f1 << f2 << f3;
	std::cout << "After: " << std::endl;
	f1 = f2 = f3;
	std::cout << f1 << f2 << f3;
}
