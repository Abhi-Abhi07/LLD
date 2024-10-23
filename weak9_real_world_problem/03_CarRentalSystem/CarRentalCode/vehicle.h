class Vehicle
{
private:
    string vehicleId;
    string licenseNumber;
    int passengerCapacity;
    bool hasSunroof;
    VehicleStatus status;
    string model;
    int manufacturingYear;
    int mileage;
    vector<VehicleLog> log;
    Date dueDate;
    int price;

public:
    bool reserveVehicle();
    bool returnVehicle();
    float getPrice();
    void getServiceDone();
};

class Car : public Vehicle
{
private:
    CarType carType;
};

class Van : public Vehicle
{
private:
    VanType vanType;
}

class Truck : public Vehicle
{
private:
    TruckType truckType;
};

class MotorCycle : public Vehicle
{
private:
    MotorcycleType motorcycleType;
};