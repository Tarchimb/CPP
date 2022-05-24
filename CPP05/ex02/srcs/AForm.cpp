/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:43:14 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/24 11:00:41 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */

AForm::AForm() : _issigned(false)
{
	
}

AForm::AForm(std::string name, int req_grade_sign, int req_grade_ex, std::string target)
	:	_name(name), _target(target), _issigned(false)
{

	if (req_grade_sign > MAX_GRADE || req_grade_ex > MAX_GRADE)
		throw GradeTooHighException(this->_name, "instanciate");
	else if (req_grade_ex < MIN_GRADE || req_grade_sign < MIN_GRADE)
		throw GradeTooLowException(this->_name, "instanciate");
	else
	{
		_req_grade_ex = req_grade_ex;
		_req_grade_sign = req_grade_sign;
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

std::string	AForm::getTarget() const
{
	return (this->_target);
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
/*	 							Exceptions							  		  */
/* ************************************************************************** */

const char	*AForm::GradeTooLowException::what() const throw()
{
	std::string	data(this->_name + ": Grade isn't high enough to "
		+ this->_action + " it!");
	return (data.c_str());
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	std::string	data(this->_name + ": Maximum grade reached");
	return (data.c_str());
}

const char	*AForm::IsNotSignedException::what() const throw()
{
	std::string	data(this->_name + ": this form who targetted " + this->_target
		+ " isn't signed yet");
	return (data.c_str());
}

/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */

void	AForm::beSigned(const Bureaucrat *bureaucrat)
{
	if (this->_req_grade_sign >= bureaucrat->getGrade())
	{
		this->_issigned = true;
		std::cout << Green << bureaucrat->getName() << " has signed form "
			<< this->getName() << Reset << std::endl;
	}
	else
		throw (AForm::GradeTooLowException(this->_name, "sign"));
}

void	AForm::beExecute(Bureaucrat &executor) const
{
	if (this->_issigned == false)
		throw(IsNotSignedException(this->_name, this->_target));
	else if (executor.getGrade() >= this->getGradeToEx())
		throw(GradeTooLowException(executor.getName(), "execute"));
	else
		execute(executor);
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