/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:07:24 by tarchimb          #+#    #+#             */
/*   Updated: 2022/06/01 11:19:45 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "alias.h"
# include "Form.hpp"
class Form;
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
		class GradeTooHighException : virtual public std::exception
		{
			public :
				explicit GradeTooHighException(std::string name){this->_name = name;};
				virtual const char	*what() const throw();
				virtual ~GradeTooHighException() throw () {}
			private :
				std::string	_name;
		};
		class GradeTooLowException : public std::exception
		{
			public :
				explicit GradeTooLowException(std::string name){this->_name = name;};
				virtual const char	*what() const throw();
				virtual ~GradeTooLowException() throw () {}
			private :
				std::string	_name;
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
		void			signForm(Form &form) const;
		
	private:
		Bureaucrat();
		const std::string	_name;
		int					_grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */