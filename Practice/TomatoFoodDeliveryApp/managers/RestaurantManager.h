#ifndef RESTAURANTMANAGER_H
#define RESTAURANTMANAGER_H 

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "../models/Restaurant.h"

using namespace std;

class RestaurantManager {
private:
    vector<Restaurant*> restaurants;
    static RestaurantManager* instance;
    
    // Private constructor to prevent instantiation
    RestaurantManager() {}
public:
    static RestaurantManager* getInstance() {
        if (!instance) {
            instance = new RestaurantManager();
        }
        return instance;
    }

    void addRestaurant(Restaurant* restaurant) {
        restaurants.push_back(restaurant);
    }

    const vector<Restaurant*>& getRestaurants() const {
        return restaurants;
    }

    vector<Restaurant*> searchByLocation(const string& location) const {
        vector<Restaurant*> result;
        string searchLocation = location;
        transform(searchLocation.begin(), searchLocation.end(), searchLocation.begin(), ::tolower); // Convert search location to lowercase
        for (auto restaurant : restaurants) {
            string restaurantLocation = restaurant->getLocation();
            transform(restaurantLocation.begin(), restaurantLocation.end(), restaurantLocation.begin(), ::tolower); // Convert restaurant location to lowercase
            if (restaurantLocation.find(searchLocation) != string::npos) {
                result.push_back(restaurant);
            }
        }
        return result;
    }

    ~RestaurantManager() {
        for (auto restaurant : restaurants) {
            delete restaurant;
        }
        restaurants.clear();
    }

};

RestaurantManager* RestaurantManager::instance = nullptr;

#endif // RESTAURANTMANAGER_H