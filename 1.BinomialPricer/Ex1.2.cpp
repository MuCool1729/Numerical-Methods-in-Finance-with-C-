#include <iostream>

void interchange(double& a, double& b){
    double tmp = a;
    a = b;
    b = tmp;
    return;
}


int main(){
    double a, b;

    // inputting data
    std::cout << "Enter a: "; std::cin >> a;
    std::cout << "Enter b: "; std::cin >> b;

    // exchanging them
    std::cout << "a and b before interchanging" << std::endl;
    std::cout << "a =  " << a << "  b = "<< b << std::endl;

    interchange(a, b);

    std::cout << "a and b after interchanging" << std::endl;
    std::cout << "a =  " << a << "  b = "<< b << std::endl;

    return 0;
}
