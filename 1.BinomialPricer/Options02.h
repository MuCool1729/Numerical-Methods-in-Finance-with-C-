#ifndef Options02_h
#define Options02_h

int GetInputData(int* ptrN, double* ptrK);
double PricebyCRR(double S0, double U, double D, double R, int N, double x);
double OptionPayOff(double z, double K, bool call);
double RiskNeutProbability(double U, double D, double R);

#endif