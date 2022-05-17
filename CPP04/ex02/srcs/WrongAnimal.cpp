/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:21:29 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/17 17:21:30 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << GREEN << "Default constructor called, a "<< _type 
		<< " is born!" << END << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) : _type(src.getType())
{
	std::cout << GREEN << "Copy constructor called, a copy of " << _type
		<< " is born!"  << END << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "Destructor called from wrongAnimal, " << _type 
		<< " is dead!" << END << std::endl;
}

/* ************************************************************************** */
/* 						 	Overload  operators		  				  		  */
/* ************************************************************************** */
WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

std::ostream	&operator<<(std::ostream & o, WrongAnimal const & i)
{
	o << "Type:\t" << i.getType() << std::endl;
	return o;
}

/* ************************************************************************** */
/* 						  		Getters && Setters			  				  */
/* ************************************************************************** */
std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
void	WrongAnimal::makeSound(void) const
{
	std::cout << "Unknown sound from WrongAnimal" << std::endl;
}
/* ************************************************************************** */