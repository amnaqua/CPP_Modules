#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

bool stringIsalnum(const std::string &str)
{
    for (std::string::const_iterator it = str.begin(); it != str.end(); it++)
    {
        if (std::isalnum(*it))
            return (true);
    }
    return (false);
}

int Contact::setData(int index)
{
    int id = 0;

    this->index = index;
    
    do {
    
    std::cout << "Add contact: Name (required): ";
    std::getline(std::cin, this->fieldsInfo[id]);
    if (std::cin.eof()) { std::cin.clear(); return (1);}
    
    } while (this->fieldsInfo[id].empty() || !stringIsalnum(this->fieldsInfo[id]));

    std::cout << "Add contact: Last name: ";
    std::getline(std::cin, this->fieldsInfo[++id]);
    if (std::cin.eof()) { std::cin.clear(); return (1); }

    std::cout << "Add contact: Nickname: ";
    std::getline(std::cin, this->fieldsInfo[++id]);
    if (std::cin.eof()) { std::cin.clear(); return (1); }

    std::cout << "Add contact: Phone number: ";
    std::getline(std::cin, this->fieldsInfo[++id]);
    if (std::cin.eof()) { std::cin.clear(); return (1); }

    std::cout << "Add contact: Darkest secret: ";
    std::getline(std::cin, this->fieldsInfo[++id]);
    if (std::cin.eof()) {std::cin.clear(); return (1); }

    if (this->fieldsInfo[0].length() == 0)
    {
        std::cout << std::endl << "Error: name is required" << std::endl;
        return (1);
    }
    return (0);
}

void Contact::tableDisplay()
{
    std::cout << "|" << std::right << std::setw(10) << this->index;

    for (int i = 0; i < 3; i++)
    {
        std::cout << "|";
        if (this->fieldsInfo[i].length() > 10)
            std::cout << this->fieldsInfo[i].substr(0, 9) << ".";
        else
            std::cout << std::right << std::setw(10) << this->fieldsInfo[i];
    }
    std::cout << "|" << std::endl;
}

void Contact::fullDisplay()
{
    int id;

    std::cout << "Information of Contact №" << this->index << std::endl << std::endl;

    id = -1;
    std::cout << "Name: " << this->fieldsInfo[++id] << std::endl;
    std::cout << "Last name: " << this->fieldsInfo[++id] << std::endl;
    std::cout << "Nickname: " << this->fieldsInfo[++id] << std::endl;
    std::cout << "Phone number: " << this->fieldsInfo[++id] << std::endl;
    std::cout << "Darkest secret: " << this->fieldsInfo[++id] << std::endl; 
}