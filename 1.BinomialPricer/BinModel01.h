#ifndef BinModel01_h
#define BinModel01_h

#include <iostream>
#include <cmath>

double S(double S0, double U, double D, double R, int n, int i);
int GetInputData(double& S0, double& U, double& D, double& R);
int GetInputDataPtr(double* S0, double* U, double* D, double* R);

#endif