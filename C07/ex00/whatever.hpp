/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:23:44 by maragao           #+#    #+#             */
/*   Updated: 2023/08/24 12:23:44 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
class   Whatever
{
public:
    Whatever<T>(T const & t) {_t = t;}
    Whatever<T>(Whatever<T> const & w) {*this = w;}
    ~Whatever<T>(void) {}
    Whatever<T>  &operator=(Whatever<T> const & w)
    {
        _t = w._t;
        return *this;
    }
    
    T       getValue(void) const {return _t;}
    bool    operator>(Whatever<T> const &w) const {return (_t > w._t);}
    bool    operator<(Whatever<T> const &w) const {return (_t < w._t);}
    bool    operator>=(Whatever<T> const &w) const {return (_t >= w._t);}
    bool    operator<=(Whatever<T> const &w) const {return (_t <= w._t);}
    bool    operator==(Whatever<T> const &w) const {return (_t == w._t);}
    bool    operator!=(Whatever<T> const &w) const {return (_t != w._t);}

private:
    T _t;
};

template <typename T>
void    swap(T &a, T &b)
{
    T tmp(a);

    a = b;
    b = tmp;
};

template <typename T>
T const &   min(T const &a, T const &b)
{
    if (b <= a)
        return b;
    return a;
};

template <typename T>
T const &   max(T const &a, T const &b)
{
    if (b >= a)
        return b;
    return a;
};

#endif