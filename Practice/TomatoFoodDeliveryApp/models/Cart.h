#ifndef CART_H
#define CART_H

#include<vector>
#include<iostream>
#include "../models/MenuItem.h"
#include "../models/Restaurant.h"

class Cart{
private:
    Restaurant *restaurant;
    vector<MenuItem> items;
public:
    Cart(){
        restaurant = nullptr;
    };
    void addItem(const MenuItem& item) {
        if (!restaurant) {
            cerr << "Cart: Set a restaurant before adding items." << endl;
            return;
        }
        items.push_back(item);
    }

    double getTotalCost() const {
        double sum = 0;
        for (const auto& it : items) {
            sum += it.getPrice();
        }
        return sum;
    }

    bool isEmpty() {
        return (!restaurant || items.empty());
    }

    void clear() {
        items.clear();
        restaurant = nullptr;
    }

    // Getters and Setters
    void setRestaurant(Restaurant* r) {
        restaurant = r;
    }

    Restaurant* getRestaurant() const {
        return restaurant;
    }

    const vector<MenuItem>& getItems() const {
        return items;
    }

    ~Cart(){};
};


#endif // CART_H