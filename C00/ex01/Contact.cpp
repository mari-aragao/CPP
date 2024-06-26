/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:03:43 by maragao           #+#    #+#             */
/*   Updated: 2023/08/19 01:03:43 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void) {}

Contact::~Contact(void) {}

void    Contact::setFirstName(std::string firstName)
{
    this->firstName = firstName;
}

void    Contact::setLastName(std::string lastName)
{
    this->lastName = lastName;
}

void        Contact::setNickName(std::string nickName)
{
    this->nickName = nickName;
}

void        Contact::setPhoneNumber(std::string phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void        Contact::setDarkestSecret(std::string darkestSecret)
{
    this->darkestSecret = darkestSecret;
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