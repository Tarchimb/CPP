/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:01:12 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/24 13:13:06 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM
# define ROBOTOMY_REQUEST_FORM

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */	
		RobotomyRequestForm(RobotomyRequestForm &src);
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &rhs);

/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
		void	execute(Bureaucrat  const & executor) const;

	private :
		RobotomyRequestForm();
} ;

	std::ostream	&operator<<(std::ostream &o, const RobotomyRequestForm &i);
	
#endif