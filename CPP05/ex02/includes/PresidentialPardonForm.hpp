/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:01:12 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/20 16:13:28 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */	
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm &src);
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &rhs);
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

	std::ostream	&operator<<(std::ostream &o, const PresidentialPardonForm &i);
	
#endif