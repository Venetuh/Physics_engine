#ifndef PHYSICSPROBLEM_H
#define PHYSICSPROBLEM_H

#include "Vector3.h"

class Physics {
protected:
    double toRad(double deg);
    Vector3 pos;
    Vector3 vel;
    Vector3 acc;
    Vector3 dir;
    double m; // mass
    double speed;
    double time;
    double g = 9.8; // default gravity value
public:
    const Vector3& getPos() const { return pos; }
    const Vector3& getVel() const { return vel; }
    const Vector3& getAcc() const { return acc; }
    const Vector3& getDir() const { return dir; }
    double getSpeed() const { return speed; }
    double getTime() const { return time; }
    double getGravity() const { return g; }
    double getMass() const { return m; }    

    void setPos(const Vector3& p) { pos = p; }
    void setVel(const Vector3& v) { vel = v; }
    void setAcc(const Vector3& a) { acc = a; }
    void setDir(const Vector3& d) { dir = d; }
    void setSpeed(double s) { speed = s; }
    void setTime(double t) { time = t; }
    void setGravity(double gravity) { g = gravity; }
    void setMass(double mass) { m = mass; }

    virtual void update(double dt) = 0; // pure virtual function
    virtual ~Physics() = default; // virtual destructor
    
};


#endif