/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:57:32 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/17 17:20:18 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <WrongAnimal.hpp>
#include <Brain.hpp>

class WrongCat : public WrongAnimal
{

	public:
/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
		WrongCat		();
		WrongCat		(WrongCat const & src);
		~WrongCat		();
		
/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */
		WrongCat	&operator=(WrongCat const &rhs);
		
/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
		void		makeSound(void) const;
/* ************************************************************************** */
/* 						  		Getters && Setters			  				  */
/* ************************************************************************** */
		std::string	getType(void) const;
		
	protected:
	private:
		Brain	*_brain;
};

std::ostream &			operator<<( std::ostream & o, WrongCat const & i );

#endif /* ******************************************************** WRONGCAT_H */