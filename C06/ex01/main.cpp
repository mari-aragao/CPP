/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 00:13:37 by maragao           #+#    #+#             */
/*   Updated: 2023/08/24 00:13:37 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data data;

    data.i = 1;
    data.s = "string";

    uintptr_t   uiptr = Serializer::serialize(&data);
    Data        *dtptr = Serializer::deserialize(uiptr);

    std::cout << "Data original adress = " << &data << " | Int value = " << data.i << " | String value = " << data.s << std::endl;
    std::cout << "Data returned adress = " << dtptr << " | Int value = " << dtptr->i << " | String value = " << dtptr->s << std::endl;
    return 0;
}