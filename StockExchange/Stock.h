#pragma once
#ifndef STOCK_H
#define STOCK_H

#include <string>

class Stock {
private:
    std::string symbol;
    double price;

public:
    Stock(const std::string& symbol, double price) : symbol(symbol), price(price) {}

    const std::string& getSymbol() const {
        return symbol;
    }

    double getPrice() const {
        return price;
    }

    void setPrice(double newPrice) {
        price = newPrice;
    }
};

#endif // STOCK_H
