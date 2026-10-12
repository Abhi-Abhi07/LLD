#ifndef CREDIT_CARD_PAYMENT_STRATEGY_H
#define CREDIT_CARD_PAYMENT_STRATEGY_H

#include <iostream>
#include <string>
#include <iomanip>
#include "PaymentStrategy.h"

class CreditCardPaymentStrategy : public PaymentStrategy {
private:
    std::string cardNumber;
    std::string cardHolderName;
    std::string expirationDate;
    std::string cvv;

public:
    CreditCardPaymentStrategy(const std::string& cardNumber): cardNumber(cardNumber) {};

    void pay(double amount) override{
            std::cout << "Paid ₹" << std::fixed << std::setprecision(2) 
            << amount << " using credit card: (" << cardNumber << ")" 
            << std::endl;
        // Here you would add the actual payment processing logic
    }
};

#endif // CREDIT_CARD_PAYMENT_STRATEGY_H