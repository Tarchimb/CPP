/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:43:14 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/19 15:06:10 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */

Form::Form() : _issigned(false)
{
	
}

Form::Form(std::string name, int req_grade_sign, int req_grade_ex) : 
	 _name(name), _issigned(false)
{
	try
	{
		if (req_grade_sign > MAX_GRADE || req_grade_ex > MAX_GRADE)
			throw GradeTooHighException();
		else if (req_grade_ex < MIN_GRADE || req_grade_sign < MIN_GRADE)
			throw GradeTooLowException();
		else
		{
			_req_grade_ex = req_grade_ex;
			_req_grade_sign = req_grade_sign;
		}
	}
	catch(const GradeTooHighException &e)
	{
		std::cout << Red << this->_name << e.what()
			<< Reset << std::endl;
	}
	catch(const GradeTooLowException &e)
	{
		std::cout << Red << this->_name << e.what()
			<< Reset << std::endl;
	}
}

Form::~Form()
{
	
}
/* ************************************************************************** */
/* 						  		Getters && Setters			  				  */
/* ************************************************************************** */
bool		Form::getIsSigned() const
{
	return (this->_issigned);
}

std::string	Form::getName() const
{
	return (this->_name);
}

int			Form::getGradeToEx() const
{
	return (this->_req_grade_ex);
}

int			Form::getGradeToSign() const
{
	return (this->_req_grade_sign);
}

/* ************************************************************************** */
/*	 							Under class							  		  */
/* ************************************************************************** */

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Grade isn't high enough");
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Maximum grade reached");
}

/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */

void	Form::beSigned(const Bureaucrat *bureaucrat)
{
	try
	{
		if (this->_req_grade_sign >= bureaucrat->getGrade())
		{
			this->_issigned = true;
			std::cout << Green << bureaucrat->getName() << " has signed form "
				<< this->getName() << Reset << std::endl;
		}
		else
			Form::GradeTooLowException();		
	}
	catch(Form::GradeTooLowException &e)
	{
		std::cout << Red << bureaucrat->getName() << " :" << e.what() << Reset	
			<< std::endl;
	}
}

/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */

Form		&Form::operator=(const Form &rhs)
{
	this->_issigned = rhs.getIsSigned();
	this->_name = rhs.getName();
	this->_req_grade_ex = rhs.getGradeToEx();
	this->_req_grade_sign = rhs.getGradeToSign();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const Form &i)
{
	o << Yellow_u << "Form " << i.getName() << Reset << ":\n\nIs it signed: "
		<< (i.getIsSigned()? "Yes\n" : "No\n") << "Min requested grade to sign: "
		<< i.getGradeToSign() << "\nMin requested grade to execute : "
		<< i.getGradeToEx() << "\n" << std::endl;
	return (o);
}