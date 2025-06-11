#ifndef GRIPPER_H
#define GRIPPER_H

class Gripper{
public:
    virtual void grip() = 0;
    virtual void release() = 0;
    virtual ~Gripper() = default;
};
#endif

