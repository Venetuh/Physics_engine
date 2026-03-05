#include <iostream>
#include "Core\Physics.h"
#include "Kinematics/Projectile.h"

using namespace std;

double ValidInputDouble(){
    double input;
    while (!(cin >> input)) {
        cout << "Invalid input. Please enter a valid double: ";
        cin.clear(); // Clear the error flags
        cin.ignore( 1000, '\n');  // Ignore/discard the previous invalid input in the buffer up to the newline character
    }
    return input;
}

int main()
{
    double v0 = ValidInputDouble();
    double g = 9.8;
    double angle = 55;
    double dispY = 0;

    Projectile* ball = new Projectile(v0, g, angle, dispY);
    ball->update();
    cout << "Position: (" << ball->getPos().x << ", " << ball->getPos().y << ")" << endl;
    
}


