/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:04:38 by maragao           #+#    #+#             */
/*   Updated: 2023/08/19 01:04:38 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <string>

class Contact
{
public:
    Contact(void);
    ~Contact(void);

    void        setFirstName(std::string firstName);
    void        setLastName(std::string LastName);
    void        setNickName(std::string nickName);
    void        setPhoneNumber(std::string phoneNumber);
    void        setDarkestSecret(std::string darkestSecret);

    std::string getFirstName(void);
    std::string getLastName(void);
    std::string getNickName(void);
    std::string getPhoneNumber(void);
    std::string getDarkestSecret(void);
    
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
};

#endif