/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:27:29 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/21 16:05:26 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << RED << "Please enter only one of the following argument :"
			<< "[DEBUG][INFO][WARNING][ERROR]" << END << std::endl;
		return (0);
	}
	Harl	test;
	test.complain(argv[1]);
	return (0);
}