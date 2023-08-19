/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:05:59 by maragao           #+#    #+#             */
/*   Updated: 2023/08/19 01:05:59 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iomanip>
# include <string>

class PhoneBook{
public:
    PhoneBook(void);
    ~PhoneBook(void);

    void    add(void);
    void    search(void);
    void    exit(void);

    void    printList(Contact *contact);
    std::string  strndup(std::string str, int size);
    
private:
    Contact contact[8];
    int num;
};
#endif