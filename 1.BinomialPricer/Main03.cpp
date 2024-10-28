#include <iostream>
#include <cmath>


int GetInputData(double& S0, double& U, double& D, double& R){
    //inputting data
    std::cout << "Enter S0: "; std::cin >> S0;
    std::cout << "Enter U: "; std::cin >> U;
    std::cout << "Enter D: "; std::cin >> D;
    std::cout << "Enter R: "; std::cin >> R;

     //ensuring input makes sense, S0 > 0, U>D>-1, R>-1
    if (S0 <= 0.0 || U<=-1.0 || D<=-1.0 || U<=D || R<=-1.0){
        std::cout<< "Illegal data values" << std::endl;
        std::cout<< "Terminating the program" << std::endl;
        return 1;
    }

    // checking arbitrage
    if (R >= U || R <= D){
        std::cout<< "Arbitrage exists, U>R>D not satisfied" << std::endl;
        std::cout<< "Terminating the program" << std::endl;
        return 1;
    }

    std::cout << "Input is all okay" << std::endl;

    return 0;
}

double S(double S0,double U, double D, double R, int n, int i){
    return S0 * pow(1+U, i) * pow(1+D, n-i);
}

int main(){
    double S0, U, D, R;

    if (GetInputData(S0, U, D, R)==1) return 1;
    
    int n,i;
    std::cout <<  "Enter time step: "; std::cin >> n;
    std::cout <<  "Enter node: "; std::cin >> i;

    std::cout << "S(n, i) = " << S(S0, U, D, R, n, i) << std::endl;
    return 0;
}
