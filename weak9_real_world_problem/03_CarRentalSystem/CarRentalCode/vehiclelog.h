// VehicleLog is a class responsible for keeping track of all the events related to a vehicle.
class VehicleLog
{
private:
    int logId;
    VehicleLogType type;
    string description;
    time_t creationDate;
};

class VehicleReservation
{
private:
    int reservationId;
    string customerId;
    string vehicleId;
    time_t creationDate;
    ReservationStatus status;
    time_t dueDate;
    time_t returnDate;
    string pickupLocation;
    string returnLocation;

    vector<Equipment> equipments;
    vector<Service> services;

public:
    static VehicleReservation getReservationDetails();
    bool addEquipment();
    bool addService();
};