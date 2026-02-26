#ifndef PHYSICSPROBLEM_H
#define PHYSICSPROBLEM_H

#include <cmath>;

class PhysicsProblem {
public:
    virtual void calculate() const = 0;  // pure virtual function
    virtual ~PhysicsProblem() = default; // virtual destructor

protected:
    // helper function for all derived classes
    double toRadians(double degrees) const {
        return degrees * M_PI / 180.0;
    }
};

#endif