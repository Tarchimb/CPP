/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:06:22 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/20 13:29:41 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "test.hpp"

int	main(void)
{
	Bureaucrat	b1("Anas", 130);
	Bureaucrat	b2("Max", 100);
	Bureaucrat	b3("Brice", 1);
	Form		f1("Law 1", 100, 100);
	Form		f2("Law 2", 1, 1);
	Form		f3("Law 3", 150, 150);

	printTitle("Bureaucrats:");
	std::cout << b1 << b2 << b3;
	printTitle("Form:");
	std::cout << f1 << f2 << f3;
	printTitle("Try sign");
	trysign(b1, f1, f2, f3);
	trysign(b2, f1, f2, f3);
	trysign(b3, f1, f2, f3);
	tryOperatorForBureaucrat(b1, b2, b3);
	tryOperatorForm(f1, f2, f3);
	tryWrongInit();
	tryChangeGrade();
}
