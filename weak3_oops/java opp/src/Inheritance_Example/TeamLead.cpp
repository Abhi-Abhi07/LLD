#include <iostream>

class TeamLead {    
    protected:
    int teamSize;

    public:
    TeamLead(){}

    void leadTeam(){
        std::cout<<"team leader lead team"<<std::endl;
    }
};
