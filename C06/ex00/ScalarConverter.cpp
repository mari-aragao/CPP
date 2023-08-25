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

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::ScalarConverter(std::string s)
{
    char    _c = '\0';
    int     _i = 0;
    float   _f = 0.0f;
    double  _d = 0.0;
    converter(s, _c, _i, _f, _d);
    checks(s, _c, _i, _f, _d);
} 

ScalarConverter::ScalarConverter(ScalarConverter const &sc)
{
    *this = sc;
}

ScalarConverter::~ScalarConverter(void) {}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &sc)
{
    (void)sc;
    return *this;
}


void    ScalarConverter::converter(std::string s, char &_c, int &_i, float &_f, double &_d)
{
    if (isChar(s))
    {
        _c = static_cast<char>(s.at(0));
        _i = static_cast<int>(_c);
        _f = static_cast<float>(_c);
        _d = static_cast<double>(_c);
    }
    if (isInt(s))
    {
        std::istringstream(s) >> _i;;
        _c = static_cast<char>(_i);
        _f = static_cast<float>(_i);
        _d = static_cast<double>(_i);
    }
    if (isFloat(s))
    {
        std::istringstream(s) >> _f;
        _c = static_cast<char>(_f);
        _i = static_cast<int>(_f);
        _d = static_cast<double>(_f);
    }
    if (isDouble(s))
    {
        std::istringstream(s) >> _d;
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


void    ScalarConverter::checks(std::string s, char &_c, int &_i, float &_f, double &_d)
{
    std::string null;
    std::stringstream ssF;
    std::stringstream ssD;
    
    ssF << _f;
    if (_f == _i)
        ssF << (".0");
    ssF << ("f");
    ssD << _d;
    if (_f == _i)
        ssD << (".0");
    if (isNan(s))
        printValues(_c, _i, _f, _d, "impossible", "impossible", "nanf", "nan");
    else if (isPosInf(s))
        printValues(_c, _i, _f, _d, "impossible", "impossible", "+inff", "+inf");
    else if (isNegInf(s))
        printValues(_c, _i, _f, _d, "impossible", "impossible", "-inff", "-inf");
    else if (isZero(s))
        printValues(_c, _i, _f, _d, "Non displayable", isIntLimit(s, _i), isFloatLimit(ssF.str()), isDoubleLimit(ssD.str()));
    else if (isInt(s) || isFloat(s) || isDouble(s))
        printValues(_c, _i, _f, _d, "*", isIntLimit(s, _i), isFloatLimit(ssF.str()), isDoubleLimit(ssD.str()));
    else if (isChar(s) || isInt(s) || isFloat(s) || isDouble(s))
        printValues(_c, _i, _f, _d, null, isIntLimit(s, _i), isFloatLimit(ssF.str()), isDoubleLimit(ssD.str()));
    else
        printValues(_c, _i, _f, _d, "impossible", "impossible", "impossible", "impossible");
}

std::string ScalarConverter::isIntLimit(std::string s, int i)
{
    if (i == INT_MIN)
    {
        if (s.at(0) == '-')
            return ("INT_MIN");
        else
            return ("INT_MAX");
    }
    std::string null;
    return (null);
}

std::string ScalarConverter::isFloatLimit(std::string s)
{
    if (s == "inff")
        return ("+inff");
    return (s);
}

std::string ScalarConverter::isDoubleLimit(std::string s)
{
    if (s == "-1.79769e+308")
        return ("-inf");
    else if (s == "1.79769e+308")
        return ("+inf");
    return (s);
}

bool    ScalarConverter::isChar(std::string s)
{
    if (s.size() == 1 && isalpha(s.at(0)) && isprint(s.at(0)))
        return true;
    return false;
}

bool    ScalarConverter::isInt(std::string s)
{
    for (size_t i = 0; i < s.size(); i++)
    {
        if (i == 0 && (s.at(i) == '-' || s.at(i) == '+'))
            continue ;
        else if (!isdigit(s.at(i)))
            return false ;
    }
    return true;
}

bool    ScalarConverter::isFloat(std::string s)
{
    int countPoints = 0;

    if (s.at(s.size() - 1) != 'f')
        return false;
    for (size_t i = 0; i < s.size() - 1; i++)
    {
        if (i == 0 && (s.at(i) == '-' || s.at(i) == '+'))
            continue ;
        else if (s.at(i) == '.')
        {
            if (i > 0 && (!isdigit(s.at(i - 1)) || !isdigit(s.at(i + 1))))
                return false;
            countPoints++;
            if (countPoints > 1)
                return false;
        }
        else if (!isdigit(s.at(i)))
            return false ;
    }
    return true;
}

bool    ScalarConverter::isDouble(std::string s)
{
    int countPoints = 0;
    
    for (size_t i = 0; i < s.size(); i++)
    {
        if (i == 0 && (s.at(i) == '-' || s.at(i) == '+'))
            continue ;
        else if (s.at(i) == '.')
        {
            if (i > 0 && (i + 1 < s.size()) && (!isdigit(s.at(i - 1)) || !isdigit(s.at(i + 1))))
                return false;
            countPoints++;
            if (countPoints > 1)
                return false;
        }
        else if (!isdigit(s.at(i)))
            return false ;
    }
    return true;
}

bool    ScalarConverter::isZero(std::string s)
{
    if (!s.compare("0") || !s.compare("0.0f") || !s.compare("0.0"))
        return true;
    return false;
}

bool    ScalarConverter::isNan(std::string s)
{
    if (!s.compare("nan") || !s.compare("nanf"))
        return true;
    return false;
}

bool    ScalarConverter::isNegInf(std::string s)
{
    if (!s.compare("-inf") || !s.compare("-inff"))
        return true;
    return false;
}

bool    ScalarConverter::isPosInf(std::string s)
{
    if (!s.compare("+inf") || !s.compare("+inff"))
        return true;
    return false;
}