/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:23:08 by tarchimb          #+#    #+#             */
/*   Updated: 2022/04/01 11:28:36 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
Animal::Animal() : _type("Animal")
{
	std::cout << GREEN << "Default constructor called, an "<< _type 
		<< " is born!" << END << std::endl;
}

Animal::Animal(const Animal &src) : _type(src.getType())
{
	std::cout << GREEN << "Copy constructor called, a copy of " << _type
		<< " is born!"  << END << std::endl;
}

Animal::~Animal()
{
	std::cout << RED << "Destructor called, " << _type << " is dead!"
		<< END << std::endl;
}

/* ************************************************************************** */
/* 						 	Overload  operators		  				  		  */
/* ************************************************************************** */
Animal	&Animal::operator=(Animal const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

std::ostream	&operator<<(std::ostream & o, Animal const & i)
{
	o << "Type:\t" << i.getType() << std::endl;
	return o;
}

/* ************************************************************************** */
/* 						  		Getters && Setters			  				  */
/* ************************************************************************** */
std::string	Animal::getType(void) const
{
	return (this->_type);
}

/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
void	Animal::makeSound(void) const
{
	std::cout << "Unknown sound from animal" << std::endl;
}
/* ************************************************************************** */