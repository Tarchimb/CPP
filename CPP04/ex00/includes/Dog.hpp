/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:08:33 by tarchimb          #+#    #+#             */
/*   Updated: 2022/04/04 14:15:08 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <Animal.hpp>

class Dog : public Animal
{

	public:
/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
		Dog		();
		Dog		(Dog const & src);
		virtual ~Dog	();
		
/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */
		Dog	&operator=( Dog const & rhs );
		
/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
		virtual void		makeSound(void) const;
/* ************************************************************************** */
/* 						  		Getters && Setters			  				  */
/* ************************************************************************** */
		std::string	getType(void) const;
		
	protected:
	private:
};

std::ostream		&operator<<( std::ostream & o, Dog const & i );

#endif /* ******************************************************** DOG_H */