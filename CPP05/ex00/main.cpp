/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:06:22 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/20 14:16:23 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "test.hpp"

int	main(void)
{
	Bureaucrat	b1("Max", 1);
	Bureaucrat	b2("Anas", 150);
	Bureaucrat	b3("Brice", 10);


	printTitle("Presentation");
	std::cout << b1 << b2 << b3;
	tryWrongInit();
	tryChangeGrade();
	tryOperatorForBureaucrat(b1, b2, b3);
	return (0);	
}
