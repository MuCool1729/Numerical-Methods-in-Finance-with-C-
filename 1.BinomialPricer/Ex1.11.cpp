#include "BinModel01.h"
#include "Options03.h"
#include "PayOff01.h"
#include <iostream>

int main(){
    double S0,U,D,R;

    if(GetInputData(S0, U,D,R)==1) return 1;

    double CallParams[1];
    int N;

    std::cout << "Enter call option data:"<<std::endl;
    GetInputDataParams(N,1, CallParams);
    std::cout << "European call option price = " << PricebyCRRMultipleArgPayOff(S0, U,D,R,N, CallParams, CallPayOffMultipleArgs) << std::endl;

    double DoubleDigitCallParams[2];
    std::cout << "Enter Double Digit call option data:"<<std::endl;
    GetInputDataParams(N,2, DoubleDigitCallParams);
    std::cout << "European Digit call option price = " << PricebyCRRMultipleArgPayOff(S0, U,D,R,N, DoubleDigitCallParams, DoubleDigitCallPayOffMultipleArgs) << std::endl;

    return 0;
}