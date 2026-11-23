// main.cpp
// D. Singletary
// 10/24/24
// main function for a rocket application

#include <iostream>
#include "Rocket.h"

int main() {
    Rocket* obj = new Rocket();
    delete obj; //Explicitly delete the object to invoke the destructor

    return 0;
}
