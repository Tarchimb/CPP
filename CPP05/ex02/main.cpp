/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:06:22 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/24 11:18:59 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	ShrubberyCreationForm	test("test");
	PresidentialPardonForm	test1("Jean");
	RobotomyRequestForm		test2("Robots");
	Bureaucrat				b1("Joe", 1);
	Bureaucrat				b2("Paul", 150);
	

	std::cout << test << test1 << test2;
	test.beSigned(&b1);
	try
	{
		test.beExecute(b1);
	}
	catch(const AForm::GradeTooHighException &e)
	{
		std::cerr  << Red << e.what() << '\n';
	}
	catch(const AForm::GradeTooLowException &e)
	{
		std::cerr << Red << e.what() << '\n';
	}
}
