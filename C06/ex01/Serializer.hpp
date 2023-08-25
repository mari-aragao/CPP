/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 00:14:38 by maragao           #+#    #+#             */
/*   Updated: 2023/08/24 00:14:38 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIAZER_HPP
#include <iostream>
#include <iomanip>
#include <stdint.h>
#include <string>
#include "Data.hpp"

class Serializer
{
public:
    Serializer(Serializer const &s);
    ~Serializer(void);
    Serializer  &operator=(Serializer const &s);
    
    static uintptr_t   serialize(Data *ptr);
    static Data*       deserialize(uintptr_t raw);

private:
    Serializer(void);
};

#endif