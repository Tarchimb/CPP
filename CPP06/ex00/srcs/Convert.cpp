/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:58:18 by tarchimb          #+#    #+#             */
/*   Updated: 2022/06/01 12:56:33 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() : is_passed(0), IS_CHAR(false), IS_INT(false)
	, IS_DOUBLE(false), IS_FLOAT(false), IS_FUN(false), IS_WRONG(false)
{
	
}

void	Convert::toChar(double src, char *argv)
{
	char	c_ptr;
	
	c_ptr = static_cast<char>(src);
	std::cout << "char: ";
	if (IS_FUN == true || IS_WRONG == true || src > 127 || src < 0)
		std::cout << "impossible" << std::endl;
	else if (IS_CHAR == true)
		std::cout << "\'" << argv[0] << "\'" << std::endl;
	else if ((src >= 32 && src <= 127) || IS_CHAR == true)
		std::cout << "\'" << c_ptr << "\'" << std::endl;
	else if (src >= 0 && src <= 127 && IS_WRONG == false)
		std::cout << "Non displayable" << std::endl;
}

void	Convert::toInt(double src, char *argv)
{
	std::cout << "int: ";
	int	i_ptr = static_cast<int>(src);
	if (IS_CHAR == true)
	{
		std::cout << static_cast<int>(argv[0]) << std::endl;
		return;
	}
	if (IS_INT == true)
		std::cout << atoi(argv) << std::endl;
	else if (src > std::numeric_limits<int>::max() 
		|| src < std::numeric_limits<int>::min() || IS_FUN == true || IS_WRONG == true)
		std::cout << "impossible" << std::endl;
	else
		std::cout << i_ptr << std::endl;
}

void	Convert::toDouble(double src, char *argv)
{
	std::string tmp(argv);
	
	std::cout << "double: ";
	if (IS_FUN == true)
	{
		if (IS_FLOAT == true)
			std::cout << tmp.substr(0, tmp.length() - 1) << std::endl;
		else
			std::cout << argv << std::endl;
	}
	else if (IS_DOUBLE == true)
		std::cout << src << std::endl;
	else if (IS_CHAR == true)
		std::cout << static_cast<double>(argv[0]) << ".0" << std::endl;
	else if (IS_FLOAT == true || IS_INT == true)
		std::cout << static_cast<double>(src) << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	Convert::toFloat(double src, char *argv)
{
	float	f_ptr = static_cast<float>(src);
	
	std::cout << "float: ";
	if (IS_CHAR == true)
	{
		std::cout << static_cast<float>(argv[0]) << ".0f" << std::endl;
		return;
	}
	if (IS_FUN == false && IS_WRONG == false)
		std::cout << std::setprecision(this->is_passed) << std::fixed 
			<< f_ptr << "f" << std::endl;
	else if (IS_FUN == true && IS_FLOAT == true)
		std::cout << argv << std::endl;
	else if (IS_FUN == true && IS_FLOAT == false)
		std::cout << argv << "f" << std::endl;
	else
		std::cout << "impossible" << std::endl;
}