#include "Contact.hpp"
#include <iostream>


Contact::Contact(void)
{
    return ;
}

Contact::~Contact(void)
{
    return ;
}

void    Contact::setFirstName(std::string firstName)
{
    this->firstName = firstName;
    return ;
}

void    Contact::setLastName(std::string lastName)
{
    this->lastName = lastName;
    return ;
}

void        Contact::setNickName(std::string nickName)
{
    this->nickName = nickName;
    return ;
}

void        Contact::setPhoneNumber(std::string phoneNumber)
{
    this->phoneNumber = phoneNumber;
    return ;
}

void        Contact::setDarkestSecret(std::string darkestSecret)
{
    this->darkestSecret = darkestSecret;
    return ;
}

std::string Contact::getFirstName(void)
{
    return Contact::firstName;
}

std::string Contact::getLastName(void)
{
    return (this->lastName);
}

std::string Contact::getNickName(void)
{
    return (this->nickName);
}

std::string Contact::getPhoneNumber(void)
{
    return (this->phoneNumber);
}

std::string Contact::getDarkestSecret(void)
{
    return (this->darkestSecret);
}