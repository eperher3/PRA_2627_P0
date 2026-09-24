#ifndef ROBOTICARM_H
#define ROBOTICARM_H

class RoboticArm {
private:
    double x;
    double y;
    double z;
    bool objetoSujeto;

public:
    RoboticArm();
    
    double get_x() { return x; }
    double get_y() { return y; }
    double get_z() { return z; }
    bool is_objetoSujeto() { return objetoSujeto; }
    
    bool grab();
    bool release();
    void move(double nuevo_x, double nuevo_y, double nuevo_z);
};

#endif
