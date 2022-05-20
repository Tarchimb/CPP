/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:34:07 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/20 16:10:09 by tarchimb         ###   ########.fr       */
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
		AForm		(std::string name, int req_grade_sign, int req_grade_ex,
			std::string target);
		AForm		(const AForm &src);
		~AForm		();
		
/* ************************************************************************** */
/* 						  		Getters && Setters			  				  */
/* ************************************************************************** */
		bool		getIsSigned() const;
		std::string	getName() const;
		int			getGradeToEx() const;
		int			getGradeToSign() const;
		std::string	getTarget() const;

/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */
		AForm		&operator=(const AForm &rhs);
		
/* ************************************************************************** */
/*	 							Under class							  		  */
/* ************************************************************************** */
		class GradeTooHighException : virtual public std::exception
		{
			public :
				explicit GradeTooHighException(std::string name, std::string action)
					{this->_name = name; this->_action = action;}
				const char	*what() const throw();
				virtual ~GradeTooHighException() throw() {};
			private :
				std::string _name;
				std::string _action;
		};
		
		class GradeTooLowException : virtual public std::exception
		{
			public :
				explicit GradeTooLowException(std::string name, std::string action)
					{this->_name = name; this->_action = action;}
				const char	*what() const throw();
				virtual ~GradeTooLowException() throw() {};
			private :
				std::string _name;
				std::string _action;
		};
		class IsNotSignedException : public std::exception
		{
			public :
				explicit IsNotSignedException(std::string name, std::string target)
					{this->_name = name; this->_target = target;}
				const char	*what() const throw();
				virtual ~IsNotSignedException() throw() {};
			private :
				std::string _name;
				std::string _target;
		};
		
/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
		void	beSigned(const Bureaucrat *Bureaucrat);
		virtual	void	execute(Bureaucrat  const & executor) = 0;
		void	beExecute(Bureaucrat &executor);
		
	private :
		std::string	_name;
		std::string	_target;
		bool		_issigned;
		int			_req_grade_sign;
		int			_req_grade_ex;
};

	std::ostream	&operator<<(std::ostream &o, const AForm &i);
#endif