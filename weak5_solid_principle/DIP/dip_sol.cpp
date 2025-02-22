#include<iostream>
// SOLUTION
// Make an Abstration, and make both dependent on ABS.

// 1. Define the Abstration
class ILogger
{
public:
    virtual ~ILogger() = default;
    virtual void Log(const std::string &message) = 0;
};

// 2. Implement the Abstration
class ConsoleLogger : public ILogger
{
public:
    void Log(const std::string &message) override
    {
        // Code to write the message to a file
        std::cout << "Console Logger logging: " << message << std::endl;
    }
};

class FileLogger : public ILogger
{
public:
    void Log(const std::string &message) override
    {
        // Code to write the message to a file
        std::cout<<"File logger logging : "<<message<<std::endl;
    }
};

// 3. Extend Functionality, if needed? which principle?
class ExternalServiceLogger : public ILogger
{
public:
    void Log(const std::string &message) override
    {
        // Code to send the message to an external service
        // This could involve HTTP requests, dealing with authentication, etc.
        std::cout<<"External service logging : "<<message<<std::endl;
    }
};

// Higher level app now depends upon Abstraction
class Application
{
private:
    ILogger *logger_;

public:
    Application(ILogger *logger) : logger_(logger) {}
    void Process()
    {
        logger_->Log("Application started");
        // Additional logic here
    }
};

int main()
{
    ExternalServiceLogger *externalServiceLogger = new ExternalServiceLogger();
    Application app(externalServiceLogger);

    // ConsoleLogger *clogger = new ConsoleLogger(); // new FileLogger();
    // Application app(clogger);
    app.Process();
    return 0;
}
