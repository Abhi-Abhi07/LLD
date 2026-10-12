#ifndef PAYMENT_STRATEGY_H
#define PAYMENT_STRATEGY_H

#include <iostream>

class PaymentStrategy {
public:
    virtual ~PaymentStrategy() = default;
    virtual void pay(double amount) = 0;
};

#endif // PAYMENT_STRATEGY_H