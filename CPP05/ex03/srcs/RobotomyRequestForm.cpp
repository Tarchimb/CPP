/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 09:56:41 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/20 15:34:45 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
RobotomyRequestForm::RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("RobotomyRequestForm", 72, 45, target){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &src)
	: AForm("RobotomyRequestForm", 72, 45, src.getTarget()) {}


RobotomyRequestForm::~RobotomyRequestForm(){}

/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */
RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	this->setTarget(rhs.getTarget());
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const RobotomyRequestForm &i)
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
void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	int result;

	srand((unsigned) time(0));
	result = 1 + (rand() % 2);
	std::cout << Yellow << "[Form executed] : " << Green << "Bzzz Bzzz Bzzz, " 
		<< this->getTarget();
	if (result == 1)
		std::cout << "  has been robotimized!" << Reset << std::endl;
	else
		std::cout << " has failed to be robotomized!" << Reset << std::endl;	
	std::cout << Green << executor.getName() << " executed " << this->getName()
		<< std::endl;
}