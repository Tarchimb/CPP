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
	this->_brain = new Brain();
	this->_type = "Dog";
	std::cout << GREEN << "Default constructor called, a "<< _type 
		<< " is born!" << END << std::endl;}

Dog::Dog(const Dog &src)
{
	this->_brain = new Brain();
	*this = src;
	std::cout << GREEN << "Copy constructor called, a copy of " << _type
		<< " is born!"  << END << std::endl;
}

Dog::~Dog()
{
	std::cout << RED << "Destructor called from dog, " << _type << " is dead!"
		<< END << std::endl;
	delete _brain;
}

/* ************************************************************************** */
/* 						 	Overload  operators		  				  		  */
/* ************************************************************************** */
Dog	&Dog::operator=(Dog const &rhs)
{
	this->_type = rhs.getType();
	this->_brain->setIdea(rhs._brain);
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

void	Dog::printIdeas(void) const
{
	std::cout << "Addr: " << &this->_brain << std::endl;
	this->_brain->print_ideas();
}
/* ************************************************************************** */