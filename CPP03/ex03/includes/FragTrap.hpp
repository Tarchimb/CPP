/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 10:19:04 by tarchimb          #+#    #+#             */
/*   Updated: 2022/04/08 10:06:41 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>

# include <ClapTrap.hpp>

class FragTrap : public virtual ClapTrap
{
	public:
/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
		FragTrap	();
		FragTrap	(std::string name);
		FragTrap	(FragTrap const & src);
		~FragTrap	();
		
/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */
		FragTrap	&operator=(FragTrap const &rhs);
		
/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
		void		highFiveGuys(void) const;
		void		attack(const std::string &target);

	private:
};

std::ostream		&operator<<(std::ostream &o, FragTrap const &i);

#endif /* ******************************************************** FRAGTRAP_H */