/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 09:47:39 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/30 11:48:51 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	public :
/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
		Intern	();
		~Intern	(){}
/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */
/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
		AForm	*makeForm(std::string name, std::string target);

	private :
		AForm	*scfForm(std::string target);
		AForm	*rrfForm(std::string target);
		AForm	*ppfForm(std::string target);
		
		Intern					&operator=(Intern const &rhs);
		Intern					(Intern const &src);
		typedef struct s_action
		{
			std::string	msg;
			AForm*		(Intern::*foo)(std::string target);
		}				t_action;
		t_action		action[4];
		
};

	std::ostream	&operator<<(std::ostream &o, Intern const &i);

#endif