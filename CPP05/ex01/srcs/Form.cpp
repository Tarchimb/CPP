/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:43:14 by tarchimb          #+#    #+#             */
/*   Updated: 2022/06/01 11:39:19 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */

Form::Form() : _name("Default:"), _req_grade_ex(0), _req_grade_sign(0), _issigned(false)
{
	
}

Form::Form(std::string name, int req_grade_sign, int req_grade_ex) : 
	 _name(name), _req_grade_ex(req_grade_ex), _req_grade_sign(req_grade_sign), _issigned(false)
{

	if (req_grade_sign > MAX_GRADE || req_grade_ex > MAX_GRADE)
		throw GradeTooHighException(this->_name);
	else if (req_grade_ex < MIN_GRADE || req_grade_sign < MIN_GRADE)
		throw GradeTooLowException(this->_name);
}

Form::Form(const Form &src) : _name(src.getName())
, _req_grade_ex(src.getGradeToEx()), _req_grade_sign(src.getGradeToSign()), _issigned(src.getIsSigned())
{
	
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
	std::string	data(this->_name + ": Grade isn't high enough");
	return (data.c_str());
}

const char	*Form::GradeTooHighException::what() const throw()
{
	std::string	data(this->_name + ": Maximum grade reached");
	return (data.c_str());
}

/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */

void	Form::beSigned(const Bureaucrat *bureaucrat)
{
	if (this->_req_grade_sign >= bureaucrat->getGrade())
	{
		this->_issigned = true;
		std::cout << Green << bureaucrat->getName() << " has signed form "
			<< this->getName() << Reset << std::endl;
	}
	else
		throw (Form::GradeTooLowException(this->_name));		
}

/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */

Form		&Form::operator=(const Form &rhs)
{
	this->_issigned = rhs.getIsSigned();
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