#include "data.hpp"

#include <iostream>

uintptr_t serialize(Data *ptr) { return (reinterpret_cast<uintptr_t>(ptr)); }

Data* deserialize(uintptr_t raw) { return (reinterpret_cast<Data *>(raw)); }

int main()
{
    Data* data;
    Data* retData;
    uintptr_t rawData;

    data = new Data;

    std::cout << "Data: " << data << std::endl;
    rawData = serialize(data);
    std::cout << "Raw data: " << rawData << std::endl;
    retData = deserialize(rawData);
    std::cout << "Deserialize data: " << retData << std::endl;

    delete data;

    return (0);
}