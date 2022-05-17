/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:23:08 by tarchimb          #+#    #+#             */
/*   Updated: 2022/04/01 11:28:36 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AAnimal.hpp>

/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
AAnimal::AAnimal() : _type("AAnimal")
{
	std::cout << GREEN << "Default constructor called, an "<< _type 
		<< " is born!" << END << std::endl;
}

AAnimal::AAnimal(const AAnimal &src) : _type(src.getType())
{
	std::cout << GREEN << "Copy constructor called, a copy of " << _type
		<< " is born!"  << END << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << RED << "Destructor called from AAnimal, " << _type 
		<< " is dead!" << END << std::endl;
}

/* ************************************************************************** */
/* 						 	Overload  operators		  				  		  */
/* ************************************************************************** */
AAnimal	&AAnimal::operator=(AAnimal const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

std::ostream	&operator<<(std::ostream & o, AAnimal const & i)
{
	o << "Type:\t" << i.getType() << std::endl;
	return o;
}

/* ************************************************************************** */
/* 						  		Getters && Setters			  				  */
/* ************************************************************************** */
std::string	AAnimal::getType(void) const
{
	return (this->_type);
}

/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
void	AAnimal::makeSound(void) const
{
	std::cout << "Unknown sound from Animal" << std::endl;
}
/* ************************************************************************** */