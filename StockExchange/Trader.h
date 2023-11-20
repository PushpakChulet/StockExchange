#pragma once
#ifndef TRADER_H
#define TRADER_H

#include "Order.h"
#include "Market.h"  
#include <vector>
#include <string>
#include <unordered_map>

class Trader {
private:
    std::string name;
    std::vector<Order> orders;
    double totalProfit;
    std::unordered_map<std::string, double> individualProfits; // Key: Share Name, Value: Profit

public:
    Trader(const std::string& name) : name(name), totalProfit(0.0) {}

    void placeOrder(const Order& order, Market& market) {
        orders.push_back(order);
        updateProfits(order, market);
    }

    double getTotalProfit() const {
        return totalProfit;
    }

    double getProfitForShare(const std::string& shareName) const {
        auto it = individualProfits.find(shareName);
        if (it != individualProfits.end()) {
            return it->second;
        }
        return 0.0; // No profit recorded for this share
    }

    // ... Other methods ...

private:
    void updateProfits(const Order& order, Market& market) {
        // have to implement other classes and methods

        // This is a placeholder implementation
        double currentMarketPrice = market.getCurrentPrice(order.getShareName());
        double profit = (currentMarketPrice - order.getPrice()) * order.getQuantity();
        totalProfit += profit;
        individualProfits[order.getShareName()] += profit;
    }

    // ... Other private helper methods ...
};

#endif
