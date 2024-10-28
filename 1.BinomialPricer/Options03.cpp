#include "Options03.h"
#include "BinModel01.h"
#include "PayOff01.h"
#include <iostream>
#include <cmath>

int GetInputData(int& N, double& K){
    std::cout << "Enter steps to expiry N: "; std::cin >> N; 
    std::cout << "Enter strike price k: "; std::cin >> K;
    std::cout << std::endl;

    return 0; 
}

int GetInputDataParams(int& N, int NoOfParams, double Params[])
{
   std::cout << "Enter steps to expiry N: "; std::cin >> N;
   for (int n=0; n<NoOfParams; n++)
   {
      std::cout << "Enter payoff parameter " << n+1
           << " of " << NoOfParams << ": ";
      std::cin >> Params[n];
   }
   std::cout << std::endl;
   return 0;
}

double RiskNeutProbability(double U, double D, double R){
    return (R - D)/(U-D);
}

double PricebyCRR(double S0, double U, double D, double R, int N, double K, double (*Payoff)(double z, double K)){
    double q = RiskNeutProbability(U, D, R);

    double price[N+1];

    for(int i = 0;i<=N;i++){
        *(price + i) = Payoff(S(S0, U, D, R, N, i), K);
    }

    for(int n = N-1;n>=0;n--){
        for(int i = 0;i<=n;i++){
            *(price + i) = (q * (*(price + i + 1)) + (1-q)* (*(price + i))/(1+R));
        }
    }
    return *price;
}

double PricebyCRRMultipleArgPayOff(double S0, double U, double D, double R, int N, double params[], double (*Payoff)(double z, double params[])){
    double q = RiskNeutProbability(U, D, R);

    double price[N+1];

    for(int i = 0;i<=N;i++){
        *(price + i) = Payoff(S(S0, U, D, R, N, i), params);
    }

    for(int n = N-1;n>=0;n--){
        for(int i = 0;i<=n;i++){
            *(price + i) = (q * (*(price + i + 1)) + (1-q)* (*(price + i))/(1+R));
        }
    }
    return *price;
}