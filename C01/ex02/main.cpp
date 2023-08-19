/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:10:47 by maragao           #+#    #+#             */
/*   Updated: 2023/08/19 01:10:47 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string     str = "HI THIS IS BRAIN";
    std::string*    stringPTR = &str;
    std::string&    stringREF = str;

    std::cout << "string adress: " << &str << std::endl;
    std::cout << "stringPTR adress: " << stringPTR << std::endl;
    std::cout << "stringREF adress: " << &stringREF << std::endl << std::endl;

    std::cout << "string value: " << str << std::endl;
    std::cout << "stringPTR value: " << *stringPTR << std::endl;
    std::cout << "stringREF value: " << stringREF << std::endl;

    return 0;
}