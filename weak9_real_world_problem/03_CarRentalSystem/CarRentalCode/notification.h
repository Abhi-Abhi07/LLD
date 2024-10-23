// Notification is an abstract class
class Notification
{
private:
    int notificationId;
    // The time_t datatype represents and deals with both date and time.
    time_t createdOn;
    string content;

public:
    void sendNotification(Account account) = 0;
};

class SmsNotification : public Notification
{
public:
    void sendNotification(Account account)
    {
        // functionality
    }
};

class EmailNotification : public Notification
{
public:
    void sendNotification(Account account)
    {
        // functionality
    }
};