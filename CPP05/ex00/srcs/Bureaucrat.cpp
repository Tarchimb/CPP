/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:07:25 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/19 14:17:39 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */

Bureaucrat::Bureaucrat() : _grade(0)
{	
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	*this = src;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	try
	{
		if (grade > 150)
		{
			throw Bureaucrat::GradeTooHighException();
		}
		if (grade < 1)
		{
			throw Bureaucrat::GradeTooLowException();
		}
		else
		{
			this->_grade = grade;
		}
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cout << Red << this->_name << ": " << e.what() << Reset << std::endl;	
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << Red << this->_name << ": " << e.what() << Reset << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{
}

/* ************************************************************************** */
/* 						  		Getters && Setters			  				  */
/* ************************************************************************** */

void		Bureaucrat::lowerGrade(void)
{
	try
	{
		if (this->_grade + 1 < 150)
		{
			this->_grade += 1;
			std::cout << Yellow << this->_name << " has been accessed! Sorry!" 
				<< Reset << std::endl;
		}
		else
			throw Bureaucrat::GradeTooHighException();
	}	
	catch (Bureaucrat::GradeTooHighException &e)
	{		
		std::cout << Red << this->_name << ": " << e.what() << Reset << std::endl;
	}
}

void		Bureaucrat::upperGrade(void)
{
	try
	{
		if (this->_grade - 1 > 1)
		{
			this->_grade -= 1;
			std::cout << Yellow << this->_name << " has been promoted! Congratulations!" 
				<< Reset << std::endl;
		}
		else
			throw Bureaucrat::GradeTooLowException();
	}	
	catch (Bureaucrat::GradeTooLowException &e)
	{	
		std::cout << Red << this->_name << ": " << e.what() << Reset << std::endl;
	}
}

int			Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->_grade = rhs._grade;
		this->_name = rhs._name;
	}
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << "." << std::endl;
	return o;
}

/* ************************************************************************** */
/*	 							Try / Catch exceptions			  			  */
/* ************************************************************************** */

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Maybe you should start to think change work?! You can't go deeper than that!");
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Only the sun is above you! And you can't be the sun");
}



/* ************************************************************************** */
