#ifndef PROJECTILEMOTION_H
#define PROJECTILEMOTION_H

#include "Core\Physics.h"

class Projectile : public Physics{
private:
    double v0;
    double angle;
    double g;
    double dispY;
    double dispX;
public:
    Projectile(double initialVelocity, double launchAngle, double displacementY, double gravity);
    void update(double dt) override; 
    void update();
};

#endif