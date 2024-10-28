#include "PayOff01.h"

double CallPayOff(double S, double K){
    if (S>K){
        return S-K;
    }
    return 0.0;
}

double PutPayOff(double S, double K){
    if (K>S){
        return K-S;
    }
    return 0.0;
}

double DigitPutPayOff(double S, double K){
    if (K>S){
        return 1.0;
    }
    return 0.0;
}
double DigitCallPayOff(double S, double K){
    if (S>K){
        return 1.0;
    }
    return 0.0;
}
double CallPayOffMultipleArgs(double z, double params[]){
    return CallPayOff(z, params[0]);
}
double DoubleDigitCallPayOffMultipleArgs(double z, double params[]){
    double K1 = params[0];
    double K2 = params[1];
    if (( z> K1) & (z<K2)) return 1.0;
    return 0.0;
}