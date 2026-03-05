#ifndef FRICTION_H
#define FRICTION_H

#include "Core/Physics.h"

class Friction : public Physics
{
private:
    double angle;
    double F;
    double mu;
public:
    Friction(double angle, double frictionCoeffiecient);
    void update(double dt) override;
    void update();

};



#endif // FRICTION_H