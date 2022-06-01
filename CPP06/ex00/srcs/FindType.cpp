/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FindType.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:13:24 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/31 18:08:39 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

static bool	is_int(Convert &value, char *src, int len)
{
	int		i = 0;
	long	l_tmp = atol(src);
	int		i_tmp = atoi(src);
	if (l_tmp != i_tmp)
		return (false);
	while (i < len)
	{
		if (i > 0 && isdigit(src[i]) == false)
			return (false);
		else if (i == 0 && isdigit(src[i]) == false && src[i] != '+' && src[i] != '-')
			return (false);
		i++;
	}
	value.SetIsInt();
	return (true);
}

static bool	is_float_or_double(Convert &value, char *src, int len)
{
	int	i = 0;
	int	dot = 0;
	if (strcmp(src, "-inff") == 0 || strcmp(src, "+inff") == 0 || strcmp(src, "nanf") == 0)
	{
		value.SetIsFloat();
		value.SetIsFun();
		return (true);
	}
	else if (strcmp(src, "+inf") == 0 || strcmp(src, "-inf") == 0 || strcmp(src, "nan") == 0)
	{
		value.SetIsDouble();
		value.SetIsFun();
		return (true);
	}
	while (i < len)
	{
		if (dot == 1 && src[i] != 'f')
			value.is_passed++;
		if (src[i] == '.' && i < len - 1)
		{
			if (i == 0 || dot + 1 > 1)
				return (false);
			dot++;
			i++;
		}
		else if (i == len - 1 && src[i] == 'f')
		{
			value.SetIsFloat();
			return (true);
		}
		else if (isdigit(src[i]) == false)
			return (false);
		else
			i++;
	}
	value.SetIsDouble();
	return (true);
}

bool	detect_type(int argc, char *argv, Convert &value)
{
	int	len;
	if (argc != 2)
		return (false);

	len = strlen(argv);
	if (len == 1 && isalpha(argv[0]) == true)
	{
		value.SetIsChar();
		return (true);
	}
	if (value.GetIsChar() == false)
		if (is_int(value, argv, len) == false)
			if (is_float_or_double(value, argv, len) == false)
				value.SetIsWrong();
	return (true);
}

