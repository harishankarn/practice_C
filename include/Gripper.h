#ifndef GRIPPER_H
#define GRIPPER_H

class Gripper{
public:
    virtual void grip();
    virtual void release();
    virtual ~Gripper();
};
#endif

