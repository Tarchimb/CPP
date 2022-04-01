/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:23:54 by tarchimb          #+#    #+#             */
/*   Updated: 2022/04/01 13:25:27 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>


/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
DiamondTrap::DiamondTrap()
{
	std::cout << GREEN << "Default constructor called from DiamondTrap" 
		<< END << std::endl;
	this->_attackDamage = 20;
	this->_energyPoints = 50;
	this->_hitPoints = 100;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->_attackDamage = 20;
	this->_energyPoints = 50;
	this->_hitPoints = 100;
	this->_name = name;	
	std::cout << GREEN << "Constructor called from DiamondTrap " << _name
		<< " is born!" << END << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	this->_attackDamage = src._attackDamage;
	this->_energyPoints = src._energyPoints;
	this->_hitPoints = src._hitPoints;
	this->_name = src._name;
	std::cout << GREEN << "Copy constructor called, a copy of " << src.getName()
		<< " is born! from DiamondTrap"  << END << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << RED << "Destructor called from DiamondTrap, " << _name 
		<< " is dead!" << END << std::endl;
}

/* ************************************************************************** */
/* 						 	Overload  operators		  				  		  */
/* ************************************************************************** */
DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_attackDamage = rhs._attackDamage;
	this->_energyPoints = rhs._energyPoints;
	this->_hitPoints = rhs._hitPoints;
	this->_name = rhs._name;
	return (*this);	
}

std::ostream	&operator<<(std::ostream &o, DiamondTrap const &i)
{
	o << "Class:\tDiamondTrap\tName:\t" << i.getName() << "\tHit points:\t" 
		<< i.getHitPoints() << "\tEnergy points:\t" << i.getEnergyPoints()
		<< "\tAttack damage:\t" << i.getAttackDamage() << std::endl;
	return o;
}
/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
void	DiamondTrap::whoAmI(void)
{
	
}

/* ************************************************************************** */