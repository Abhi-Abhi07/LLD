#ifndef RESTAURANT_H
#define RESTAURANT_H

#include<iostream>
#include<string>
#include<vector>
#include "MenuItem.h"

using namespace std;

class Restaurant{
private:
    static int nextRestaurantID;
    int id;
    string name;
    string location;
    vector<MenuItem> menu;
public:
    Restaurant(const string &name,const string &loc){
        id = ++nextRestaurantID;
        this->name = name;
        this->location = loc;
    };
    ~Restaurant() {
        // Optional: just for clarity or debug
        cout << "Destroying Restaurant: " << name << ", and clearing its menu." << endl;
        menu.clear();
    }
    //Getters and setters
    string getName() const {
        return name;
    }

    void setName(const string &n) {
        name = n;
    }

    string getLocation() const {
        return location;
    }

    void setLocation(const string &loc) {
        location = loc;
    }

    void addMenuItem(const MenuItem &item) {
        menu.push_back(item);
    }

    const vector<MenuItem>& getMenu() const {
        return menu;
    }
};

int Restaurant :: nextRestaurantID = 0;

#endif // RESTAURANT_H 