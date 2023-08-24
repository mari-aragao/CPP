/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 01:24:32 by maragao           #+#    #+#             */
/*   Updated: 2023/08/24 01:24:32 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>
#include <cstdlib>
#include <exception>

class Base
{
public:
    virtual ~Base(void) {};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

#endif