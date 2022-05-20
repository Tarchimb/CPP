/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 09:56:41 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/20 15:34:45 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
PresidentialPardonForm::PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("PresidentialPardonForm", 25, 5, target){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &src)
{
	*this = src;
}


PresidentialPardonForm::~PresidentialPardonForm(){}

/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */
PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	(void)rhs;
	return *this;
}

std::ostream	&operator<<(std::ostream &o, const PresidentialPardonForm &i)
{
	o << Yellow_u << i.getName() << Reset << ":\n\nTarget: " << i.getTarget()
		<< "\nIs it signed: " << (i.getIsSigned()? "Yes\n" : "No\n")
		<< "Min requested grade to sign: " << i.getGradeToSign()
		<< "\nMin requested grade to execute : "
		<< i.getGradeToEx() << "\n" << std::endl;
	return (o);
}

/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
void	PresidentialPardonForm::execute(Bureaucrat const &executor)
{
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
	std::cout << Green_u << this->getTarget()
		<< " as been forgiven by Zaphod Beeblebrox." << std::endl;
}


/* ************************************************************************** */
/*	 							Try / Catch exceptions			  			  */
/* ************************************************************************** */