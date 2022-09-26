#ifndef PHONE_BOOK
# define PHONE_BOOK

# include "Contact.hpp"
# include <sstream>

class PhoneBook
{
public:
    PhoneBook();
    ~PhoneBook();
    void    addContact();
    void    searchContact();
private:
    static const int MaxContacts = 8;
    int newContactIndex;
    int ContactAmount;
    Contact *contacts[MaxContacts];
};

#endif