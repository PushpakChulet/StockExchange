#pragma once
#ifndef TRADER_H
#define TRADER_H

#include "Order.h"
#include <vector>
#include <string>

class Trader {
private:
    std::string name;
    std::vector<Order> orders;

public:
    Trader(const std::string& name) : name(name) {}

    void placeOrder(const Order& order) {
        orders.push_back(order);
    }

    // Additional methods like viewing orders can be added here
};

#endif // TRADER_H
