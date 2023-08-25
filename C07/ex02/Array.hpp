/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 22:09:13 by maragao           #+#    #+#             */
/*   Updated: 2023/08/24 22:09:13 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <stdexcept>
#include <iostream>

template <typename T>

class   Array
{
public:
    Array(void) : _t(NULL), _n(0) {}
    
    Array<T>(unsigned int n) : _n(n) {_t = new T[n]();}
    
    Array<T>(Array<T> const & a)
    {
        _n = a.size();
        _t = new T[_n]();
        for (unsigned int i = 0; i < _n; i++)
            _t[i] = a._t[i];
    }
    ~Array<T>(void) {if (_t) delete [] _t;}
    
    Array<T> const  &operator=(Array<T> const & a)
    {
        if (_n > 0)
            delete [] _t;
        _n = a.size();
        _t = new T[_n]();
        for (unsigned int i = 0; i < _n; i++)
            _t[i] = a._t[i];
        return *this;
    };
    
    T   &operator[](unsigned int idx)
    {
        if (idx >= _n)
            throw InvalidMemory();
        return (_t[idx]);
    }    
    
    T const &operator[](unsigned int idx) const
    {
        if (idx >= _n)
            throw InvalidMemory();
        return (_t[idx]);
    }

    unsigned int    size(void) const {return _n;}

    class   InvalidMemory : public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return ("Exception: Invalid memory");
        }
    };

private:
    T               *_t;
    unsigned int    _n;
};

#endif