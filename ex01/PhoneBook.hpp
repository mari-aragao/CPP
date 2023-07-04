#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook{
public:
    PhoneBook(void);
    ~PhoneBook(void);

    void    add(int n);
    void    search(void);
    void    exit(void);

    void    printList(Contact contact, int i);

private:

    Contact contact[8];
    int num;
    
};
#endif