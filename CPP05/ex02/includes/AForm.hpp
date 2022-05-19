/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:34:07 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/19 17:17:39 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

class Bureaucrat;
# include "Bureaucrat.hpp"

# define MAX_GRADE 150
# define MIN_GRADE 1

class AForm
{
	public :
/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
		AForm		();
		AForm		(std::string name, int req_grade_sign, int req_grade_ex);
		AForm		(const AForm &src);
		~AForm		();
		
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
		AForm		&operator=(const AForm &rhs);
		
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
		virtual void	beSigned(const Bureaucrat *Bureaucrat);
	private :
		std::string	_name;
		bool		_issigned;
		int			_req_grade_sign;
		int			_req_grade_ex;
};

	std::ostream	&operator<<(std::ostream &o, const AForm &i);
#endif