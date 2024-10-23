// definition of enumerations used in the car rental system
enum VehicleStatus
{
    AVAILABLE,
    RESERVED,
    LOST,
    BEING_SERVICED
};

enum AccountStatus
{
    ACTIVE,
    CLOSED,
    CANCELED,
    BLACKLISTED,
    BLOCKED
};

enum ReservationStatus
{
    ACTIVE,
    PENDING,
    CONFIRMED,
    COMPLETED,
    CANCELED
};

enum PaymentStatus
{
    UNPAID,
    PENDING,
    COMPLETED,
    CANCELED,
    REFUNDED
};

enum VanType
{
    PASSENGER,
    CARGO
};

enum CarType
{
    ECONOMY,
    COMPACT,
    INTERMEDIATE,
    STANDARD,
    FULL_SIZE,
    PREMIUM,
    LUXURY
};

enum MotorcycleType
{
    STANDARD,
    CRUISER,
    TOURING,
    SPORTS,
    OFF_ROAD,
    DUAL_PURPOSE
};

enum TruckType
{
    LIGHT_DUTY,
    MEDIUM_DUTY,
    HEAVY_DUTY
};

enum VehicleLogType
{
    ACCIDENT,
    FUELING,
    CLEANING_SERVICE,
    OIL_CHANGE,
    REPAIR,
    OTHER,
    RESERVED,
    RETURNED,
};