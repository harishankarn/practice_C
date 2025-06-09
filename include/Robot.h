#ifndef ROBOT_H
#define ROBOT_H

#include <string>
#include "Gripper.h"
class Robot {
    private:
        std::string m_name; // member variable for the robot's name
        Gripper *m_gripper; // pointer to a Gripper member variable
    public:
        Robot (const std::string &name, Gripper *gripper);
        void task();
        ~Robot();
};
#endif
