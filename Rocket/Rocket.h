// Rocket.h
// D. Singletary
// 10/24/24
// class interface for a rocket

// Ian Scarberry
// 11/23/26
// added astronauts and destination to constructor

#include <iostream>

class Rocket {

private:
    std::string name;
    int astronauts;
    std::string destination;

public:
    Rocket() {
        name = "Falcon 9";
        astronauts = 5;
        destination = "Mars";
        std::cout << "Rocket constructor called, rocket is named " <<
            this->name << std::endl << "Astronauts abord: " << astronauts <<
            std::endl << "Destination: " << destination << std::endl;
    }

    virtual ~Rocket() {
        std::cout << "Rocket destructor for " << this->name << " called" <<
            std::endl;
    }
};
