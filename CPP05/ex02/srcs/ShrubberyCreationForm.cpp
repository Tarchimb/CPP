/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 09:56:41 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/24 13:17:50 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
ShrubberyCreationForm::ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("ShrubberyCreationForm", 145, 137, target){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &src)
{
	*this = src;
}


ShrubberyCreationForm::~ShrubberyCreationForm(){}

/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */
ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	
	return *this;
}

std::ostream	&operator<<(std::ostream &o, const ShrubberyCreationForm &i)
{
	o << Yellow_u << i.getName() << Reset << ":\n\nTarget: " << i.getTarget()
		<< "\nIs it signed: " << (i.getIsSigned()? "Yes\n" : "No\n")
		<< "Min requested grade to sign: " << i.getGradeToSign()
		<< "\nMin requested grade to execute : "
		<< i.getGradeToEx() << "\n" << std::endl;
	return (o);
}

/* ************************************************************************** */
/*	 							Under class							  		  */
/* ************************************************************************** */

/* ************************************************************************** */
/* 						  		Getters && Setters			  				  */
/* ************************************************************************** */

/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::ifstream	original("tree.txt");
	std::ofstream	tree;
	std::string		line;

	if (original.is_open() == false)
	{
		std::cout << Red << "Can't open tree.txt" << Reset << std::endl;
		return ;
	}
	tree.open(this->getTarget() + "_shrubbery");
	if (tree.is_open() == false)
	{
		std::cout << Red << "Can't open " << this->getTarget() + "_shrubbery"
			<< Reset << std::endl;
		return ;
	}
	while(std::getline(original, line))
		tree << line << "\n";
	tree.close();
	std::cout << Yellow << "[Form executed] : "  << this->getTarget() + "_shrubbery"
		<< " has been created!" << Reset << std::endl;
	std::cout << Green << executor.getName() << " executed " << this->getName()
		<< std::endl;	
}


/* ************************************************************************** */
/*	 							Try / Catch exceptions			  			  */
/* ************************************************************************** */