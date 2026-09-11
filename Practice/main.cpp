#include<iostream>
#include<string>
#include<memory>
#include <stdexcept> // Required for std::runtime_error
class Student{
    std::string name;
    int roll_no;
    int age;
    public:
    Student(std::string name,int roll_no,int age){
        this->name= name;
        this->roll_no=roll_no;
        this->age=age;
    }

    ~Student(){}
};

class Vehicle{
    std:: string name;
    int weight;
    protected:
    Vehicle(std::string name,int weight):name(name),weight(weight){
        std::cout<<"Vehicle ctor called"<<std::endl;
    }

    public:
    virtual ~Vehicle(){
        std::cout<<"Vehicle dtor called"<<std::endl;
    }
    friend class Bike;
};

class Bike{
    public:
    Bike(){
        Vehicle v("Hero", 150);
        std::cout<<"bike ctor called"<<std::endl;
        std::cout<<"bike name : "<<v.name<<std::endl;
        std::cout<<"bike weight : "<<v.name<<std::endl;
    }
    ~Bike(){
        std::cout<<"bike dtor called"<<std::endl;
    }
};

class Car : public Vehicle{
    public:
    Car(std::string name,int weight):Vehicle(name,weight){
        std::cout<<"car ctor called"<<std::endl;
    }
    ~Car(){
        std::cout<<"car dtor called"<<std::endl;
    }
};

class Truck : private Vehicle{
    public:
    Truck(std::string name,int weight):Vehicle(name,weight){
        std::cout<<"Truck ctor called"<<std::endl;
    }
    ~Truck(){
        std::cout<<"Truck dtor called"<<std::endl;
    }  
};

int add(int a,int b){
    class LocalClass{
        int no;
        std::string data;
        public:
        LocalClass(std::string data){
            this->data = data;
            std::cout<<"Logger Data : "<<data<<std::endl;
        }
    };

    LocalClass lc("local class work as well");
    return a+b;
}

class Area{
    public:
    Area(){}
    virtual int area(){
        std::cout<<"area calculating"<<std::endl;
        return 0;
    }
    ~Area(){}
};
class RectAngle: public Area{
    int x;
    int y;
    public:
    RectAngle(int x,int y):x(x),y(y){}

    int area(){
        std::cout<<"RectAngle area calculating"<<std::endl;
        return x*y;
    }
    ~RectAngle(){}
};
class Square: public Area{
    int a;
    public:
    Square(int a):a(a){}

    int area(){
        std::cout<<"Square area calculating"<<std::endl;
        return a*a;
    }
    ~Square(){}
};
class Static{
    public:
    int var;
    static int static_var;
    public:
    Static(int var):var(var){}
    void print(){
        std::cout<<"var : "<<var<<"\n";
        std::cout<<"static_var : "<<static_var<<"\n";
    }

    static void static_print(){
        // std::cout<<"var : "<<var<<"\n"; // static method can't access normal data
        std::cout<<"static_print method : "<<static_var<<"\n"; // only access static data
    }

    ~Static(){};
};
int Static::static_var = 5;

void fun(){
    static int x=5;
    int y=10;
    std::cout<<"addres of static var x : "<<&x<<std::endl;
    std::cout<<"addres of normal var y : "<<&y<<std::endl<<std::endl;
}

class X{
    public:
    int x;
    int *y;
    X(int x,int y){
        this->x = x;
        this->y = new int(y);
    }
    X(const X &obj){
        x = obj.x;
        // shallow copy
        y = obj.y;

        // deep copy
        // y = new int(*obj.y);
    }

    
    // private: 
    //     X(const X &obj){
    //         x = obj.x;
    //         // shallow copy
    //         y = obj.y;
        
    //         // deep copy
    //         // y = new int(*obj.y);
    //     }

    // deleting copy ctor
    // X(const X&) = delete;
    // X& operator=(const X&) = delete;

    public:
    void print(){
        std::cout<<x<<"   "<<&x<<std::endl;
        std::cout<<"value: "<<*y<<", y (address store): "<<y<<", address of pointer y: "<<&y<<std::endl;
    }

    ~X(){
        // in shallow copy 
        // firstly c1 free resource for add like : xy12
        // after that c2 again try to free resource for same add : xy12
        // its undefined behaviour 
        // that's why private ctor comes in picture 
        // if ctor is private then we can't copy 
        // X c2 = c1; it's not possible
        // now days insted of making private ctor we delete copy ctor
        std::cout<<"dtor called !\n y (address store): "<<y<<std::endl;
        delete y;
    }
};
int main(){

    X c1(3,7);
    X c2 = c1;
    std::cout<<"c1 data : ";
    c1.print();
    std::cout<<"c2 data : ";
    c2.print();



    // fun();
    // fun();
    // fun();
    // fun();

    // Static *s=new Static(3);
    // s->print();
    // s->static_print();
    // std::cout<<s->static_var<<std::endl<<std::endl;
    // Static *s2=new Static(7);
    // s2->print();
    // std::cout<<s2->static_var<<std::endl<<std::endl;
    // std::cout<<Static::static_var<<std::endl;
    // delete s;



    // int dividend, divisor;
    // std::cout<<"Enter dividend : ";
    // std::cin>>dividend;
    // std::cout<<"Enter divisor : ";
    // std::cin>>divisor;
    // try {
    //     // In standard C++, integer division by zero does not throw a std::exception. It causes Undefined Behavior.
    //     // On most systems (Windows/Linux), the CPU sends a hardware signal (like SIGFPE), which kills your program instantly.
    //     // try and catch blocks cannot catch hardware signals or undefined behavior.
    //     // Manual check is required
    //     if (divisor == 0) {
    //         // We manually throw an exception to be caught below
    //         throw std::runtime_error("Error: Division by zero is not allowed.");
    //     }

    //     int res = dividend / divisor;
    //     std::cout << "Result: " << res << "\n";
    // }
    // catch (const std::exception& e) {
    //     std::cerr << e.what() << '\n';
    // }

    // std::cout<<"All done\n";

    

    // Area *rect = new RectAngle(4,2);
    // int rect_angle_area = rect->area();
    // std::cout<<rect_angle_area<<std::endl;

    // Bike b;
    // Bike *b2 = new Bike();
    // delete b2;

    // Vehicle *v = new Car("RR",400);
    // delete v;
    // Truck *t = new Truck("TATA",3500);
    // delete t;



    // Student *ptr = new Student("Raju",3,2);
    // if(ptr != nullptr) std::cout<<"memory allocated"<<std::endl;
    // delete ptr;

    // std::unique_ptr<Student> ptr2 = std::make_unique<Student>("Anju",4,5);
    // if(ptr2) {  // smart pointers have bool operator
    //     std::cout << "Memory allocated" <<std::endl;
    // }
    // // Memory automatically deleted when ptr2 goes out of scope
    return 0;
}