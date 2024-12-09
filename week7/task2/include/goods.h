#ifndef UNTITLEDCLASSES_GOODS_H
#define UNTITLEDCLASSES_GOODS_H

#include <string>
#include <ostream>

class Goods {
public:
    Goods(long id, const std::string& name, const std::string& category, double price)
        : id(id), name(name), category(category), price(price) {}

    double getPrice() const { return price; }
    std::string getName() const { return name; }

private:
    long id = 0;
    std::string name = "empty";
    std::string category = "empty";
    double price = 0.0;
};

#endif // UNTITLEDCLASSES_GOODS_H

