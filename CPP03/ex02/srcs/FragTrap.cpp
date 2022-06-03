/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 10:18:47 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/25 09:28:18 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
FragTrap::FragTrap()
{
	this->_name = "Default";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << GREEN << "Default constructor called from FragTrap" 
		<< END << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_name = name;	
	std::cout << GREEN << "Constructor called from FragTrap " << _name
		<< " is born!" << END << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
	*this = src;
	std::cout << GREEN << "Copy constructor called, a copy of " << src.getName()
		<< " is born! from FragTrap"  << END << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << RED << "Destructor called from FragTrap, " << _name 
		<< " is dead!" << END << std::endl;
}

/* ************************************************************************** */
/* 						 	Overload  operators		  				  		  */
/* ************************************************************************** */
FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_attackDamage = rhs._attackDamage;
	this->_energyPoints = rhs._energyPoints;
	this->_hitPoints = rhs._hitPoints;
	this->_name = rhs._name;
	return (*this);	
}

std::ostream	&operator<<(std::ostream &o, FragTrap const &i)
{
	o << "Class:\tFragTrap\tName:\t" << i.getName() << "\tHit points:\t" 
		<< i.getHitPoints() << "\tEnergy points:\t" << i.getEnergyPoints()
		<< "\tAttack damage:\t" << i.getAttackDamage() << std::endl;
	return o;
}
/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
void	FragTrap::highFiveGuys(void) const
{
	std::cout << "From " << _name << ": High Five!"
		<< std::endl;	
}

void            FragTrap::attack(const std::string &target)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
	    std::cout << "FragTrap " << _name << " attacks " << target << ", causing "
			<< _attackDamage << " points of damage!" << std::endl;
	}
	else
	     std::cout << "ScavTrap " << _name << " is dead!" << std::endl;
	_energyPoints -= 1;
}

/* ************************************************************************** */