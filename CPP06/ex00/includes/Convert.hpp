/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 09:52:10 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/31 17:53:31 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include "main.hpp"

class Convert
{
	public: 
		int		is_passed;
		Convert();
		~Convert() {}
		void	SetIsChar()		{IS_CHAR = true;}
		void	SetIsInt()		{IS_INT = true;}
		void	SetIsDouble()	{IS_DOUBLE = true;}
		void	SetIsFloat()	{IS_FLOAT = true;}
		void	SetIsFun()		{IS_FUN = true;}
		void	SetIsWrong()	{IS_WRONG = true;}
		bool	GetIsChar()		{return (IS_CHAR);}
		bool	GetIsInt()		{return (IS_INT);}
		bool	GetIsDouble()	{return (IS_DOUBLE);}
		bool	GetIsFloat()	{return (IS_FLOAT);}
		bool	GetIsFun()		{return (IS_FUN);}
		bool	GetIsWrong()	{return (IS_WRONG);}

		void	toChar(double src, char *argv);
		void	toInt(double src, char *argv);
		void	toFloat(double src, char *argv);
		void	toDouble(double src, char *argv);
		
	private:	
		Convert(Convert &){};
		Convert	&operator=(Convert &){return (*this);};
		bool	IS_CHAR;
		bool	IS_INT;
		bool	IS_DOUBLE;
		bool	IS_FLOAT;
		bool	IS_FUN;
		bool	IS_WRONG;
};

#endif