class CarRentalBranch
{
private:
    string name;
    Address address;
    vector<ParkingStall> stalls;

public:
    Address getLocation();
};
