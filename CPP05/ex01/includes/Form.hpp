/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:34:07 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/19 14:56:30 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class Bureaucrat;
# include <iostream>
# include <exception>
# include <string>
# include <alias.h>
# include "Bureaucrat.hpp"

# define MAX_GRADE 150
# define MIN_GRADE 1

class Form
{
	public :
/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
		Form		();
		Form		(std::string name, int req_grade_sign, int req_grade_ex);
		Form		(const Form &src);
		~Form		();
		
/* ************************************************************************** */
/* 						  		Getters && Setters			  				  */
/* ************************************************************************** */
		bool		getIsSigned() const;
		std::string	getName() const;
		int			getGradeToEx() const;
		int			getGradeToSign() const;

/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */
		Form		&operator=(const Form &rhs);
		
/* ************************************************************************** */
/*	 							Under class							  		  */
/* ************************************************************************** */
		class GradeTooHighException : public std::exception
		{
			public :
				const char	*what() const throw();
		};
		
		class GradeTooLowException : public std::exception
		{
			public :
				const char	*what() const throw();
		};
		
/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
		void	beSigned(const Bureaucrat *Bureaucrat);
	private :
		std::string	_name;
		bool		_issigned;
		int			_req_grade_sign;
		int			_req_grade_ex;
};

	std::ostream	&operator<<(std::ostream &o, const Form &i);
#endif