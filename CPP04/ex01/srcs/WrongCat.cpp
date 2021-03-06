/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:23:27 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/17 17:23:28 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
WrongCat::WrongCat()
{
	this->_brain = new Brain();
	this->_type = "WrongCat";
	std::cout << GREEN << "Default constructor called, a "<< _type 
		<< " is born!" << END << std::endl;}

WrongCat::WrongCat(const WrongCat &src)
{
	this->_type = src.getType();
	std::cout << GREEN << "Copy constructor called, a copy of " << _type
		<< " is born!"  << END << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << RED << "Destructor called from wrongcat, " << _type 
		<< " is dead!" << END << std::endl;
}

/* ************************************************************************** */
/* 						 	Overload  operators		  				  		  */
/* ************************************************************************** */
WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

std::ostream	&operator<<(std::ostream & o, WrongCat const & i)
{
	o << "Type:\t" << i.getType() << std::endl;
	return o;
}

/* ************************************************************************** */
/* 						  		Getters && Setters			  				  */
/* ************************************************************************** */
std::string	WrongCat::getType(void) const
{
	return (this->_type);
}

/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
void	WrongCat::makeSound(void) const
{
	std::cout << "WrongMiaou" << std::endl;
}
/* ************************************************************************** */