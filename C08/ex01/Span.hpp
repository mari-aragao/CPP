/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:51:49 by maragao           #+#    #+#             */
/*   Updated: 2023/08/28 12:51:49 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

class Span
{
public:
    Span(int n);
    ~Span(void);
    Span &operator=(Span const &s);

    void    addNumber(int num);
    int     shortestSpan(void);
    int     longestSpan(void);

    class   FullContainer : public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return ("Exception: Container is full");
        }
    };

    class   FewElements : public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return ("Exception: None or only one element");
        }
    };
private:
    std::vector<int>    _container;
    unsigned int        _n;
    
    Span(void);
    Span(Span const &s);
};

#endif