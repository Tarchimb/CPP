/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:30:10 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/17 16:56:33 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
static std::string	randomString(int size)
{
	const std::string	alphaNum = "abcdefghijklmnopqrstuvwxyz";
	std::string			randomStr = "";

	for (int i = 0; i < size; i++)
		randomStr += alphaNum[std::rand() % alphaNum.size()];
	return (randomStr);
}
Brain::Brain()
{
	std::cout << GREEN << "Default constructor called, a brain is born!" 
		<< END << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] += randomString(5);
	}
}

Brain::Brain(const Brain &src)
{
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = src._ideas[i];
	}
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
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = rhs._ideas[i];	
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream & o, Brain const & i)
{
	for (int j = 0; j < 100; j++)
	{
		std::cout << "[Idea" << j << "]" << i.getIdea(j) << std::endl;
	}
	return o;
}

/* ************************************************************************** */
/* 						  		Getters && Setters			  				  */
/* ************************************************************************** */
std::string	Brain::getIdea(int i) const
{
	return (this->_ideas[i]);
}

void		Brain::setIdea(Brain *rhs)
{
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = rhs->_ideas[i];	
	}
}

/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
void		Brain::print_ideas(void) const
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "[Idea " << i << "] : ";
		std::cout << this->_ideas[i] << std::endl;
	}
	std::cout << std::endl;
}

/* ************************************************************************** */