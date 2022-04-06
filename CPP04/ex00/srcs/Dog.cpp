/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:23:08 by tarchimb          #+#    #+#             */
/*   Updated: 2022/04/01 11:28:36 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>


/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
Dog::Dog()
{
	this->_type = "Dog";
	std::cout << GREEN << "Default constructor called, a "<< _type 
		<< " is born!" << END << std::endl;}

Dog::Dog(const Dog &src)
{
	this->_type = src.getType();
	std::cout << GREEN << "Copy constructor called, a copy of " << _type
		<< " is born!"  << END << std::endl;
}

Dog::~Dog()
{
	std::cout << RED << "Destructor called from dog, " << _type << " is dead!"
		<< END << std::endl;
}

/* ************************************************************************** */
/* 						 	Overload  operators		  				  		  */
/* ************************************************************************** */
Dog	&Dog::operator=(Dog const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

std::ostream	&operator<<(std::ostream & o, Dog const & i)
{
	o << "Type:\t" << i.getType() << std::endl;
	return o;
}

/* ************************************************************************** */
/* 						  		Getters && Setters			  				  */
/* ************************************************************************** */
std::string	Dog::getType(void) const
{
	return (this->_type);
}

/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
void	Dog::makeSound(void) const
{
	std::cout << "Ouaf" << std::endl;
}
/* ************************************************************************** */