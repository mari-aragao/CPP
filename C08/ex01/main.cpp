/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 23:17:31 by maragao           #+#    #+#             */
/*   Updated: 2023/08/27 23:17:31 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
    {
        std::cout << "*** Creating a Span with n = 1 ***" << std::endl; 
        Span    s(1);
        s.addNumber(7);
        try {s.addNumber(3);}
        catch(std::exception &e) {std::cerr << e.what() << std::endl;}
        try {std::cout << "Shortest span = " << s.shortestSpan() << std::endl;}
        catch(std::exception &e) {std::cerr << e.what() << std::endl;}
        try {std::cout << "Longest span = " << s.longestSpan() << std::endl;}
        catch(std::exception &e) {std::cerr << e.what() << std::endl;}
    }
    {
        std::cout << std::endl << "*** Creating a Span with n = 7 ***" << std::endl;
        Span    s(7);
        s.addNumber(20);
        s.addNumber(55);
        s.addNumber(13);
        s.addNumber(11);
        s.addNumber(7);
        s.addNumber(6);
        s.addNumber(19);
        try {s.addNumber(3);}
        catch(std::exception &e) {std::cerr << e.what() << std::endl;}
        try {std::cout << "Shortest span = " << s.shortestSpan() << std::endl;}
        catch(std::exception &e) {std::cerr << e.what() << std::endl;}
        try {std::cout << "Longest span = " << s.longestSpan() << std::endl;}
        catch(std::exception &e) {std::cerr << e.what() << std::endl;}
    }
    {
        std::cout << std::endl << "*** Creating a Span with n = 100000 ***" << std::endl;
        Span    s(100000);
        s.fillRandomContainer();
        try {s.addNumber(rand());}
        catch(std::exception &e) {std::cerr << e.what() << std::endl;}
        try {std::cout << "Shortest span = " << s.shortestSpan() << std::endl;}
        catch(std::exception &e) {std::cerr << e.what() << std::endl;}
        try {std::cout << "Longest span = " << s.longestSpan() << std::endl;}
        catch(std::exception &e) {std::cerr << e.what() << std::endl;}
    }
    return (0);
}