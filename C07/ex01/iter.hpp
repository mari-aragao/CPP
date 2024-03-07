/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:23:44 by maragao           #+#    #+#             */
/*   Updated: 2023/10/20 17:41:46 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>

template <typename T>
void    printValue(T &t)
{
    std::cout << t << std::endl;
};

template <typename T>
void    iter(T *t, size_t size, void (*func)(T&))
{
    for (size_t count = 0; count < size; count++)
        func(*(t + count));
};

template <typename T>
void    iter(T *t, size_t size, void (*func)(T const &))
{
    for (size_t count = 0; count < size; count++)
        func(*(t + count));
};

#endif
