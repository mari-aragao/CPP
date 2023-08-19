/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:04:59 by maragao           #+#    #+#             */
/*   Updated: 2023/08/19 01:04:59 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

int main(void)
{
    PhoneBook phonebook;
    std::string command;
    int i;
   
    std::cout << "*** MY PHONEBOOK *** " << std::endl;  
    while (command != "EXIT")
    {
        std::cout << "Select a option (ADD, SEARCH or EXIT): ";
        std::getline(std::cin >> std::ws, command);
        i = -1;
        while (++i < (int)command.size())
            command.at(i) = toupper(command.at(i));
        if (command == "ADD")
            phonebook.add();
        else if (command == "SEARCH")
            phonebook.search();
        else if (command == "EXIT")
            phonebook.exit();
        else
            std::cout << "Invalid option" << std::endl;
    }
    return (0);
}