//============================================================================
// Name        : pidcopy.cpp
// Author      : Neamul
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "pid.h"
#include <stdio.h>

int main() {

    PID pid = PID(0.1, 6, -6, 0.1, 0.01, 0.5);
    double sp=5.0;
    double val = 0;
    for (int i = 0; i < 20; i++) {
        double inc = pid.calculate(sp, val);
        printf("val:% 7.3f inc:% 7.3f \n", val, inc);
        val += inc;
    }

    return 0;
}
