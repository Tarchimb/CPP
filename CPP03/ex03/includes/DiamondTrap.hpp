/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 22:11:19 by tarchimb          #+#    #+#             */
/*   Updated: 2022/04/08 10:10:18 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <ClapTrap.hpp>
#include <FragTrap.hpp>
#include <ScavTrap.hpp>

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
		DiamondTrap	();
		DiamondTrap		(std::string name);
		DiamondTrap		(DiamondTrap const &src);
		~DiamondTrap	();
		
/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */
		DiamondTrap	&operator=(DiamondTrap const &rhs);
		
/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
		void			whoAmI(void);
		
	private:
		std::string	_name;
};

std::ostream		&operator<<(std::ostream &o, DiamondTrap const &i);

#endif /* ***************************************************** DIAMONDTRAP_H */