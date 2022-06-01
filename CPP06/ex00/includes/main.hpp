/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:12:22 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/31 15:33:22 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>
# include <string>
#include <iomanip>
#include <cmath>
#include <sstream>
# include "alias.h"
# include "Convert.hpp"
# define CHAR 1
# define INT 2
# define DOUBLE 3
# define FLOAT 4
# define NO_VALID 5

class Convert;

bool	detect_type(int argc, char *argv, Convert &type);

#endif