// Equipment is an abstract class
class Equipment
{
private:
    int equipmentId;
    int price;
};

class Navigation : public Equipment
{
};

class ChildSeat : public Equipment
{
};

class SkiRack : public Equipment
{
};