/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:23:08 by tarchimb          #+#    #+#             */
/*   Updated: 2022/04/01 11:28:36 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>


/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
Cat::Cat()
{
	this->_brain = new Brain();
	this->_type = "Cat";
	std::cout << GREEN << "Default constructor called, a "<< _type 
		<< " is born!" << END << std::endl;}

Cat::Cat(const Cat &src)
{
	this->_brain = new Brain();
	this->_type = src.getType();
	this->_brain->setIdea(src._brain);
	std::cout << GREEN << "Copy constructor called, a copy of " << _type
		<< " is born!"  << END << std::endl;
}

Cat::~Cat()
{
	std::cout << RED << "Destructor called from cat, " << _type << " is dead!"
		<< END << std::endl;
	delete _brain;
}

/* ************************************************************************** */
/* 						 	Overload  operators		  				  		  */
/* ************************************************************************** */
Cat	&Cat::operator=(Cat const &rhs)
{
	this->_type = rhs.getType();
	this->_brain->setIdea(rhs._brain);
	return (*this);
}

std::ostream	&operator<<(std::ostream & o, Cat const & i)
{
	o << "Type:\t" << i.getType() << std::endl;
	return o;
}

/* ************************************************************************** */
/* 						  		Getters && Setters			  				  */
/* ************************************************************************** */
std::string	Cat::getType(void) const
{
	return (this->_type);
}

/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}

void	Cat::printIdeas(void) const
{
	std::cout << "Addr: " << &this->_brain << std::endl;
	this->_brain->print_ideas();
}
/* ************************************************************************** */