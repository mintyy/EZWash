#include <iostream>
#include "EZCycle.h"
#include "EZWashController.h"
#include "HeaterController.h"
#include "Sensor.h"
#include "SoilOptions.h"
#include "Timer.h"
#include "WashOption.h"

using namespace std;

heaterController myHeater;
soilOptions mySoil;
EZCycle myCycle;

void EZWashController::buttonMatrixController() {

    int wMode;
    int sLevel;

    std::cout << "Welcome to the EZ-Wash Demo!\n";
    std::cout << "Select one of the following wash modes by entering the corressponding number:\n";
    
    std::cout << "1. Standard\n";
    std::cout << "2. High Temperature\n";
    std::cout << "3. Detergent Saver\n";
    cin >> wMode;

    std::cout << "Select one of the following soil levels by entering the corressponding number:\n";
    
    std::cout << "1. Low";
    std::cout << "2. Medium";
    std::cout << "3. Heavy";
    cin >> sLevel;

    std::cout << "Cycle starting...";

    if (wMode == 2) {
        highTemperatureWash(sLevel);
    } else if (wMode == 3) {
        detergentSaverWash();
    } else {
            wash(sLevel);
    }

}

void EZWashController::wash(int soilLevel) {
   
}

void EZWashController::rinse() {
    //do rinse functionaility
    //outside scope?
}

void EZWashController::standardWash() {
    
}

void EZWashController::highTemperatureWash(int soilLevel) {
   
}

void EZWashController::detergentSaverWash() {
    
}
