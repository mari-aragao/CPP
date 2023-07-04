#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook phonebook;
    std::string command;
    int num;
    int i;
   
    num = 0;
    std::cout << "*** My Awesome PhoneBook *** " << std::endl << std::endl;  
    while (command != "EXIT")
    {
        std::cout << "Select a option ( ADD, SEARCH or EXIT) : ";
        std::getline(std::cin >> std::ws, command);
        i = -1;
        while (++i < (int)command.size())
            command.at(i) = toupper(command.at(i));
        
        if (command == "ADD")
        {
            if (num == 9)
                num = 8;
            phonebook.add(num);
            num++;
        }
        else if (command == "SEARCH")
            phonebook.search();
        else if (command == "EXIT")
            phonebook.exit();
        else
            std::cout << "Invalid option" << std::endl;
    }
    return (0);
}