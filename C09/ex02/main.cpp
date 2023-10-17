/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 02:54:54 by maragao           #+#    #+#             */
/*   Updated: 2023/08/29 02:54:54 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void    fillContainers(std::vector<int> &vct, int size, char **argv)
{
    if (size > 3001)
        throw InvalidArgument();
    for (int i = 1; i < size; i++)
    {
        std::string arg = argv[i];
        for (size_t j = 0; j < arg.size(); j++)
        {
            if (!isdigit(arg[j]))
                throw InvalidArgument();
        }
        int num;
        std::istringstream(arg) >> num;
        vct.push_back(num);
    }
}

void    fillContainers(std::deque<int> &deq, int size, char **argv)
{
    if (size > 3001)
        throw InvalidArgument();
    for (int i = 1; i < size; i++)
    {
        std::string arg = argv[i];
        for (size_t j = 0; j < arg.size(); j++)
        {
            if (!isdigit(arg[j]))
                throw InvalidArgument();
        }
        int num;
        std::istringstream(arg) >> num;
        deq.push_back(num);
    }
}

int calculateDivision(int lenght)
{
    if (lenght <= 3000 && lenght >= 1000)
        return lenght / 60;
    else if (lenght < 1000 && lenght >= 100)
        return lenght / 30;
    else if (lenght < 100 && lenght >= 50)
        return lenght / 10;
    else if (lenght < 50 && lenght >= 10)
        return 5;
    return lenght;
}

int main(int argc, char **argv)
{
    std::vector<int> lst;
    std::vector<int> vct;
    std::deque<int> deq;
    clock_t t1, t2;

    if (argc == 1)
    {std::cerr << "Error: Invalid Argument." << std::endl; return -1;}
    
    try {fillContainers(lst, argc, argv);}
    catch(std::exception &e) {std::cerr << e.what() << std::endl; return -1;}
    
    std::cout << "before: ";
    printSequence(lst);

    t1 = clock();
    fillContainers(vct, argc, argv);
    int lenght = vct.size();
    int division = calculateDivision(lenght);
    mergeSort(vct, division);
    t1 = clock() - t1;
    
    std::cout << "after: ";
    printSequence(vct);

    t2 = clock();
    fillContainers(deq, argc, argv);
    lenght = deq.size();
    division = calculateDivision(lenght);
    mergeSort(deq, division);
    t2 = clock() - t2;
    
    std::cout << "Time to process a range of " << lenght << " elements with std::vector : " << t1 << " us" << std::endl;
    std::cout << "Time to process a range of " << lenght << " elements with std::deque : " << t2 << " us" << std::endl;    
    
    return (0);
}