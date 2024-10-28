#include <iostream>
#include <cmath>

int main(){
    double S0, U, D, R;

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


    int n = 5, i = 2;

    std::cout << "S(n, i) = " << S0 * pow(1+U, i) * pow(1+D, n-i) << std::endl;
    return 0;
}
