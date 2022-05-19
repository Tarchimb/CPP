/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:43:14 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/19 17:12:55 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */

AForm::AForm() : _issigned(false)
{
	
}

AForm::AForm(std::string name, int req_grade_sign, int req_grade_ex) : 
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

AForm::~AForm()
{
	
}
/* ************************************************************************** */
/* 						  		Getters && Setters			  				  */
/* ************************************************************************** */
bool		AForm::getIsSigned() const
{
	return (this->_issigned);
}

std::string	AForm::getName() const
{
	return (this->_name);
}

int			AForm::getGradeToEx() const
{
	return (this->_req_grade_ex);
}

int			AForm::getGradeToSign() const
{
	return (this->_req_grade_sign);
}

/* ************************************************************************** */
/*	 							Under class							  		  */
/* ************************************************************************** */

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("Grade isn't high enough");
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("Maximum grade reached");
}

/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */

void	AForm::beSigned(const Bureaucrat *bureaucrat)
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
			AForm::GradeTooLowException();		
	}
	catch(AForm::GradeTooLowException &e)
	{
		std::cout << Red << bureaucrat->getName() << " :" << e.what() << Reset	
			<< std::endl;
	}
}

/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */

AForm		&AForm::operator=(const AForm &rhs)
{
	this->_issigned = rhs.getIsSigned();
	this->_name = rhs.getName();
	this->_req_grade_ex = rhs.getGradeToEx();
	this->_req_grade_sign = rhs.getGradeToSign();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const AForm &i)
{
	o << Yellow_u << "Form " << i.getName() << Reset << ":\n\nIs it signed: "
		<< (i.getIsSigned()? "Yes\n" : "No\n") << "Min requested grade to sign: "
		<< i.getGradeToSign() << "\nMin requested grade to execute : "
		<< i.getGradeToEx() << "\n" << std::endl;
	return (o);
}