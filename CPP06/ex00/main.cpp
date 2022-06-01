/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 09:51:37 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/31 18:08:25 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	print_value(char *argv, Convert &value)
{
	double	ptr = strtod(argv, NULL);
	if (!isinf(ptr) && !isnan(ptr) && ptr
			&& (ptr < -std::numeric_limits<float>::max()|| (ptr > -std::numeric_limits<float>::min()
			&& ptr < std::numeric_limits<float>::min()) || ptr > std::numeric_limits<float>::max()))
			value.SetIsWrong();
	if (value.is_passed == 0)
		value.is_passed = 1;
	if (value.GetIsWrong() == false)
	{
		value.toChar(ptr, argv);
		value.toInt(ptr, argv);
		value.toFloat(ptr, argv);
		value.toDouble(ptr, argv);
	}
	else
		std::cout << Red << "Please enter one of the following type :"
			<< " int, float, double, char" << Reset << std::endl;
}

int	main(int argc, char **argv)
{
	Convert	value;
	if (detect_type(argc, argv[1], value) == false)
	{
		std::cout << Red << "Usage: ./convert [litteral string]" << Reset
			<< std::endl;
		return (0);
	}
	print_value(argv[1], value);
	return (0);
}