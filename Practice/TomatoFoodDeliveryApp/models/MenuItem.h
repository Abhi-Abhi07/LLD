#ifndef MENU_ITEM_H
#define MENU_ITEM_H

#include<iostream>
#include<string>
using namespace std;

class MenuItem{
private:
    string code;
    string name;
    double price;
public:
    MenuItem(){}
    MenuItem(const string& code, const string& name, int price) {
        this->code = code;
        this->name = name;
        this->price = price;
    }

    void setCode(const string &code){
        this->code = code;
    }

    void setName(const string &name){
        this->name = name;
    }

    void setPrice(const double &price){
        this->price = price;
    }

    string getCode() const{
        return code;
    }

    string getName() const{
        return name;
    }

    double getPrice() const{
        return price;
    }

    ~MenuItem(){}
};


#endif // MENU_ITEM_H