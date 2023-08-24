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

    std::cout << "*** Comparison between int, floats and char ***" << std::endl << std::endl;
    std::cout << "Original Values: int a = " << a << " | int b = " << b << std::endl;
    std::cout << "Max value: " << max<int>(a, b) << std::endl;
    std::cout << "Min value: " << min<int>(a, b) << std::endl;
    swap<int>(a, b);
    std::cout << "After swap: int a = " << a << " | int b = " << b << std::endl << std::endl;
    
    std::cout << "Original Values: float c = " << c << " | float d = " << d << std::endl;
    std::cout << "Max value: " << max<float>(c, d) << std::endl;
    std::cout << "Min value: " << min<float>(c, d) << std::endl;
    swap<float>(c, d);
    std::cout << "After swap: float c = " << c << " | float d = " << d << std::endl << std::endl;
    
    std::cout << "Original Values: char e = " << e << " | char f = " << f << std::endl;
    std::cout << "Max value: " << max<char>(e, f) << std::endl;
    std::cout << "Min value: " << min<char>(e, f) << std::endl;
    swap<char>(e, f);
    std::cout << "After swap: char e = " << e << " | char f = " << f << std::endl << std::endl;


    std::cout << "*** Comparison between classes of int, floats and char ***" << std::endl << std::endl;
    Whatever<int> wa(a);
    Whatever<int> wb(b);
    Whatever<float> wc(c);
    Whatever<float> wd(d);
    Whatever<char> we(e);
    Whatever<char> wf(f);

    std::cout << "Original Values: class of int wa = " << wa.getValue() << " | class of int wb = " << wb.getValue() << std::endl;
    std::cout << "Max value: " << (max< Whatever<int> >(wa, wb)).getValue() << std::endl;
    std::cout << "Min value: " << (min< Whatever<int> >(wa, wb)).getValue() << std::endl;
    swap<Whatever<int> >(wa, wb);
    std::cout << "After swap: class of int wa = " << wa.getValue() << " | class of int wb = " << wb.getValue() << std::endl << std::endl;
    
    std::cout << "Original Values: class of float wc = " << wc.getValue() << " | class of float wd = " << wd.getValue() << std::endl;
    std::cout << "Max value: " << (max< Whatever<float> >(wc, wd)).getValue() << std::endl;
    std::cout << "Min value: " << (min< Whatever<float> >(wc, wd)).getValue() << std::endl;
    swap<Whatever<float> >(wc, wd);
    std::cout << "After swap: class of float wc = " << wc.getValue() << " | class of float wd = " << wd.getValue() << std::endl << std::endl;
    
    std::cout << "Original Values: class of char we = " << we.getValue() << " | class of char wf = " << wf.getValue() << std::endl;
    std::cout << "Max value: " << (max< Whatever<char> >(we, wf)).getValue() << std::endl;
    std::cout << "Min value: " << (min< Whatever<char> >(we, wf)).getValue() << std::endl;
    swap<Whatever<char> >(we, wf);
    std::cout << "After swap: class of char we = " << we.getValue() << " | class of char wf = " << wf.getValue() << std::endl << std::endl;

    return 0;
}