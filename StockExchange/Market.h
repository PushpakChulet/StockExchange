#pragma once
#ifndef MARKET_H
#define MARKET_H

#include "Stock.h"
#include "Order.h"
#include <vector>
#include <map>

class Market {
private:
    std::map<std::string, Stock> stocks;

public:
    void addStock(const Stock& stock) {
        stocks[stock.getSymbol()] = stock;
    }

    // Order processing and matching logic goes here
};

#endif // MARKET_H
