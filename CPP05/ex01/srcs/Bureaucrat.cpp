/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:07:25 by tarchimb          #+#    #+#             */
/*   Updated: 2022/06/01 11:33:08 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */

Bureaucrat::Bureaucrat() : _grade(0)
{	
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )  : _name(src.getName())
{
	*this = src;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException(this->_name);
	else if (grade < 1)
		throw Bureaucrat::GradeTooLowException(this->_name);
	else
		this->_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

/* ************************************************************************** */
/* 						  		Getters && Setters			  				  */
/* ************************************************************************** */

void		Bureaucrat::lowerGrade(void)
{
	if (this->_grade + 1 < 150)
	{
		this->_grade += 1;
		std::cout << Yellow << this->_name << " has been accessed! Sorry!" 
			<< Reset << std::endl;
	}
	else
		throw Bureaucrat::GradeTooHighException(this->_name);	
}

void		Bureaucrat::upperGrade(void)
{
	if (this->_grade - 1 > 1)
	{
		this->_grade -= 1;
		std::cout << Yellow << this->_name << " has been promoted! Congratulations!" 
			<< Reset << std::endl;
	}
	else
		throw Bureaucrat::GradeTooLowException(this->_name);

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
/* 							Member's class functions			  			  */
/* ************************************************************************** */

void	Bureaucrat::signForm(Form &form) const
{
	if (form.getIsSigned() == true)
	{
		std::cout << Red << this->getName() << " couldn't sign the form "
			<< form.getName() << " because it is already signed!"
			<< Reset << std::endl;
	}
	else if (this->_grade <= form.getGradeToSign())
		form.beSigned(this);
	else
	{
		std::cout << Red << this->getName() << " couldn't sign the form "
			<< form.getName() << " because the requested grade to sign is "
			<< form.getGradeToSign() << " and the grade of "
			<< this->getName() << " is " << this->getGrade() << Reset << std::endl;
	}
}

/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->_grade = rhs._grade;
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

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	std::string	data(this->_name + ": Maybe you should start to think change work?! You can't go deeper than that!");
	return (data.c_str());
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	std::string	data(this->_name + ": Only the sun is above you! And you can't be the sun");
	return (data.c_str());
}



/* ************************************************************************** */
