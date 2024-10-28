#include "BinModel01.h"
#include "Options03.h"
#include "PayOff01.h"
#include <iostream>

int main(){
    double S0,U,D,R;

    if(GetInputData(S0, U,D,R)==1) return 1;

    double K;
    int N;

    std::cout << "Enter Digit call option data:"<<std::endl;
    GetInputData(N, K);

    std::cout << "European Digit call option price = " << PricebyCRR(S0, U,D,R,N,K, DigitCallPayOff) << std::endl;

    std::cout << "Enter Digit put option data:"<<std::endl;
    GetInputData(N, K);

    std::cout << "European Digit put option price = " << PricebyCRR(S0, U,D,R,N,K, DigitPutPayOff) << std::endl;

    return 0;
}