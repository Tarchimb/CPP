/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:23:08 by tarchimb          #+#    #+#             */
/*   Updated: 2022/04/01 10:32:14 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
ClapTrap::ClapTrap() : _name (std::string()), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << GREEN << "Default constructor called" << END << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10)
	, _energyPoints(10) , _attackDamage(0)
{
	std::cout << GREEN << "Constructor called, " << _name  << " is born!"
		<< END << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	this->_attackDamage = src._attackDamage;
	this->_energyPoints = src._energyPoints;
	this->_hitPoints = src._hitPoints;
	this->_name = src._name;
	std::cout << GREEN << "Copy constructor called, a copy of " << src.getName()
		<< " is born!"  << END << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << RED << "Destructor called from ClapTrap, "
		<< _name << " is dead!" << END << std::endl;
}

/* ************************************************************************** */
/* 						 	Overload  operators		  				  		  */
/* ************************************************************************** */
ClapTrap	&ClapTrap::operator=(ClapTrap const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_attackDamage = rhs._attackDamage;
	this->_energyPoints = rhs._energyPoints;
	this->_hitPoints = rhs._hitPoints;
	this->_name = rhs._name;
	return (*this);	
}

std::ostream	&operator<<(std::ostream &o, ClapTrap const &i)
{
	o << "Class:\tClapTrap\tName:\t" << i.getName() << "\tHit points:\t" 
		<< i.getHitPoints() << "\tEnergy points:\t" << i.getEnergyPoints()
		<< "\tAttack damage:\t" << i.getAttackDamage() << std::endl;
	return o;
}

/* ************************************************************************** */
/* 						  		Getters && Setters			  				  */
/* ************************************************************************** */
int			ClapTrap::getHitPoints(void) const
{
	return (_hitPoints);
}

int			ClapTrap::getEnergyPoints(void) const
{
	return (_energyPoints);
}

int			ClapTrap::getAttackDamage(void) const
{
	return (_attackDamage);
}

std::string	ClapTrap::getName(void) const
{
	return (_name);
}

/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
void		ClapTrap::attack(const std::string &target)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
			<< _attackDamage << " points of damage!" << std::endl;	
	}
	else
		std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
	_energyPoints -= 1;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " has taken " << amount
			<< " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
	_hitPoints -= amount;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " has be repaired with " << amount
			<< " hits point!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
	_hitPoints += amount;
	_energyPoints -= 1;
}

/* ************************************************************************** */