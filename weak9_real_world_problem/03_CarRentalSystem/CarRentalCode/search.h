class Search
{
public:
    virtual vector<Vehicle> searchByType(string type) = 0;
    virtual vector<Vehicle> searchByModel(string model) = 0;
};

class VehicleCatalog : public Search
{
private:
    map<string, vector<Vehicle>> vehicleTypes;
    map<string, vector<Vehicle>> vehicleModels;

public:
    // to return all vehicles of the given type.
    vector<Vehicle> searchByType(string type)
    {
        // functionality
    }

    // to return all vehicles of the given model.
    vector<Vehicle> searchByModel(string model)
    {
        // functionality
    }
};