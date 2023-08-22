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

ScalarConverter::ScalarConverter(void) : _c('\0'), _i(0), _f(0.0f), _d(0.0) {}

ScalarConverter::ScalarConverter(std::string s) : _s(s), _c('\0'), _i(0), _f(0.0f), _d(0.0) {} 

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

void    ScalarConverter::converter(std::string s)
{
    if (isChar())
    {
        _c = (_s.at(0));
        _i = static_cast<int>(_c);
        _f = static_cast<float>(_c);
        _d = static_cast<double>(_c);
    }
    else if (isInt())
    {
        _i = std::stoi(_s, NULL, 10);
        _c = static_cast<char>(_i);
        _f = static_cast<float>(_i);
        _d = static_cast<double>(_i);
    }
    else if (isFloat())
    {
        _f = std::stof(_s, NULL);
        _c = static_cast<char>(_f);
        _i = static_cast<int>(_f);
        _d = static_cast<double>(_f);
    }
    else if (isDouble())
    {
        _d = std::stod(_s, NULL);
        _c = static_cast<char>(_d);
        _i = static_cast<int>(_d);
        _f = static_cast<float>(_d);
    }
}

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

bool    ScalarConverter::isChar(void)
{
    if (_s.size() == 1 && isalpha(_s.at(0)) && isprint(_s.at(0)))
        return true;
    return false;
}

bool    ScalarConverter::isInt(void)
{
    for (int i = 0; i < _s.size(); i++)
    {
        if (i == 0 && (_s.at(i) == '-' || _s.at(i) == '+'))
            continue ;
        else if (!isdigit(_s.at(i)))
            return false ;
    }
    return true;
}

bool    ScalarConverter::isFloat(void)
{
    int countPoints = 0;

    if (_s.at(_s.size()) != 'f')
        return false;
    for (int i = 0; i < _s.size() - 1; i++)
    {
        if (i == 0 && (_s.at(i) == '-' || _s.at(i) == '+'))
            continue ;
        else if (_s.at(i) == '.')
        {
            if (i > 0 && (!isdigit(_s.at(i - 1)) || !isdigit(_s.at(i + 1))))
                return false;
            countPoints++;
            if (countPoints > 1)
                return false;
        }
        else if (!isdigit(_s.at(i)))
            return false ;
    }
    return true;
}

bool    ScalarConverter::isDouble(void)
{
    int countPoints = 0;
    
    for (int i = 0; i < _s.size(); i++)
    {
        if (i == 0 && (_s.at(i) == '-' || _s.at(i) == '+'))
            continue ;
        else if (_s.at(i) == '.')
        {
            if (i > 0 && (i + 1 < _s.size()) && (!isdigit(_s.at(i - 1)) || !isdigit(_s.at(i + 1))))
                return false;
            countPoints++;
            if (countPoints > 1)
                return false;
        }
        else if (!isdigit(_s.at(i)))
            return false ;
    }
    return true;
}

bool    ScalarConverter::isImpossibleChar(void)
{
    if (isNan() || isPosInf() || isNegInf())
        return true;
    return false;
}

bool    ScalarConverter::isImpossibleInt(void)
{
    if (isNan())
        return true;
    return false;
}

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