#ifndef STORAGE_H
#define STORAGE_H

#include <string>

struct Storage {
    std::string type;
    std::string product_name;
    int quantity;
    float cost;
    float markup_percentage;
};

#endif