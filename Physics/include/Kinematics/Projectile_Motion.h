#ifndef PROJECTILEMOTION_H
#define PROJECTILEMOTION_H

class ProjectileMotion {
private:
    double v0;
    double angle;
    double g;
    double disp;

    double toRadians(double degrees) const;

public:
    Projectile(double velocity, double launchAngle, double displacementY, double gravity = 9.81);

    void calculate() const;
};

#endif