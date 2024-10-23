#include "vehicle.h"

class VehicleDecorator : public Vehicle
{
protected:
    Vehicle *baseVehicle;

public:
    VehicleDecorator(Vehicle *Vehicle) : baseVehicle(Vehicle) {}

    bool reserveVehicle() override
    {
        return baseVehicle->reserveVehicle();
    }

    bool returnVehicle() override
    {
        return baseVehicle->returnVehicle();
    }
};

class DiscountDecorator : public VehicleDecorator
{
private:
    float discountRate;

public:
    DiscountDecorator(Vehicle *vehicle, float rate) : VehicleDecorator(vehicle), discountRate(rate){};

    float getPrice() override
    {
        float basePrice = baseVehicle->getPrice();
        return basePrice - (basePrice * rate);
    }
};

class PeakSeasonDecorator : public VehicleDecorator
{
private:
    float additionalCharge;

public:
    PeakSeasonDecorator(Vehicle *vehicle, float additionalCharge) : VehicleDecorator(vehicle), additionalCharge(additionalCharge){};

    float getPrice() override
    {
        float basePrice = baseVehicle->getPrice();
        return basePrice + additionalCharge;
    }
};

class DamageDecorator : public VehicleDecorator
{
private:
    float fine;

public:
    DamageDecorator(Vehicle *vehicle, float fine) : VehicleDecorator(vehicle), fine(fine){};

    bool returnVehicle() override
    {
        // cal. fine
        auto totalPrice = baseVehicle->getPrice() + fine;
        // set new price
        base->setPrice(totalPrice);
        baseVehicle->returnVehicle();
    }
};

// {
//     Vehicle *v = new Car();
//     v = new DiscountDecorator(v, 10%);
// }