/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:16:51 by maragao           #+#    #+#             */
/*   Updated: 2023/08/19 01:16:51 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// constructors and destructor

Fixed::Fixed(void) : _n(0) {}

Fixed::Fixed(Fixed const &fix)
{
    *this = fix;
}

Fixed::Fixed(int const n) : _n(n << _c) {}

Fixed::Fixed(float const n) : _n(roundf(n * (1 << _c))) {}

Fixed::~Fixed(void) {}

//overload operators

Fixed   &Fixed::operator=(Fixed const &fixed)
{
    _n = fixed.getRawBits();
    return (*this);
}

bool    Fixed::operator>(Fixed const &fixed) const
{
    return (_n > fixed.getRawBits());
}

bool    Fixed::operator<(Fixed const &fixed) const
{
    return (_n < fixed.getRawBits());
}

bool    Fixed::operator>=(Fixed const &fixed) const
{
    return (_n >= fixed.getRawBits());
}

bool    Fixed::operator<=(Fixed const &fixed) const
{
    return (_n <= fixed.getRawBits());
}

bool    Fixed::operator==(Fixed const &fixed) const
{
    return (_n == fixed.getRawBits());
}

bool    Fixed::operator!=(Fixed const &fixed) const
{
    return (!(_n == fixed.getRawBits()));
}

// overload operators + - * /
Fixed   Fixed::operator+(Fixed const &fixed)
{
    return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed   Fixed::operator-(Fixed const &fixed)
{
    return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed   Fixed::operator*(Fixed const &fixed)
{
    return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed   Fixed::operator/(Fixed const &fixed)
{
    return (Fixed(this->toFloat() / fixed.toFloat()));
}
    
//increment and pos-increment operators
Fixed   Fixed::operator++(int)
{
    Fixed aux = *this;
    ++(_n);
    return (aux);
}

Fixed   &Fixed::operator++(void)
{
    ++(_n);
    return (*this);
}

Fixed   Fixed::operator--(int)
{
    Fixed aux = *this;
    --(_n);
    return (aux);
}

Fixed   &Fixed::operator--(void)
{
    --(_n);
    return (*this);
}

// functions min and max
Fixed    &Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}
Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}
Fixed    &Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);    
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}
//member functions get and set
int     Fixed::getRawBits(void) const
{
    return _n;
}

void    Fixed::setRawBits(int const raw)
{
    _n = raw;
}

//converter member functions
float   Fixed::toFloat(void) const
{
    return ((float)_n / (float)(1 << _c));
}

int     Fixed::toInt(void) const
{
    return (_n >> _c);
}

//overload operator <<
std::ostream  &operator<<(std::ostream & o, Fixed const &fixed)
{
    o << fixed.toFloat();
    return o;
}