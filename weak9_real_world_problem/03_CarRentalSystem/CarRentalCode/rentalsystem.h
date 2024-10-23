class CarRentalSystem
{
private:
    string name;
    vector<CarRentalBranch> branches;

    // The CarRentalSystem is a singleton class that ensures it will have only one active instance at a time
    static CarRentalSystem system = NULL;

public:
    void addNewBranch(CarRentalBranch branch);

    // Created a static method to access the singleton instance of CarRentalSystem
    static CarRentalSystem getInstance()
    {
        if (system == NULL)
        {
            system = new CarRentalSystem();
        }
        return system;
    }
};