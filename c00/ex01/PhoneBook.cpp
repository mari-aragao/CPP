#include <iostream>
#include <sstream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    this->num = 0;
    return ;
}

PhoneBook::~PhoneBook(void)
{
    return ;
}

void    PhoneBook::add(void)
{
    std::string str;
    int i;

    if (this->num == 8)
        this->num = 7;
    str = "";
    std::cin.clear();
    while (str == "")
    {
        std::cout << "First Name: ";
        std::getline(std::cin, str);
        if (str == "")
        {
            std::cout << "Invalid First Name" << std::endl;
            std::cin.clear();
        }
    }
    this->contact[this->num].setFirstName(str);

    str = "";
    std::cin.clear();
    while (str == "")
    {
        std::cout << "Last Name: ";
        std::getline(std::cin, str);     
        if (str == "")
        {
            std::cout << "Invalid Last Name" << std::endl;
            std::cin.clear();
        }
    }
    this->contact[this->num].setLastName(str);

    str = "";
    std::cin.clear();
    while (str == "")
    {   
        std::cout << "Nickname: ";
        std::getline(std::cin, str);     
        if (str == "")
        {
            std::cout << "Invalid Nickname" << std::endl;
            std::cin.clear();
        }        
    }
    this->contact[this->num].setNickName(str);
    
    str = "";
    std::cin.clear();
    
    while (str == "")
    {   
        i = 0;
        std::cout << "PhoneNumber: ";
        std::getline(std::cin, str);
        if (str == "")
        {
            std::cout << "Invalid Phone number" << std::endl;
            std::cin.clear();
            continue ;
        }        
        while (i < (int)str.size())
        {
            if (!isdigit(str.at(i)))
            {
                str = "";
                std::cin.clear();
                break ;
            }
            i++;
        }
    }
    this->contact[this->num].setPhoneNumber(str);

    str = "";
    std::cin.clear();
    while (str == "")
    {   
        std::cout << "Darkest Secret: ";
        std::getline(std::cin, str);     
        if (str == "")
        {
            std::cout << "Invalid Darkest Secret" << std::endl;
            std::cin.clear();
        }        
    }    
    this->contact[this->num].setDarkestSecret(str);
    
    this->num++;
    return ;
}

void    PhoneBook::search(void)
{
    std::stringstream ss;
    std::string index;
    int i;

    if (this->num == 0)
    {
        std::cout << "You haven't saved any contacts yet" << std::endl;
        return ;
    }
    
    std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
    this->printList(contact);
    
    std::cin.clear();
    std::cout << "Insert the contact index to see: ";
    std::cin >> index;
    i = 0;
    while (i < (int)index.size())
    {
        if (!isdigit(index.at(i)))
        {
            std::cout << "Invalid index" << std::endl;
            return ;
        }
        i++;
    }
    ss << index;
    ss >> i;
    if (i < 0 || i > this->num - 1)
    {
        std::cout << "Invalid index" << std::endl;
        return ;
    }

    std::cout << "First Name: " << this->contact[i].getFirstName() << std::endl;
    std::cout << "Last Name: " << this->contact[i].getLastName() << std::endl;
    std::cout << "Nick Name: " << this->contact[i].getNickName() << std::endl;
    std::cout << "Phone Number: " << this->contact[i].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << this->contact[i].getDarkestSecret() << std::endl;
}

void    PhoneBook::exit(void)
{
    std::cout << "Exit" << std::endl;
}

void    PhoneBook::printList(Contact *contact)
{
    int i;
    i = 0;

    while (i < this->num)
    {
        
        std::cout << std::setw(10) << i << "|" 
                    << std::setw(10) << strndup(contact[i].getFirstName(), (int)contact[i].getFirstName().size()) << "|" 
                    << std::setw(10) << strndup(contact[i].getLastName(), (int)contact[i].getLastName().size()) << "|" 
                    << std::setw(10) << strndup(contact[i].getNickName(), (int)contact[i].getNickName().size()) << std::endl; 
        i++;
    }
    if (this->num == 9)
    {
        std::cout << std::setw(10) << i << "|" 
                    << std::setw(10) << strndup(contact[i].getFirstName(), (int)contact[i].getFirstName().size()) << "|" 
                    << std::setw(10) << strndup(contact[i].getLastName(), (int)contact[i].getLastName().size()) << "|" 
                    << std::setw(10) << strndup(contact[i].getNickName(), (int)contact[i].getNickName().size()) << std::endl; 
        }
    return ;
}

std::string PhoneBook::strndup(std::string str, int size)
{
    std::string    newStr;
    int i;

    if (size <= 10)
        return (str);
    while (i < 9)
    {  
        newStr += str.at(i);
        i++;
    }
    newStr += ".";
    return (newStr);  
}