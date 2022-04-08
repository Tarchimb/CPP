/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:23:08 by tarchimb          #+#    #+#             */
/*   Updated: 2022/04/08 10:08:42 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>


/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
ScavTrap::ScavTrap()
{
	this->_name = "Default";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << GREEN << "Default constructor called from ScavTrap, " << _name 
		<< " is born!" << END << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;	
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << GREEN << "Constructor called from ScavTrap " << _name
		<< " is born!" << END << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	this->_attackDamage = src._attackDamage;
	this->_energyPoints = src._energyPoints;
	this->_hitPoints = src._hitPoints;
	this->_name = src._name;
	std::cout << GREEN << "Copy constructor called, a copy of " << src.getName()
		<< " is born! from ScavTrap"  << END << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << RED << "Destructor called from ScavTrap, " << _name 
		<< " is dead!" << END << std::endl;
}

/* ************************************************************************** */
/* 						 	Overload  operators		  				  		  */
/* ************************************************************************** */
ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_attackDamage = rhs._attackDamage;
	this->_energyPoints = rhs._energyPoints;
	this->_hitPoints = rhs._hitPoints;
	this->_name = rhs._name;
	return (*this);	
}

std::ostream	&operator<<(std::ostream &o, ScavTrap const &i)
{
	o << "Class:\tScavTrap\tName:\t" << i.getName() << "\tHit points:\t" 
		<< i.getHitPoints() << "\tEnergy points:\t" << i.getEnergyPoints()
		<< "\tAttack damage:\t" << i.getAttackDamage() << std::endl;
	return o;
}
/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in mode GateKeeping! "
		<< std::endl;	
}

void            ScavTrap::attack(const std::string &target)
{
    if (_hitPoints > 0 && _energyPoints > 0)
    {
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
            << _attackDamage << " points of damage!" << std::endl;
    }
    else
         std::cout << "ScavTrap " << _name << " is dead!" << std::endl;
    _energyPoints -= 1;
}

/* ************************************************************************** */