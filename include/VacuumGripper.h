#ifndef VACUUM_GRIPPER_H
#define VACUUM_GRIPPER_H

#include "Gripper.h"
class VacuumGripper: public Gripper {
public:
    void grip() override;
    void release() override;
    ~VacuumGripper() override = default;
};  

#endif