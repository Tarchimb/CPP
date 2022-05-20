/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:27:33 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/20 13:28:44 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
# define TEST_HPP

void	printTitle(std::string title);
void	trysign(Bureaucrat &b, Form &f1, Form &f2, Form &f3);
void	tryOperatorForBureaucrat(Bureaucrat &b1, Bureaucrat &b2, Bureaucrat &b3);
void	tryOperatorForm(Form &f1, Form &f2, Form &f3);
void	tryWrongInit(void);
void	tryChangeGrade(void);

#endif