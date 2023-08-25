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
#include <sstream>
#include <limits.h>

class ScalarConverter
{
public:
    ScalarConverter(std::string s);
    ScalarConverter(ScalarConverter const &sc);
    ~ScalarConverter(void);
    ScalarConverter &operator=(ScalarConverter const &sc);

    static void    converter(std::string s, char &_c, int &_i, float &_f, double &_d);
    static void    printValues(char c, int i, float f, double d,
                std::string sChar, std::string sInt, std::string sFloat, std::string sDouble);
    static void    checks(std::string s, char &_c, int &_i, float &_f, double &_d);
    static bool    isChar(std::string s);
    static bool    isInt(std::string s);
    static bool    isFloat(std::string s);
    static bool    isDouble(std::string s);
    static bool    isZero(std::string s);
    static bool    isNan(std::string s);
    static bool    isNegInf(std::string s);
    static bool    isPosInf(std::string s);
    static std::string isIntLimit(std::string s, int i);
    static std::string isFloatLimit(std::string s); 
    static std::string isDoubleLimit(std::string s); 

private:
    ScalarConverter(void);
};

#endif