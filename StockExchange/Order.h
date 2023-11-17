#pragma once
#ifndef ORDER_H
#define ORDER_H

#include <string>

class Order {
public:
    enum Type { BUY, SELL };

private:
    Type type;
    double price;
    int quantity;

public:
    Order(Type type, double price, int quantity)
        : type(type), price(price), quantity(quantity) {}

    Type getType() const {
        return type;
    }

    double getPrice() const {
        return price;
    }

    int getQuantity() const {
        return quantity;
    }
};

#endif // ORDER_H
