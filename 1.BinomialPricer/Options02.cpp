#include "Options02.h"
#include "BinModel01.h"
#include <iostream>
#include <cmath>

int GetInputData(int* N, double* K){
    std::cout << "Enter steps to expiry N: "; std::cin >> *N; 
    std::cout << "Enter strike price k: "; std::cin >> *K;
    std::cout << std::endl;

    return 0; 
}

double RiskNeutProbability(double U, double D, double R){
    return (R - D)/(U-D);
}

double OptionPayOff(double S, double K, bool call = true){
    double payoff = abs(S-K);
    if(K>S & !call) return payoff;
    if(S>K & call) return payoff;
    return 0.0;
}


double PricebyCRR(double S0, double U, double D, double R, int N, double K){
    double q = RiskNeutProbability(U, D, R);

    double price[N+1];

    for(int i = 0;i<=N;i++){
        *(price + i) = OptionPayOff(S(S0, U, D, R, N, i), K, true);
    }

    for(int n = N-1;n>=0;n--){
        for(int i = 0;i<=n;i++){
            *(price + i) = (q * (*(price + i + 1)) + (1-q)* (*(price + i))/(1+R));
        }
    }
    return *price;
}