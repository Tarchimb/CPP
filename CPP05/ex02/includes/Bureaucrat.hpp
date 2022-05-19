/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:07:24 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/19 17:11:47 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "alias.h"
# include "AForm.hpp"
class AForm;
class Bureaucrat
{

	public:
/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
		Bureaucrat		(std::string name, int grade);
		Bureaucrat		( Bureaucrat const & src );
		~Bureaucrat		();
/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */
		Bureaucrat		&operator=( Bureaucrat const & rhs );
		
/* ************************************************************************** */
/*	 							Under class							  		  */
/* ************************************************************************** */
		class GradeTooHighException : public std::exception
		{
			public :
				const char	*what(void) const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public :
				const char	*what(void) const throw();
		};
		
/* ************************************************************************** */
/* 						  		Getters && Setters			  				  */
/* ************************************************************************** */
		int				getGrade(void) const;
		std::string		getName(void) const;
		void			upperGrade(void);
		void			lowerGrade(void);
		
/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
		void			signForm(AForm &form) const;
		
	private:
		Bureaucrat();
		std::string	_name;
		int			_grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */