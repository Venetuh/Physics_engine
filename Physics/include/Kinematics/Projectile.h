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
    double time;
public:
    Projectile(double initialVelocity, double launchAngle, double displacementY, double gravity);

    void calculate();
};

#endif