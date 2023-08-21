/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 01:54:08 by maragao           #+#    #+#             */
/*   Updated: 2023/08/21 01:54:08 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
#include <iostream>
#include <string>

class ScalarConverter
{
public:
    ScalarConverter(void);
    ScalarConverter(std::string s);
    ScalarConverter(ScalarConverter const &sc);
    ~ScalarConverter(void);
    ScalarConverter &operator=(ScalarConverter const &sc);

    void    converter(std::string s);
    void    printValues(char c, int i, float f, double d,
                std::string sChar, std::string sInt, std::string sFloat, std::string sDouble);
    
    bool    isChar(void);
    bool    isInt(void);
    bool    isFloat(void);
    bool    isDouble(void);
    bool    isImpossibleChar(void);
    bool    isImpossibleInt(void);
    bool    isImpossibleFloat(void);
    bool    isImpossibleDouble(void);
    bool    isNan(void);
    bool    isNegInf(void);
    bool    isPosInf(void);

private:
    std::string _s;
    char        _c;
    int         _i;
    float       _f;
    double      _d;
};

#endif