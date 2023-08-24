/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 01:24:10 by maragao           #+#    #+#             */
/*   Updated: 2023/08/24 01:24:10 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base    *createAClass(void)
{
    return (new A);
}

Base    *createBClass(void)
{
    return (new B);
}

Base    *createCClass(void)
{
    return (new C);
}

Base    *generate(void)
{
    int random = rand() % 3;
    Base *(*createClass[3]) (void) = {&createAClass, &createBClass, &createCClass};
    return (*createClass[random])();
}

void    identify(Base *p)
{
    if (dynamic_cast<A *>(p) != NULL)
        std::cout << "Object ptr is from class A" << std::endl;
    if (dynamic_cast<B *>(p) != NULL)
        std::cout << "Object ptr is from class B" << std::endl;
    if (dynamic_cast<C *>(p) != NULL)
        std::cout << "Object ptr is from class C" << std::endl;
}

void    identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "Object reference is from class A" << std::endl;
    }
    catch (std::exception &e){}
    try
    {
        B &b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "Object reference is from class B" << std::endl;
    }
    catch (std::exception &e){}
    try
    {
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "Object reference is from class C" << std::endl;
    }
    catch (std::exception &e){}
}

int main(void)
{
    Base *p1 = generate();
    Base *p2 = generate();
    Base *p3 = generate();
    Base *p4 = generate();
    Base *p5 = generate();
    Base *p6 = generate();
    Base *p7 = generate();
    Base *p8 = generate();
    Base *p9 = generate();
    Base *p10 = generate();
    identify(p1);
    identify(p2);
    identify(p3);
    identify(p4);
    identify(p5);
    identify(p6);
    identify(p7);
    identify(p8);
    identify(p9);
    identify(p10);
    
    Base &r1 = *p1;
    Base &r2 = *p2;
    Base &r3 = *p3;
    Base &r4 = *p4;
    Base &r5 = *p5;
    Base &r6 = *p6;
    Base &r7 = *p7;
    Base &r8 = *p8;
    Base &r9 = *p9;
    Base &r10 = *p10;
    identify(r1);
    identify(r2);
    identify(r3);
    identify(r4);
    identify(r5);
    identify(r6);
    identify(r7);
    identify(r8);
    identify(r9);
    identify(r10);
    
    return 0;
}