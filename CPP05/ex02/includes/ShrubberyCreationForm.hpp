/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:01:12 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/20 16:18:22 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */	
		ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm &src);
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &rhs);
/* ************************************************************************** */
/*	 							Under class							  		  */
/* ************************************************************************** */
		
/* ************************************************************************** */
/* 						  		Getters && Setters			  				  */
/* ************************************************************************** */

/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
		void	execute(Bureaucrat  const & executor);
/* ************************************************************************** */
/*	 							Try / Catch exceptions			  			  */
/* ************************************************************************** */

} ;

	std::ostream	&operator<<(std::ostream &o, const ShrubberyCreationForm &i);
	
#endif