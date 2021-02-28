/**
 * \filename pid.h (/pidcopy/src/pid.h,/home/neamul/eclipse-workspace/pidcopy/src/pid.h)
 * \ingroup pidcopy
 * \brief
 *
 * \date:   Created on: Nov 28, 2019
 * \author: neamul
 * \version: 0.0
 *
 * \remarks 
 *
 * \todo TODO
 */
#ifndef _PID_H_
#define _PID_H_

class PIDImpl;
class PID
{
    public:
        // Kp -  proportional gain
        // Ki -  Integral gain
        // Kd -  derivative gain
        // dt -  loop interval time
        // max - maximum value of manipulated variable
        // min - minimum value of manipulated variable
        PID( double dt, double max, double min, double Kp, double Kd, double Ki );

        // Returns the manipulated variable given a setpoint and current process value
        double calculate( double setpoint, double pv );
        ~PID();

    private:
        PIDImpl *pimpl;
};

#endif
