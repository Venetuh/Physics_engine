#ifndef PHYSICSPROBLEM_H
#define PHYSICSPROBLEM_H



class Physics {
protected:
    double toRad(double deg);
public:
    virtual void calculate() const = 0;  // pure virtual function
    virtual ~Physics() = default; // virtual destructor
};

#endif