/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:01:12 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/24 13:12:44 by tarchimb         ###   ########.fr       */
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
		ShrubberyCreationForm(ShrubberyCreationForm &src);
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &rhs);
		
/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
		void	execute(Bureaucrat  const & executor) const;
		
	private :
		ShrubberyCreationForm();
} ;

	std::ostream	&operator<<(std::ostream &o, const ShrubberyCreationForm &i);
	
#endif