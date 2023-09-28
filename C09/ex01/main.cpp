/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 02:53:27 by maragao           #+#    #+#             */
/*   Updated: 2023/08/29 02:53:27 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2) {std::cerr << "Error" << std::endl; return (-1);}
    try {RPN rpn(argv[1]);}
    catch (std::exception & e) {std::cerr << e.what() << std::endl;}
    return (0);
}