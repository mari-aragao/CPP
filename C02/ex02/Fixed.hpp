/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:16:55 by maragao           #+#    #+#             */
/*   Updated: 2023/08/19 01:16:55 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include "iostream"
# include <cmath>

class Fixed
{
public:
    Fixed(void);
    Fixed(int const n);
    Fixed(float const f);
    Fixed(Fixed const &fix);
    ~Fixed(void);

    Fixed   &operator=(Fixed const &fixed);

    bool    operator>(Fixed const &fixed) const;
    bool    operator<(Fixed const &fixed) const;
    bool    operator>=(Fixed const &fixed) const;
    bool    operator<=(Fixed const &fixed) const;
    bool    operator==(Fixed const &fixed) const;
    bool    operator!=(Fixed const &fixed) const;
    
    Fixed   operator+(Fixed const &fixed);
    Fixed   operator-(Fixed const &fixed);
    Fixed   operator*(Fixed const &fixed);
    Fixed   operator/(Fixed const &fixed);
    Fixed   operator++(int);
    Fixed   &operator++(void);
    Fixed   operator--(int);
    Fixed   &operator--(void);

    static Fixed    &min(Fixed &a, Fixed &b);
    static const Fixed    &min(Fixed const &a, Fixed const &b);
    static Fixed    &max(Fixed &a, Fixed &b);
    static const Fixed    &max(Fixed const &a, Fixed const &b);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

private:
    int                 _n;
    static const int    _c = 8;
};

std::ostream  &operator<<(std::ostream & o, Fixed const &fixed);
#endif