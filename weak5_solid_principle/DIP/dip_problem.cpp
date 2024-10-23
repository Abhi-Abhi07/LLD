// in above example higher level module Application is coupled/dependent on lower level module,
// that's the  violaton of DIP


// higher level module
#include<iostream>

class FileLogger
{
public:
    void Log(const std::string &message)
    {
        // Code to write the message to a file
        std::cout<<"File logger logging : "<<message<<std::endl;
    }
};

class Application
{
private:
    FileLogger *logger_;

public:
    Application()
    {
        logger_ = new FileLogger();
    }
    void Process()
    {
        logger_->Log("Application started");
        // Additional logic here
    }
};

int main(){

    Application app;
    app.Process();

    return 0;
}

