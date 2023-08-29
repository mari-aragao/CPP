/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:29:34 by maragao           #+#    #+#             */
/*   Updated: 2023/08/28 17:29:34 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <algorithm>
#include <stack>
#include <deque>

template <typename T, class Container = std::deque<T> >

class MutantStack : public std::stack<T, Container>
{
public:
    MutantStack(void) {};
    MutantStack(MutantStack const &ms) {*this = ms;};
    ~MutantStack() {};
    MutantStack &operator=(MutantStack const &ms)
    {
        std::stack<T, Container>::operator=(ms);
        return *this;
    };

    typedef typename Container::iterator iterator;
    typedef typename Container::reverse_iterator reverse_iterator;
    
    iterator    begin() {return std::stack<T, Container>::c.begin();};
    iterator    end() {return std::stack<T, Container>::c.end();};
    reverse_iterator    rbegin() {return std::stack<T, Container>::c.rbegin();};
    reverse_iterator    rend() {return std::stack<T, Container>::c.rend();};
};

#endif