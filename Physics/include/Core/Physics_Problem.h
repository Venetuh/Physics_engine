#ifndef PHYSICSPROBLEM_H
#define PHYSICSPROBLEM_H

class PhysicsProblem {
public:
    virtual void calculate() const = 0;  // pure virtual function
    virtual ~PhysicsProblem() = default; // virtual destructor
};

#endif