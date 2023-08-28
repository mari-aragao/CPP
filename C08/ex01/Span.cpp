/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:06:51 by maragao           #+#    #+#             */
/*   Updated: 2023/08/28 13:06:51 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) {}

Span::Span(Span const &s)
{
    _n = s._n;
    _container = s._container;
}

Span::Span(int n) : _n(n)
{
    _container.reserve(n);
}

Span::~Span(void) {}

Span &Span::operator=(Span const &s)
{
    _n = s._n;
    _container = s._container;
    return *this;
}

void    Span::addNumber(int num)
{
    if (_container.size() == _container.capacity())
        throw FullContainer();
    _container.push_back(num);
}

int     Span::shortestSpan(void)
{
    if (_container.size() == 0 || _container.size() == 1)
        throw FewElements();
    std::sort(_container.begin(), _container.end());
    int shortest = _container.at(1) - _container.at(0);
    for(unsigned int i = 1; i < _n; i++)
    {
        if (shortest > (_container.at(i) - _container.at(i - 1)))
            shortest = _container.at(i) - _container.at(i - 1);
    }
    return (shortest);
}

int     Span::longestSpan(void)
{
    if (_container.size() == 0 || _container.size() == 1)
        throw FewElements();
    std::sort(_container.begin(), _container.end());
    return (_container.back() - _container.front());
}