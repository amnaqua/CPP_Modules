#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

bool stringIsalnum(const std::string &str);

class Contact
{
public:
    Contact();
    ~Contact();
    int setData(int index);
    void    tableDisplay();
    void    fullDisplay();
private:
    static const int    FieldsCount = 5;
    enum fields
    {
        firstName,
        lastName,
        nickname,
        phone,
        darkestSecret
    };
    int index;
    std::string fieldsInfo[FieldsCount];
};

#endif