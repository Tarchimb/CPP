/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:24:03 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/20 13:26:23 by tarchimb         ###   ########.fr       */
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

void	trysign(Bureaucrat &b, Form &f1, Form &f2, Form &f3)
{
	printTitle(b.getName());
	try
	{
		b.signForm(f1);
		b.signForm(f2);
		b.signForm(f3);
	}
	catch(Form::GradeTooLowException &e)
	{
		std::cout << Red  << e.what() << Reset << std::endl;
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

void	tryOperatorForm(Form &f1, Form &f2, Form &f3)
{
	printTitle("Operator '=' for Form");
	std::cout << "Before: " << std::endl;
	std::cout << f1 << f2 << f3;
	std::cout << "After: " << std::endl;
	f1 = f2 = f3;
	std::cout << f1 << f2 << f3;
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
	
	try
	{
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
