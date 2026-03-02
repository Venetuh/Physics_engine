#include <iostream>
#include "Core\Physics.h"
#include "Kinematics/Projectile.h"

using namespace std;

int main()
{

}

int ValidInputInt(){
    int choice;
    while (!(cin >> choice)) {
        cout << "Invalid input. Please enter a valid integer: ";
        cin.clear(); // Clear the error flags
        cin.ignore( 1000, '\n');  // Ignore/discard the previous invalid input in the buffer up to the newline character
    }
    return choice;
}
