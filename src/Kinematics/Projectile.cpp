#include "Kinematics/Projectile.h"
#include <iostream>
#include <cmath>

using namespace std;

Projectile::Projectile(double initialVelocity, double launchAngle, double gravity, double displacementY):
     v0(initialVelocity), angle(toRad(launchAngle)), g(gravity), dispY(displacementY) 
{}


void Projectile::update(){
    if (dispY == 0)
        time = (v0*2*sin(angle))/g;
    else
        time = (v0 * sin(angle) + sqrt( pow(v0,2) * sin(angle)*sin(angle) - 2*g*dispY)) / g;
    dispX = v0 * cos(angle) * time;    
    
    pos.x = dispX;
    pos.y = dispY;

}

void Projectile::update(double deltaTime){
    
    time += deltaTime;
    dispX = v0 * cos(angle) * time;    
    
    pos.x = dispX;
    pos.y = dispY;

}