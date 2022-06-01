/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:24:03 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/24 13:07:44 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "test.hpp"

void	printTitle(std::string title)
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

void	tryExecuteBeforeSign(Bureaucrat &b1, AForm &f1)
{
	printTitle("Execute before sign");
	try
	{
		f1.beExecute(b1);
	}
	catch(AForm::GradeTooLowException &e)
	{
		std::cerr << Red << e.what() << Reset << std::endl;
	}
	catch(AForm::IsNotSignedException &e)
	{
		std::cerr << Red << e.what() << Reset << std::endl;
	}
}

void	trySign(Bureaucrat &b1, Bureaucrat &b2, AForm &f1, AForm &f2, AForm &f3)
{
	printTitle("Try to sign");
	try
	{
		b1.signForm(f1);
	}
	catch(AForm::GradeTooLowException &e)
	{
		std::cerr << Red << e.what() << Reset << std::endl;
	}
	b2.signForm(f1);
	b2.signForm(f2);
	b2.signForm(f3);
}

void	tryExecute(Bureaucrat &b1, Bureaucrat &b2, AForm &f1, AForm &f2, AForm &f3)
{
	printTitle("Try to execute");
	try
	{
		b2.executeForm(f1);
		b2.executeForm(f2);
		b2.executeForm(f3);
		b1.executeForm(f1);
		b1.executeForm(f2);
		b1.executeForm(f3);
	}
	catch(AForm::GradeTooLowException &e)
	{
		std::cerr << Red << e.what() << Reset << std::endl;
	}
	catch(AForm::IsNotSignedException &e)
	{
		std::cerr << Red << e.what() << Reset << std::endl;
	}
}

void	launch_tests(void)
{
	printTitle("Initialisation");
	ShrubberyCreationForm	f1("Garden");
	RobotomyRequestForm		f2("Robots");
	PresidentialPardonForm	f3("Johnny");
	Bureaucrat				b1("Leo", 150);
	Bureaucrat				b2("Theo", 1);

	std::cout << f1 << f2 << f3 << b1 << b2;
	tryExecuteBeforeSign(b1, f1);
	trySign(b1, b2, f1, f2, f3);
	tryExecute(b1, b2, f1, f2, f3);
}