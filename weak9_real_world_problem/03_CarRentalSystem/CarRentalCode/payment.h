// Payment is an abstract class
class Payment
{
    // Data members
private:
    double amount;
    // The time_t datatype represents and deals with both date and time.
    time_t timestamp;
    PaymentStatus status;

public
    virtual bool makePayment() = 0;
}

class Cash : public Payment
{
public
    bool makePayment()
    {
        // functionality
    }
}

class CreditCard : public Payment
{
    // Data members
private:
    string nameOnCard;
    string cardNumber;
    string billingAddress;
    int code;

public
    bool makePayment()
    {
        // functionality
    }
}