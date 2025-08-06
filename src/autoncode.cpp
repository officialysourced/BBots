#include "main.h"
#include "autoncode.hpp"

extern pros::Motor intake;

void set_intake_speed(int speed) {
    intake.move(speed);
}

void combinedAutonRoutine() {


    pros::Motor left_front_motor(1);

    pros::Motor left_back_motor(2);

    pros::Motor right_front_motor(3);

    pros::Motor right_back_motor(4);

    // code starts here :)

    set_intake_speed(127); 
    left_front_motor.move(80);
    left_back_motor.move(80);
    right_front_motor.move(80);
    right_back_motor.move(80);
    pros::delay(2000);

    // Stop drive and intake
    set_intake_speed(0);
    left_front_motor.move(0);
    left_back_motor.move(0);
    right_front_motor.move(0);
    right_back_motor.move(0);



    // Turn left while outtaking
    set_intake_speed(-60);
    left_front_motor.move(60);
    left_back_motor.move(60);
    right_front_motor.move(-60);
    right_back_motor.move(-60);
    pros::delay(1000);

    // Stop drive and intake
    set_intake_speed(0);
    left_front_motor.move(0);
    left_back_motor.move(0);
    right_front_motor.move(0);
    right_back_motor.move(0);
    pros::delay(500);



    // Drive forward while running intake again
    set_intake_speed(127);
    left_front_motor.move(70);
    left_back_motor.move(70);
    right_front_motor.move(70);
    right_back_motor.move(70);
    pros::delay(1500);
    
    // Stop drive and intake
    set_intake_speed(0);
    left_front_motor.move(0);
    left_back_motor.move(0);
    right_front_motor.move(0);
    right_back_motor.move(0);
}