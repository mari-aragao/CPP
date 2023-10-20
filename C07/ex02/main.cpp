/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:23:38 by maragao           #+#    #+#             */
/*   Updated: 2023/10/20 17:55:57 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void)
{
    Array<int> arrayI(3);
    std::cout << "Array of ints size = " << arrayI.size() << std::endl;
    arrayI[0] = 1;
    arrayI[1] = 2;
    arrayI[2] = 3;
    std::cout << "arrayI[0] = " << arrayI[0] << std::endl;
    std::cout << "arrayI[1] = " << arrayI[1] << std::endl; 
    std::cout << "arrayI[2] = " << arrayI[2] << std::endl; 
    std::cout << "Try to acess arrayI[3] : ";
    try {std::cout << arrayI[3] << std::endl;}
    catch (std::exception &e) {std::cerr << e.what() << std::endl;}

    Array<int> arrayI_cpy;
    std::cout << std::endl << "Array of int default size: " << arrayI_cpy.size() << std::endl;
    arrayI_cpy = arrayI;
    std::cout << "Array of int after copy: "<< arrayI_cpy.size() << std::endl;
    std::cout << "arrayI[0] = " << arrayI[0] << " and arrayI_cpy[0] = " << arrayI_cpy[0] << std::endl; 
    std::cout << "arrayI[1] = " << arrayI[1] << " and arrayI_cpy[1] = " << arrayI_cpy[1] << std::endl; 
    std::cout << "arrayI[2] = " << arrayI[2] << " and arrayI_cpy[2] = " << arrayI_cpy[2] << std::endl; 
    
    Array<Array<int> > arrayAI(1);
    std::cout << std::endl << "Array of array of ints size = " << arrayAI.size() << std::endl;
    arrayAI[0] = arrayI;
    std::cout << "arrayAI[0][0] = " << arrayAI[0][0] << std::endl;
    std::cout << "arrayAI[0][1] = " << arrayAI[0][1] << std::endl;
    std::cout << "arrayAI[0][2] = " << arrayAI[0][2] << std::endl;
    std::cout << "Try to change arrayAI[1][0] : ";
    try {arrayAI[1][0] =  1;}
    catch (std::exception &e) {std::cerr << e.what() << std::endl;}
    
    Array<char> arrayC(2);
    std::cout << std::endl << "Array of chars size = " << arrayC.size() << std::endl;
    arrayC[0] = '4';
    arrayC[1] = '2';
    std::cout << "arrayC[0] = " << arrayC[0] << std::endl; 
    std::cout << "arrayC[1] = " << arrayC[1] << std::endl;
    std::cout << "Try to acess arrayC[2] : ";
    try {std::cout << arrayC[2] << std::endl;}
    catch (std::exception &e) {std::cerr << e.what() << std::endl;}     

    Array<std::string> arrayS(2);
    std::cout << std::endl << "Array of strings size = " << arrayS.size() << std::endl;
    arrayS[0] = "hello";
    arrayS[1] = "world";
    std::cout << "arrayS[0] = " << arrayS[0] << std::endl; 
    std::cout << "arrayS[1] = " << arrayS[1] << std::endl;
    std::cout << "Try to change arrayS[2] : ";
    try {arrayS[2] = "fail";}
    catch (std::exception &e) {std::cerr << e.what() << std::endl;}
    return 0;
}

/*
#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}*/
