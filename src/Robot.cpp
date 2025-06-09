#include <iostream>
#include <Robot.h>

Robot::Robot(const std::string &name, Gripper *gripper) 
    : m_name(name), m_gripper(gripper) {}
// member initilization to prevent two object from creating

void Robot::task(){
    m_gripper->grip();
    m_gripper->release();
}
