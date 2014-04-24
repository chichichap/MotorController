#include <iostream>
#include <sstream>
#include "csensor.h"
#include "cdoorlatch.h"
#include "cmotor.h"

using namespace std;

int main()
{
    CSensor sensor;
    CDoorLatch doorLatch;
    CMotor motor;

    string inputString;
    int data[10] = {0};

    cout << "Command List" << endl;
    cout << "1: Reset Motor" << endl;
    cout << "2: Toggle Door Latch" << endl;
    cout << "3: Read from Sensor" << endl;
    cout << "4: Move Motor" << endl;
    cout << "------------------------------------" << endl;

    for(;;) {
// step 1: print current information
        cout << "Current data: ";
        for (int i=0; i < 10; i++)
            cout << data[i] << " ";
        cout << endl;
        cout << "Motor position: " << motor.getPosition() << endl;
        cout << "Door status: " << (doorLatch.checkOpen() ? "open" : "closed") << endl;
        cout << "Enter command number: ";
        getline(cin, inputString);

// step 2: process user input
        if (!inputString.compare("1")) {
            motor.resetMotor();

        } else if (!inputString.compare("2")) {
            doorLatch.setOpen(!doorLatch.checkOpen());

        } else if (!inputString.compare("3")) {
            if (sensor.calibrate())
                sensor.readData(data);

        } else if (!inputString.compare("4")) {
            if (!doorLatch.checkOpen()) {
                double sum = 0.0;

                for (int i=0; i<10;i++)
                    sum += data[i];

                motor.moveMotor(sum/10.0);
            }
        }

        cout << endl;
    }

    return 0;
}

