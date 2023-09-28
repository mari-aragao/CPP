/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 02:53:53 by maragao           #+#    #+#             */
/*   Updated: 2023/08/29 02:53:53 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(std::string arg)
{
    for (size_t i = 0; i < arg.size(); i++)
    {
        if (arg[i] != ' ' && arg[i] != '+' && arg[i] != '-' &&
                arg[i] != '*' && arg[i] != '/' &&
                !isdigit(arg[i]))
            throw ExceptionError();
        else if (i < arg.size() && isdigit(arg[i]) && isdigit(arg[i + 1]))
            throw ExceptionError();
    }
    std::cout << calculateRPN(arg) << std::endl;
}

RPN &RPN::operator=(RPN const &rpn) {(void)rpn; return *this;}

RPN::~RPN(void){}

int RPN::calculateRPN(std::string arg)
{
    int num;

    for(size_t i = 0; i < arg.size(); i++)
    {
        if (arg[i] == ' ')
            continue;
        else if (arg[i] == '+' || arg[i] == '-' || arg[i] == '*' || arg[i] == '/')
        {
            if (stk.size() < 2)
                throw ExceptionError();
            int one = stk.top();
            stk.pop();
            int two = stk.top();
            stk.pop();
            if (arg[i] == '+') stk.push(two + one);
            else if (arg[i] == '-') stk.push(two - one);
            else if (arg[i] == '*') stk.push(two * one);
            else if (arg[i] == '/') stk.push(two / one);
        }
        else
        {
            std::string s(1, arg[i]);
            std::istringstream(s) >> num;
            stk.push(num);
        }
    }
    if (stk.size() != 1)
        throw ExceptionError();
    return (stk.top());
}

RPN::RPN(void) {}

RPN::RPN(RPN const &rpn) {*this = rpn;}