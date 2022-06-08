/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:59:22 by tarchimb          #+#    #+#             */
/*   Updated: 2022/06/07 18:32:44 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./includes/MutantStack.hpp"

int	main(void)
{
	MutantStack<int>	test;
	std::stack<int>		test1;

	test.push(6);
	test.push(17);
	return (0);
}