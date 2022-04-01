#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <ClapTrap.hpp>

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
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
		DiamondTrap	();
};

std::ostream		&operator<<(std::ostream &o, DiamondTrap const &i);

#endif /* ***************************************************** DIAMONDTRAP_H */