#include "Kinematics/Projectile_Motion.h"
#include <iostream>
#include <cmath>

ProjectileMotion::ProjectileMotion(double velocity, double launchAngle, double gravity, double displacementY)
    : v0(velocity), angle(launchAngle), g(gravity), disp(displacementY) {}

double ProjectileMotion::toRadians(double degrees) const {
    return degrees * M_PI / 180.0;
}

void ProjectileMotion::calculate() const {
    const double g = (9.81);
    double angle_rad = toRadians(angle);

    double time_in_air = (v0 * sin(angle_rad) + sqrt( pow(v0,2) * sin(angle_rad)*sin(angle_rad) - 2*g*disp)) / g;
    double horizontal_range = v0 * cos(angle_rad) * time_in_air;
    std::cout << "Given Variables:" << std::endl;
    std::cout << "Initial velocity: " << v0 << " m/s" << std::endl;
    std::cout << "Launch angle: " << angle << " degrees" << std::endl;
    std::cout << "Gravity: " << g << " m/s^2" << std::endl;
    std::cout << "Displacement in Y direction: " << disp << " meters" << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << "Calculated Results:" << std::endl;
    std::cout << "Displacement in Y direction: " << disp << " meters" << std::endl;
    std::cout << "Time in air: " << time_in_air << " seconds" << std::endl;
    std::cout << "Horizontal range: " << horizontal_range << " meters" << std::endl;

}