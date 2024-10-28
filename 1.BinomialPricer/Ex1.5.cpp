#include "BinModel01.h"
#include "Options01.h"
#include <iostream>
#include <cmath>

long long factorial(int x){
    long long res = 1;
    while(x>0){
        res = res * x;
        x--;
    }
    return res;
}


double PricebyCRRExplicit(double S0, double U, double D, double R, int N, double K){
    double q = RiskNeutProbability(U, D, R);

    double price = 0;
    for(int i = 0;i<=N;i++){
        price += (factorial(N) * pow(q, i)* pow(1-q, N-i) * OptionPayOff(S(S0, U,D,R, N, i), K, true))/(factorial(i)*factorial(N-i));
    }
    return price/pow(1+R, N);
}

int main(){
    double S0,U,D,R;

    if(GetInputData(S0, U,D,R)==1) return 1;

    double K;
    int N;

    std::cout << "Enter call option data:"<<std::endl;
    GetInputData(N, K);

    std::cout << "European call option price = " << PricebyCRRExplicit(S0, U,D,R,N,K) << std::endl;

    return 0;
}