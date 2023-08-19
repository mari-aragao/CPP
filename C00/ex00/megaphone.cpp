/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:03:20 by maragao           #+#    #+#             */
/*   Updated: 2023/08/19 01:03:20 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    size_t i;
    size_t j;
    std::string str;
    i = 1;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (0);
    }
    while (i < (size_t)argc)
    {
        j = 0;
        str = argv[i];
        while (j < str.length())
        {
            std::cout << (char)toupper(str.at(j));
            j++;
        }
        i++;
    }
    std::cout << '\n';
    return (0);
}