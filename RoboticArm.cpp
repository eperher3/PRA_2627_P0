#include "RoboticArm.h"
RoboticArm::RoboticArm() {
    x = 0.0;
    y = 0.0;
    z = 0.0;
    objetoSujeto = false;
}


double RoboticArm::get_x() { 
    return x; 
}

double RoboticArm::get_y() { 
    return y; 
}

double RoboticArm::get_z() { 
    return z; 
}

bool RoboticArm::is_objetoSujeto() { 
    return objetoSujeto; 
}


bool RoboticArm::grab() {
    if (!objetoSujeto) {
        objetoSujeto = true;
        return true; 
    }
    return false; 
}


bool RoboticArm::release() {
    if (objetoSujeto) {
        objetoSujeto = false;
        return true; 
    }
    return false; 
}

void RoboticArm::move(double nuevo_x, double nuevo_y, double nuevo_z) {
    x = nuevo_x;
    y = nuevo_y;
    z = nuevo_z;
}
