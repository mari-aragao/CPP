/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 02:55:19 by maragao           #+#    #+#             */
/*   Updated: 2023/08/29 02:55:19 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void    insertionSort(std::vector<int> &vct)
{
    int lenght = vct.size();
    int aux, j;
    for (int i = 1; i < lenght; i++)
    {
        aux = vct[i];
        j = i - 1;
        while (j >= 0 && vct[j] > aux)
        {
            vct[j + 1] = vct[j];
            j--;
        }
        vct[j + 1] = aux;
    }
}

void    mergeSort(std::vector<int> &vct, int division)
{
    int lenght = vct.size();
    if (lenght <= division)
    {
        insertionSort(vct);
        return ;
    }
    int middle = lenght / 2;
    std::vector<int> left;
    std::vector<int> right;
    
    std::vector<int>::iterator it = vct.begin();
    for(int i = 0; i < lenght; i++)
    {
        if (i < middle)
            left.push_back(*it);
        else
            right.push_back(*it);
        it++;
    }
    vct.clear();
    mergeSort(left, division);
    mergeSort(right, division);
    merge(left, right, vct);
}


void    merge(std::vector<int> &left, std::vector<int> &right, std::vector<int> &vct)
{
    std::vector<int>::iterator iLeft = left.begin();
    std::vector<int>::iterator iRight = right.begin();
    
    while (iLeft != left.end() && iRight != right.end())
    {
        if (*iLeft < *iRight)
        {
            vct.push_back(*iLeft);
            iLeft++;
        }
        else
        {
            vct.push_back(*iRight);
            iRight++;
        }
    }
    while (iLeft != left.end())
    {
        vct.push_back(*iLeft);
        iLeft++;
    }
    while (iRight != right.end())
    {
        vct.push_back(*iRight);
        iRight++;
    }
}

void printSequence(std::vector<int> vct)
{
    for (std::vector<int>::iterator iVct = vct.begin(); iVct != vct.end(); iVct++)
    {
        std::cout << *iVct << ' ';
    }
    std::cout << std::endl;
}


void    insertionSort(std::deque<int> &dqe)
{
    int lenght = dqe.size();
    int aux, j;
    for (int i = 1; i < lenght; i++)
    {
        aux = dqe[i];
        j = i - 1;
        while (j >= 0 && dqe[j] > aux)
        {
            dqe[j + 1] = dqe[j];
            j--;
        }
        dqe[j + 1] = aux;
    }
}

void    mergeSort(std::deque<int> &dqe, int division)
{
    int lenght = dqe.size();

    if (lenght <= division)
    {
        insertionSort(dqe);
        return ;
    }
    
    int middle = lenght / 2;
    std::deque<int> left;
    std::deque<int> right;
    
    std::deque<int>::iterator it = dqe.begin();
    for(int i = 0; i < lenght; i++)
    {
        if (i < middle)
            left.push_back(*it);
        else
            right.push_back(*it);
        it++;
    }
    dqe.clear();
    mergeSort(left, division);
    mergeSort(right, division);
    merge(left, right, dqe);
}

void    merge(std::deque<int> &left, std::deque<int> &right, std::deque<int> &dqe)
{
    std::deque<int>::iterator iLeft = left.begin();
    std::deque<int>::iterator iRight = right.begin();
    
    while (iLeft != left.end() && iRight != right.end())
    {
        if (*iLeft < *iRight)
        {
            dqe.push_back(*iLeft);
            iLeft++;
        }
        else
        {
            dqe.push_back(*iRight);
            iRight++;
        }
    }
    while (iLeft != left.end())
    {
        dqe.push_back(*iLeft);
        iLeft++;
    }
    while (iRight != right.end())
    {
        dqe.push_back(*iRight);
        iRight++;
    }
}

void    printSequence(std::deque<int> dqe)
{
    for (std::deque<int>::iterator idqe = dqe.begin(); idqe != dqe.end(); idqe++)
    {
        std::cout << *idqe << ' ';
    }
    std::cout << std::endl;
}
