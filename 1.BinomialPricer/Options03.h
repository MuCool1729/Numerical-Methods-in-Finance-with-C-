#ifndef Options03_h
#define Options03_h

int GetInputData(int& N, double& K);
int GetInputDataParams(int& N, int NoOfParams, double Params[]);
double PricebyCRR(double S0, double U, double D, double R, int N, double K, double (*Payoff)(double z, double K));
double CallPayOff(double z, double K);
double PutPayOff(double z, double K);
double RiskNeutProbability(double U, double D, double R);
double PricebyCRRMultipleArgPayOff(double S0, double U, double D, double R, int N, double params[], double (*Payoff)(double z, double params[]));
#endif