#include "BinModel01.h"
#include "Options01.h"
#include <iostream>


double PricebyCRRWhileLoop(double S0, double U, double D, double R, int N, double K){
    double q = RiskNeutProbability(U, D, R);

    double price[N+1];

    int i = 0;
    while(i<=N){
        price[i] = OptionPayOff(S(S0, U, D, R, N, i), K, true);
        i++;
    }

    int n = N-1;
    while(n>=0){
        i = 0;
        while(i<=N){
            price[i] = (q * price[i+1] + (1-q)*  price[i])/(1+R);
            i++;
        }
        n--;
    }
    return price[0];
}

int main(){
    double S0,U,D,R;

    if(GetInputData(S0, U,D,R)==1) return 1;

    double K;
    int N;

    std::cout << "Enter call option data:"<<std::endl;
    GetInputData(N, K);

    std::cout << "European call option price = " << PricebyCRRWhileLoop(S0, U,D,R,N,K) << std::endl;

    return 0;
}