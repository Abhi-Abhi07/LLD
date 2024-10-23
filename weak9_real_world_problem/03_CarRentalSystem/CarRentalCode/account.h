#include "basicheader.h"

class Account : public Person
{
private:
    string accountId;
    string password;
    AccountStatus status;
    VehicleReservation v;

public:
    virtual bool resetPassword() = 0;
};

class Receptionist : public Account
{
private:
    time_t dateJoined;

public:
    vector<Customer> searchCustomer(string name);
    bool addReservation();
    bool cancelReservation();
    bool resetPassword()
    {
        // definition
    }
};

class Customer : public Account
{
private:
    string licenseNumber;
    time_t licenseExpiry;

public:
    bool addReservation();
    bool cancelReservation();
    vector<VehicleReservation> getReservations();
    bool resetPassword()
    {
        // definition
    }
};