/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:07:01 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/07 14:08:14 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	print_c(char c)
{
	if (isalpha(c) != 0)
	{
		c = toupper(c);
		std::cout << c;
	}
	else
		std::cout << c;
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
			print_c(argv[i][j]);
		std::cout << " ";
		j = 0;
	}
	std::cout << std::endl;
}