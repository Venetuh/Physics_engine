#pragma once
#include <cmath>
class Vector3 {
public:
    double x,y,z;

    Vector3() : x(0), y(0), z(0) {}
    Vector3(double x, double y, double z): x(x), y(y), z(z) {}

    double magnitude() const {
        return std::sqrt(x*x + y*y + z*z);
    }

    Vector3 normailized() const {
        double mag = magnitude();
        if (mag == 0) return Vector3(0,0,0);
        return Vector3(x/mag, y/mag, z/mag);
    }

    Vector3 operator+(const Vector3& other) const {
        return Vector3(x + other.x, y + other.y, z + other.z);
    }

    Vector3 operator-(const Vector3& other) const {
        return Vector3(x - other.x, y - other.y, z - other.z);
    }

    Vector3 operator*(double scalar) const {
        return Vector3(x * scalar, y * scalar, z * scalar);
    }
    
};