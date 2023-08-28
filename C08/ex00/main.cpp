/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 23:17:31 by maragao           #+#    #+#             */
/*   Updated: 2023/08/27 23:17:31 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::vector<int> arr;
    std::cout << "array = { ";
    for(int i = 0; i < 8; i++)
    {
        arr.push_back(i);
        std::cout << arr.at(i) << " ";
    }
    std::cout << "}" << std::endl;
    std::cout << "Try to find number 7 -> ";
    try { easyfind(arr, 7);}
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << "Try to find number 8 -> ";
    try { easyfind(arr, 8);}
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    return (0);
}