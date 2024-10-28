#ifndef Options01_h
#define Options01_h

int GetInputData(int& N, double& K);
double PricebyCRR(double S0, double U, double D, double R, int N, double x);
double OptionPayOff(double z, double K, bool call);
double RiskNeutProbability(double U, double D, double R);

#endif