// Service is an abstract class
class Service
{
private:
    int serviceId;
    int price;
};

class DriverService : public Service
{
private:
    int driverId;
};

class RoadsideAssistance : public Service
{
};

class WiFi : public Service
{
};