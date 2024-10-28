#include "BinModel01.h"
#include <iostream>


int main(){
    double S0, U, D, R;

    // changes are only in the ine below
    if (GetInputDataPtr(&S0, &U, &D, &R)==1) return 1;
    
    int n,i;
    std::cout <<  "Enter time step: "; std::cin >> n;
    std::cout <<  "Enter node: "; std::cin >> i;

    std::cout << "S(n, i) = " << S(S0, U, D, R, n, i) << std::endl;
    return 0;
}