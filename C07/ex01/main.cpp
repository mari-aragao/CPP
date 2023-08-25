/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:23:38 by maragao           #+#    #+#             */
/*   Updated: 2023/08/24 12:23:38 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    int     i[5] = {1, 2, 3, 4, 5};
    iter(i, 5, printValue<int>);
    std::cout << std::endl;
    
    char    c[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
    iter(c, 6, printValue<char>);
    std::cout << std::endl;

    float   f[3] = {1.6, 22.5, 13.7};
    iter(f, 3, printValue<float>);
    std::cout << std::endl << std::endl;
    
    std::string s[] = {"uma", "duas", "tres"};
    iter(s, 3, printValue<std::string>);
    std::cout << std::endl;
    return 0;
}