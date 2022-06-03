/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:27:33 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/24 13:08:20 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
# define TEST_HPP

void	printTitle(std::string title);
void	launch_tests(void);
void	tryExecute(Bureaucrat &b1, Bureaucrat &b2, AForm &f1, AForm &f2, AForm &f3);
void	trySign(Bureaucrat &b1, Bureaucrat &b2, AForm &f1, AForm &f2, AForm &f3);
void	tryExecuteBeforeSign(Bureaucrat &b1, AForm &f1);

#endif