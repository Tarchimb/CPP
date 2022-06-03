/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:06:22 by tarchimb          #+#    #+#             */
/*   Updated: 2022/06/03 10:53:59 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "test.hpp"
#include "Intern.hpp"

int	main(void)
{
	AForm	*p_shrubbery;
	AForm	*p_robotomy;
	AForm	*p_presidential;
	AForm	*p_wrongform;
	
	Intern	intern;
	Bureaucrat	b1("Theo", 1);
	
	printTitle("Creation forms by intern");
	p_wrongform = intern.makeForm("wrong form", "False");
	p_shrubbery = intern.makeForm("shrubbery creation", "Garden");
	p_robotomy = intern.makeForm("robotomy request", "Robots");
	p_presidential = intern.makeForm("presidential pardon", "Anas");
	printTitle("Sign Form by bureaucrat");
	p_presidential->beSigned(&b1);
	p_robotomy->beSigned(&b1);
	p_shrubbery->beSigned(&b1);
	printTitle("Execute form by bureaucrat");
	b1.executeForm(*p_robotomy);
	b1.executeForm(*p_presidential);
	b1.executeForm(*p_shrubbery);
}
