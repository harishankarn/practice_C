#ifndef TWOFINGERGRIPPER_H
#define TWOFINGERGRIPPER_H

#include "Gripper.h"

class TwoFingerGripper: public Gripper {
public:
    void grip() override;
    void release() override;
    ~TwoFingerGripper() override = default;
};

#endif
