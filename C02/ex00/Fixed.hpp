/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:16:09 by maragao           #+#    #+#             */
/*   Updated: 2023/08/19 01:16:09 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include "iostream"

class Fixed
{
public:
    Fixed(void);
    Fixed(Fixed &fixed);
    ~Fixed(void);

    Fixed   &operator=(Fixed const &fixed);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);

private:
    int                 _n;
    static const int    _c = 8;
};

#endif