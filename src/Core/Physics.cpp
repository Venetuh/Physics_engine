#include "Core/Physics.h"
#include <iostream>
#include <cmath>

using namespace std;


double Physics::toRad(double deg){
    return deg *180/M_PI;
}