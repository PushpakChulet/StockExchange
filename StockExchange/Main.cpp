#include "Stock.h"
#include "Trader.h"
#include "Market.h"

int main() {
    // Create a market
    Market market;

    // Add some random  stocks to the market
    market.addStock(Stock("AAPL", 150.0));
    market.addStock(Stock("MSFT", 250.0));

    // Create traders
    Trader alice("Alice");
    Trader bob("Bob");

    // Traders place orders
    alice.placeOrder(Order(Order::BUY, 150.0, 10)); // Alice buys 10 shares of AAPL at 150
    bob.placeOrder(Order(Order::SELL, 150.0, 5));  // Bob sells 5 shares of AAPL at 150

    // Market processes orders (implementation needed)

    return 0;
}
