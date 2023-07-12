#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iomanip>
# include <sstream>
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