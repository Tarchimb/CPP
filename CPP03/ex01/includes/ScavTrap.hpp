/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:50:34 by tarchimb          #+#    #+#             */
/*   Updated: 2022/04/08 09:44:20 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <ClapTrap.hpp>

class ScavTrap : public ClapTrap
{
	public:
/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
		ScavTrap	();
		ScavTrap	(std::string name);
		ScavTrap	(ScavTrap const & src);
		~ScavTrap	();
		
/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */
		ScavTrap	&operator=( ScavTrap const & rhs );
		
/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
		void		guardGate();
		void		attack(const std::string &target);

	private:
};

std::ostream &			operator<<(std::ostream & o, ScavTrap const & i);

#endif /* ******************************************************** SCAVTRAP_H */