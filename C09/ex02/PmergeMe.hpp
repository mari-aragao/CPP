/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 02:55:33 by maragao           #+#    #+#             */
/*   Updated: 2023/08/29 02:55:33 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <string>
#include <sstream>
#include <stdexcept>
#include <vector>
#include <deque>
#include <time.h>

class InvalidArgument : public std::exception
{
public:
    virtual const char *what() const throw();

};

void    merge(std::vector<int> &left, std::vector<int> &right, std::vector<int> &vct);
void    merge(std::deque<int> &left, std::deque<int> &right, std::deque<int> &lst);
void    mergeSort(std::vector<int> &vct, int division);
void    mergeSort(std::deque<int> &lst, int division);
void    printSequence(std::vector<int> vct);
void    printSequence(std::deque<int> lst);

#endif