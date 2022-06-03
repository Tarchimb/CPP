/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 09:47:26 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/30 14:37:40 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
/* **********************+**************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
Intern::Intern()
{
	action[0].msg = "shrubbery creation";
	action[0].foo = &Intern::scfForm;
	action[1].msg = "robotomy request";
	action[1].foo = &Intern::rrfForm;
	action[2].msg = "presidential pardon";
	action[2].foo = &Intern::ppfForm;
}
		
/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */
Intern	&Intern::operator=(Intern const &)
{
	return (*this);
}

AForm	*Intern::scfForm(std::string target)
{
	AForm	*dst = new ShrubberyCreationForm(target);
	return(dst);
}

AForm		*Intern::rrfForm(std::string target)
{
	AForm	*dst = new RobotomyRequestForm(target);
	return(dst);
}

AForm	*Intern::ppfForm(std::string target)
{
	AForm	*dst = new PresidentialPardonForm(target);
	return(dst);
}

/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
AForm	*Intern::makeForm(std::string name, std::string target)
{
	AForm	*test;
	for (int i = 0; i < 3; i++)
	{
		if (name == action[i].msg)
		{
			test = (this->*(action[i].foo))(target);
			std::cout << Green << "Intern creates a " << action[i].msg << " form"
				<< " with \"" << target << "\" name" << Reset << std::endl;
			return (test);
		}
	}
	std::cout << Red << "\"" << name << "\" isn't recognized as a valid form name!"
		<< Reset << std::endl;
	return (0);
}

/* ************************************************************************** */
/*	 							Try / Catch exceptions			  			  */
/* ************************************************************************** */