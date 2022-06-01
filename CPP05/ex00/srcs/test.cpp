/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:05:17 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/20 14:16:12 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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

void	tryWrongInit(void)
{
	printTitle("Wrong init");
	try
	{
		Bureaucrat	w2("Victor", 0);	
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << Red << e.what() << Reset << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << Red << e.what() << Reset << std::endl;
	}
	try
	{
		Bureaucrat	w1("Anas", 1000);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << Red << e.what() << Reset << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << Red << e.what() << Reset << std::endl;
	}
}

void	tryChangeGrade(void)
{
	printTitle("Change Grade");
	Bureaucrat	test1("Leo", 150);
	Bureaucrat	test2("Adel", 1);
	Bureaucrat	test3("Pierre", 10);
	
	try
	{
		test3.upperGrade();
		test3.lowerGrade();
		test1.lowerGrade();
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << Red << e.what() << Reset << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << Red << e.what() << Reset << std::endl;
	}
	try
	{
		test2.upperGrade();
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << Red << e.what() << Reset << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << Red << e.what() << Reset << std::endl;
	}
}

void	tryOperatorForBureaucrat(Bureaucrat &b1, Bureaucrat &b2, Bureaucrat &b3)
{
	printTitle("Operator '=' for Bureaucrat");
	std::cout << "Before: " << std::endl;
	std::cout << b1 << b2 << b3;
	std::cout << "After: " << std::endl;
	b1 = b2 = b3;
	std::cout << b1 << b2 << b3;	
}
