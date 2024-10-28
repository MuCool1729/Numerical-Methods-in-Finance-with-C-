#ifndef PayOff01_h
#define PayOff01_h

double CallPayOff(double z, double K);
double PutPayOff(double z, double K);
double DigitCallPayOff(double z, double K);
double DigitPutPayOff(double z, double K);
double CallPayOffMultipleArgs(double z, double params[]);
double DoubleDigitCallPayOffMultipleArgs(double z, double params[]);

#endif