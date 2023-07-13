#include "Contact.hpp"
#include "PhoneBook.hpp"

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