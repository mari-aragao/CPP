/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:23:38 by maragao           #+#    #+#             */
/*   Updated: 2023/08/24 12:23:38 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main(void)
{
    int a = 42;
    int b = 45;

    float c = 1.42f;
    float d = 1.45f;

    char e = 'e';
    char f = 'f';

    std::string g = "chaine1";
    std::string h = "chaine2";

    std::cout << "*** Comparison between int, floats and char ***" << std::endl << std::endl;
    std::cout << "Original Values: int a = " << a << " | int b = " << b << std::endl;
    std::cout << "Min value: " << ::min(a, b) << std::endl;
    std::cout << "Max value: " << ::max(a, b) << std::endl;
    ::swap(a, b);
    std::cout << "After swap: int a = " << a << " | int b = " << b << std::endl << std::endl;
    
    std::cout << "Original Values: float c = " << c << " | float d = " << d << std::endl;
    std::cout << "Min value: " << ::min(c, d) << std::endl;
    std::cout << "Max value: " << ::max(c, d) << std::endl;
    ::swap(c, d);
    std::cout << "After swap: float c = " << c << " | float d = " << d << std::endl << std::endl;
    
    std::cout << "Original Values: char e = " << e << " | char f = " << f << std::endl;
    std::cout << "Min value: " << ::min(e, f) << std::endl;
    std::cout << "Max value: " << ::max(e, f) << std::endl;
    ::swap(e, f);
    std::cout << "After swap: char e = " << e << " | char f = " << f << std::endl << std::endl;

    std::cout << "Original Values: std::string g = " << g << " | std::string h = " << h << std::endl;
    std::cout << "Min value: " << ::min(g, h) << std::endl;
    std::cout << "Max value: " << ::max(g, h) << std::endl;
    ::swap(g, h);
    std::cout << "After swap: std::string g = " << g << " | std::string h = " << h << std::endl << std::endl;

    std::cout << "*** Comparison between classes of int, floats and char ***" << std::endl << std::endl;
    Whatever<int> wa(a);
    Whatever<int> wb(b);
    Whatever<float> wc(c);
    Whatever<float> wd(d);
    Whatever<char> we(e);
    Whatever<char> wf(f);
    Whatever<std::string> wg(g);
    Whatever<std::string> wh(h);

    std::cout << "Original Values: class of int wa = " << wa.getValue() << " | class of int wb = " << wb.getValue() << std::endl;
    std::cout << "Min value: " << (::min<Whatever <int> >(wa, wb)).getValue() << std::endl;
    std::cout << "Max value: " << (::max<Whatever <int> >(wa, wb)).getValue() << std::endl;
    ::swap<Whatever <int> >(wa, wb);
    std::cout << "After swap: class of int wa = " << wa.getValue() << " | class of int wb = " << wb.getValue() << std::endl << std::endl;
    
    std::cout << "Original Values: class of float wc = " << wc.getValue() << " | class of float wd = " << wd.getValue() << std::endl;
    std::cout << "Min value: " << (::min<Whatever <float> >(wc, wd)).getValue() << std::endl;
    std::cout << "Max value: " << (::max<Whatever <float> >(wc, wd)).getValue() << std::endl;
    ::swap<Whatever <float> >(wc, wd);
    std::cout << "After swap: class of float wc = " << wc.getValue() << " | class of float wd = " << wd.getValue() << std::endl << std::endl;
    
    std::cout << "Original Values: class of char we = " << we.getValue() << " | class of char wf = " << wf.getValue() << std::endl;
    std::cout << "Min value: " << (::min<Whatever <char> >(we, wf)).getValue() << std::endl;
    std::cout << "Max value: " << (::max<Whatever <char> >(we, wf)).getValue() << std::endl;
    ::swap<Whatever <char> >(we, wf);
    std::cout << "After swap: class of char we = " << we.getValue() << " | class of char wf = " << wf.getValue() << std::endl << std::endl;

    std::cout << "Original Values: class of std::string wg = " << wg.getValue() << " | class of std::string wh = " << wh.getValue() << std::endl;
    std::cout << "Min value: " << (::min<Whatever <std::string> >(wg, wh)).getValue() << std::endl;
    std::cout << "Max value: " << (::max<Whatever <std::string> >(wg, wh)).getValue() << std::endl;
    ::swap<Whatever< std::string> >(wg, wh);
    std::cout << "After swap: class of std::string wg = " << wg.getValue() << " | class of std::string wh = " << wh.getValue() << std::endl << std::endl;

    return 0;
}