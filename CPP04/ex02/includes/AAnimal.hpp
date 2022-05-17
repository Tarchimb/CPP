/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:08:33 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/17 17:22:18 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
#define RED "\e[1;31m"
#define GREEN "\e[1;32m"
#define END "\033[0m"

class AAnimal
{

	public:
/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
		AAnimal	();
		AAnimal	(AAnimal const & src);
		virtual ~AAnimal	();
		
/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */
		AAnimal	&operator=( AAnimal const & rhs );
		
/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
		virtual void		makeSound(void) const = 0;
/* ************************************************************************** */
/* 						  		Getters && Setters			  				  */
/* ************************************************************************** */
		std::string	getType(void) const;
		
	protected:
		std::string	_type;
	private:
};

std::ostream		&operator<<(std::ostream &o, AAnimal const &i);

#endif /* ******************************************************** ANIMAL_H */