#pragma once
#include <cmath>
class Vector2 {
public:
    double x,y;

    Vector2() : x(0), y(0) {}
    Vector2(double x, double y): x(x), y(y) {}

    double magnitude() const {
        return std::sqrt(x*x + y*y);
    }

    Vector2 normailized() const {
        double mag = magnitude();
        if (mag == 0) return Vector2(0,0);
        return Vector2(x/mag, y/mag);
    }

    Vector2 operator+(const Vector2& other) const {
        return Vector2(x + other.x, y + other.y);
    }

    Vector2 operator-(const Vector2& other) const {
        return Vector2(x - other.x, y - other.y);
    }

    Vector2 operator*(double scalar) const {
        return Vector2(x * scalar, y * scalar);
    }
    
};