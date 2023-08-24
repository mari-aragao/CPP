/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 01:21:47 by maragao           #+#    #+#             */
/*   Updated: 2023/08/22 01:21:47 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Invalid input" << std::endl;
        return (1);
    }
    ScalarConverter sc(static_cast<std::string>(argv[1]));
    return (0);
}