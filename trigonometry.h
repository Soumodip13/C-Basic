

#ifndef BASIC_C_TRIGONOMETRY_H
#define BASIC_C_TRIGONOMETRY_H

#include <math.h>
#define PI 3.14
double cot(double a){
    double b,v;
    b=a*PI/180;
    v=cos(b)/sin(b);
    return(v);
}

#endif
