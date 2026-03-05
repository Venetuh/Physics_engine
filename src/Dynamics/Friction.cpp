#include "Dynamics/Friction.h"
#include <iostream>
#include <cmath>
using namespace std;



Friction::Friction(double angle, double frictionCoeffiecient) 
    : angle(toRad(angle)), mu(frictionCoeffiecient){}

void Friction::update(double dt) {
    // Calculate the frictional force
    F = mu * g * m * cos(angle);
    
    //calculate the frictional force on sloped surface
    F = mu * m * g * cos(angle);
}
void Friction::update() {
    // Update acceleration based on friction
    double a = g * sin(angle) - mu * g * cos(angle);

    acc = Vector3(a * cos(angle), a * sin(angle), 0);

}