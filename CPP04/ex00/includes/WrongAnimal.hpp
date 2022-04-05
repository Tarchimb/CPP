#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>
#define RED "\e[1;31m"
#define GREEN "\e[1;32m"
#define END "\033[0m"

class WrongAnimal
{

	public:
/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
		WrongAnimal		();
		WrongAnimal		(WrongAnimal const & src);
		~WrongAnimal	();
		
/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */
		WrongAnimal	&operator=( WrongAnimal const & rhs );
		
/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
		void		makeSound(void) const;
/* ************************************************************************** */
/* 						  		Getters && Setters			  				  */
/* ************************************************************************** */
		std::string	getType(void) const;
		
	protected:
		std::string	_type;
	private:
};

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i );

#endif /* ***************************************************** WRONGANIMAL_H */