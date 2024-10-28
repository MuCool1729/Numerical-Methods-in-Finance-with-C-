#include "BinModel01.h"
#include "Options02.h"
#include <iostream>

int main(){
    double S0,U,D,R;

    if(GetInputData(S0, U,D,R)==1) return 1;

    double K;
    int N;

    std::cout << "Enter call option data:"<<std::endl;
    GetInputData(&N, &K);

    std::cout << "European call option price = " << PricebyCRR(S0, U,D,R,N,K) << std::endl;

    return 0;
}