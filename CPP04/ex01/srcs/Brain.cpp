/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:30:10 by tarchimb          #+#    #+#             */
/*   Updated: 2022/04/06 14:51:30 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
Brain::Brain()
{
	std::cout << GREEN << "Default constructor called, a brain is born!" 
		<< END << std::endl;
}

Brain::Brain(const Brain &src)
{
	// this->_idea = src._idea;
	std::cout << GREEN << "Copy constructor called, a brain is born!" 
		<< END << std::endl;
}

Brain::~Brain()
{
	std::cout << RED << "Destructor called from Brain!"<< END << std::endl;
}

/* ************************************************************************** */
/* 						 	Overload  operators		  				  		  */
/* ************************************************************************** */
Brain	&Brain::operator=(Brain const &rhs)
{
	this->_idea = rhs.getIdea();
	return (*this);
}

std::ostream	&operator<<(std::ostream & o, Brain const & i)
{
	// o << "Type:\t" << i.getIdea() << std::endl;
	return o;
}

/* ************************************************************************** */
/* 						  		Getters && Setters			  				  */
/* ************************************************************************** */
std::string	*Brain::getIdea(void) const
{
	return (this->_idea);
}

/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
/* ************************************************************************** */