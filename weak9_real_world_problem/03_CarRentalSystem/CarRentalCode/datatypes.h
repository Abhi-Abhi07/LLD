class Address
{
private:
    string streetAddress;
    string city;
    string state;
    int zipCode;
    string country;
};

class Person
{
private:
    string name;
    Address address;
    string email;
    string phoneNumber;
};

class Driver : public Person
{
private:
    int driverId;
};