/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 23:18:05 by maragao           #+#    #+#             */
/*   Updated: 2023/08/27 23:18:05 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <forward_list>

class   ElementNotFound : public std::exception
{
public:
    virtual const char * what() const throw(){
        return ("Exception: Element not found");
    }
};

template <typename T>
void    easyfind(T &t, int n)
{
    if (std::find(t.begin(), t.end(), n) == t.end())
        throw ElementNotFound();
    std::cout << "Element found" << std::endl;
}

#endif