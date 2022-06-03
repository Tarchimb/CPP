/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BaseClass.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:19:17 by tarchimb          #+#    #+#             */
/*   Updated: 2022/06/02 14:28:03 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "main.hpp"

class Base
{
	public :
		virtual ~Base(){}
}	;

class A : public Base {};
class B : public Base {};
class C : public Base {};