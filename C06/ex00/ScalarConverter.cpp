/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 02:04:02 by maragao           #+#    #+#             */
/*   Updated: 2023/08/21 02:04:02 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter(void) : _s(NULL), _c(0), _i(0), _f(0), _d(0) {}

ScalarConverter::ScalarConverter(std::string s) : _s(s), _c(0), _i(0), _f(0), _d(0) {} 

ScalarConverter::ScalarConverter(ScalarConverter const &sc)
{
    *this = sc;
}

ScalarConverter::~ScalarConverter(void) {}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &sc)
{
    _s = sc._s;
    _c = sc._c;
    _i = sc._i;
    _f = sc._f;
    _d = sc._d;
}

void    ScalarConverter::converter(std::string s) {}

void    ScalarConverter::printValues(char c, int i, float f, double d,
            std::string sChar, std::string sInt, std::string sFloat, std::string sDouble)
{
    std::cout << "char: ";
    if (!sChar.empty())
        std::cout << sChar << std::endl;
    else
        std::cout << c << std::endl;

    std::cout << "int: ";
    if (!sInt.empty())
        std::cout << sInt << std::endl;
    else
        std::cout << i << std::endl;

    std::cout << "float: ";
    if (!sFloat.empty())
        std::cout << sFloat << std::endl;
    else
        std::cout << f << std::endl;
    
    std::cout << "double: ";
    if (!sDouble.empty())
        std::cout << sDouble << std::endl;
    else
        std::cout << d << std::endl;
}

bool    ScalarConverter::isChar(void){}

bool    ScalarConverter::isInt(void) {}

bool    ScalarConverter::isFloat(void) {}

bool    ScalarConverter::isDouble(void) {}

bool    ScalarConverter::isImpossibleChar(void) {}

bool    ScalarConverter::isImpossibleInt(void) {}

bool    ScalarConverter::isImpossibleFloat(void) {}

bool    ScalarConverter::isImpossibleDouble(void) {}

bool    ScalarConverter::isNan(void)
{
    if (_s.compare("nan") || _s.compare("nanf"))
        return true;
    return false;
}

bool    ScalarConverter::isNegInf(void)
{
    if (_s.compare("-inf") || _s.compare("-inff"))
        return true;
    return false;
}

bool    ScalarConverter::isPosInf(void)
{
    if (_s.compare("+inf") || _s.compare("+inff"))
        return true;
    return false;
}