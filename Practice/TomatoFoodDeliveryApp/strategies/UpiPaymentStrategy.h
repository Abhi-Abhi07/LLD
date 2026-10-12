#ifndef UPI_PAYMENT_STRATEGY_H
#define UPI_PAYMENT_STRATEGY_H

#include <iostream>
#include <string>
#include <iomanip>
#include "PaymentStrategy.h"

class UpiPaymentStrategy : public PaymentStrategy {
private:
    std::string upiId;
public:
    UpiPaymentStrategy(const std::string& upiId): upiId(upiId) {};

    void pay(double amount) override{
            std::cout << "Paid ₹" << std::fixed << std::setprecision(2) 
            << amount << " using UPI ID: " << upiId << std::endl;
        // Here you would add the actual payment processing logic
    }
};

#endif // UPI_PAYMENT_STRATEGY_H