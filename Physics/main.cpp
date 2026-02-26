#include <iostream>
#include "Core/Physics_Problem.h"
#include "Kinematics/Projectile_Motion.h"

using namespace std;

int main()
{

    int problemType = 0;
    int topic = 0;
   
    cout << "What type of problem are you doing?" << endl;
    cout << "1. Kinematics:" << endl;
    cout << "2. Dynamics:" << endl;
    cout << "3. Thermodynamics:" << endl;
    cout << "4. Waves and Optics:" << endl;


    topic = ValidInputInt();
    
    
    switch (topic)
    {
    case 1: // Kinematics
        cout << "1. Projectile Motion" << endl;
        cout << "2. Free Fall" << endl;
        cout << "3. Uniform Circular Motion" << endl;
        cout << "4. Simple Harmonic Motion" << endl;
        cout << "5. Newton's Second Law" << endl;
        cout << "10. Exit" << endl;
        break;
    case 2: // Dynamics
        cout << "not available yet" << endl;
        break;
    case 3: // Thermodynamics
    cout << "not available yet" << endl;
        break;
    case 4: // Waves and Optics
    cout << "not available yet" << endl;
        break;
    default:
        break;
    }
        
    problemType = ValidInputInt();
    
    while(true){
        switch (problemType)
        {
        case 1: // projectileMotion
        ProjectileMotion* problem = new ProjectileMotion(30.0,55.0,15.0); // Example parameters
        problem->calculate(); 
        cout << "Enter another problem type or 10 to exit: ";
        problemType = ValidInputInt();   
            break;
        case 10: 
            cout << "Exiting program..." << endl;
            return 0;
        default: 
            cout << "Invalid problem type selected." << endl;
            break;
        }
    }
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
