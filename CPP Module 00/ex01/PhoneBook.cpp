#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->newContactIndex = 0;
    this->ContactAmount = 0;
    for (int i = 0; i < MaxContacts; i++)
        this->contacts[i] = new Contact;
}

PhoneBook::~PhoneBook()
{
    for (int i = 0; i < MaxContacts; i++)
        delete this->contacts[i];
}

void PhoneBook::addContact()
{
    if (this->newContactIndex >= this->MaxContacts)
        this->newContactIndex = 0;

    std::cout << std::endl;
    Contact *tmp = new Contact;
    if (tmp->setData(this->newContactIndex + 1) == 0)
    {
        delete this->contacts[this->newContactIndex];
        this->contacts[this->newContactIndex] = tmp;
        std::cout << std::endl << "New contact add" << std::endl;

        this->newContactIndex++;
        if (this->ContactAmount < 8)
            this->ContactAmount++;
    }
    else
        delete tmp;
    std::cout << std::endl;
    return;
}

bool stringIsalpha(const std::string &str) 
{
    for (std::string::const_iterator it = str.begin(); it != str.end(); it++)
    {
        if (std::isalpha(*it))
            return (true);
    }
    return (false);
}

void PhoneBook::searchContact()
{
    if (this->ContactAmount == 0)
    {
        std::cout << std::endl << "Error: no contacts" << std::endl;
        return;
    }

    std::cout << std::endl;
    for (int i = 0; i < this->ContactAmount; i++)
        this->contacts[i]->tableDisplay();
    std::cout << std::endl;

    bool run = true;
    int id;
    std::cout << std::endl << "Enter index of a contact to display all information or type \"EXIT\" to return" << std::endl;
    do {

    std::string str;
    std::cout << "Index: "; //<< std::flush;
    std::getline(std::cin, str);
    if (str == "EXIT")
        return;
    else if (stringIsalpha(str))
        std::cout << std::endl << "Invalid index: value is not a number" << std::endl;
    else
    {
        std::istringstream(str) >> id;
        if (id <= 0 || id > this->ContactAmount)
            std::cout << std::endl << "Invalid index: out of range" << std::endl;
        else
            run = false;
    }
    } while (run);

    std::cout << std::endl;
    this->contacts[id - 1]->fullDisplay();
    std::cout << std::endl;
}