#ifndef DELIVERY_ORDER_H
#define DELIVERY_ORDER_H

#include "Order.h"
using namespace std;    

class DeliveryOrder : public Order {
private:
    string deliveryAddress;
public:
    DeliveryOrder() {
        deliveryAddress = "";
    }

    string getType() const override {
        return "Delivery";
    }

    //Getter and Setters
    void setDeliveryAddress(const string& addr) {
        deliveryAddress = addr;
    }

    string getDeliveryAddress() const {
        return deliveryAddress;
    }
};

#endif // DELIVERY_ORDER_H