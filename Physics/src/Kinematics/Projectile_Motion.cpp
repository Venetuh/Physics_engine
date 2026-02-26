#include "Kinematics/Projectile_Motion.h"
#include <iostream>
#include <cmath>

ProjectileMotion::Projectile(double velocity, double launchAngle, double gravity, double displacementY)
    : v0(velocity), angle(launchAngle), g(gravity), disp(displacementY) {}

double ProjectileMotion::toRadians(double degrees) const {
    return degrees * M_PI / 180.0;
}

void Projectile::calculate() const {
    const double g = (9.81);
    double angle_rad = toRadians(angle);

    double time_in_air = (v0 * sin(angle_rad) + sqrt( pow(v0,2) * sin(angle_rad)*sin(angle_rad) - 2*g*disp)) / g;
    double horizontal_range = v0 * cos(angle_rad) * time_in_air;


}