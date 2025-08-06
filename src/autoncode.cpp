#include "main.h"
#include "autoncode.hpp"

void combinedAutonRoutine() {
    // Do not delete these lines - they are needed for chassis control
    pros::Motor left_front_motor(1);
    pros::Motor left_back_motor(2);
    pros::Motor right_front_motor(3);
    pros::Motor right_back_motor(4);
// Sample code: 
    left_front_motor.move(80);
    left_back_motor.move(80);
    right_front_motor.move(80);
    right_back_motor.move(80);
    pros::delay(2000);
    left_front_motor.move(0);
    left_back_motor.move(0);
    right_front_motor.move(0);
    right_back_motor.move(0);

    left_front_motor.move(60);
    left_back_motor.move(60);
    right_front_motor.move(-60);
    right_back_motor.move(-60);
    pros::delay(1000);
    left_front_motor.move(0);
    left_back_motor.move(0);
    right_front_motor.move(0);
    right_back_motor.move(0);
    pros::delay(500);

    left_front_motor.move(70);
    left_back_motor.move(70);
    right_front_motor.move(70);
    right_back_motor.move(70);
    pros::delay(1500);
    left_front_motor.move(0);
    left_back_motor.move(0);
    right_front_motor.move(0);
    right_back_motor.move(0);
}
