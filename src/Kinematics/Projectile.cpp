#include "Kinematics/Projectile.h"
#include <iostream>
#include <cmath>

Projectile::Projectile(double initialVelocity, double launchAngle, double gravity, double displacementY):
     v0(initialVelocity), angle(toRad(launchAngle)), g(gravity), dispY(displacementY) 
{}

void Projectile::calculate() {
    if (dispY == 0)
        time = v0*2*sin(2*angle)*g;
    else
        time = (v0 * sin(angle) + sqrt( pow(v0,2) * sin(angle)*sin(angle) - 2*g*dispY)) / g;
    dispX = v0 * cos(angle) * time;
}