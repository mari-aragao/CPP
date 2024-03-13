/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 02:53:59 by maragao           #+#    #+#             */
/*   Updated: 2023/08/29 02:53:59 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP
#include <iostream>
#include <string>
#include <stack>
#include <stdexcept>
#include <sstream>

class RPN
{
public:
    RPN(std::string arg);
    RPN &operator=(RPN const &rpn);
    ~RPN(void);

    int calculateRPN(std::string arg);

    class ExceptionError : public std::exception
    {
    public:
        virtual const char* what() const throw();
    };

private:
    std::stack<int> stk;

    RPN(void);
    RPN(RPN const &rpn);
};

#endif