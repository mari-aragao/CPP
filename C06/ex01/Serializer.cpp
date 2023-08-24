/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 00:24:57 by maragao           #+#    #+#             */
/*   Updated: 2023/08/24 00:24:57 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void) {}

Serializer::Serializer(Serializer const &s)
{
    *this = s;
}

Serializer::~Serializer(void) {}

Serializer  &Serializer::operator=(Serializer const &s)
{
    (void)s;
    return *this;
}

uintptr_t   Serializer::serialize(Data *ptr)
{
    uintptr_t uiptr = reinterpret_cast<uintptr_t>(ptr);
    return uiptr;
}

Data*       Serializer::deserialize(uintptr_t raw)
{
    Data *dtptr = reinterpret_cast<Data *>(raw);
    return dtptr;
}