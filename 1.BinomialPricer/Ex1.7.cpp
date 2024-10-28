#include <iostream>

void interchange(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
    return;
}


void print_array(int arr[], int size){
    for(int i = 0;i<size;i++){
        std::cout << arr[i] << " "; 
    }
    std::cout << std::endl;
    return;
}

void bubblesort(int arr[], int size){
    for(int i = 0;i<size;i++){
        for(int j = 0;j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                interchange(&arr[j], &arr[j+1]);
            }
        }
    }
    return;
}


int main(){
    int a, b;


    // swap code
    // inputting data
    std::cout << "Enter a: "; std::cin >> a;
    std::cout << "Enter b: "; std::cin >> b;

    // exchanging them
    std::cout << "a and b before interchanging" << std::endl;
    std::cout << "a =  " << a << "  b = "<< b << std::endl;

    interchange(&a, &b);

    std::cout << "a and b after interchanging" << std::endl;
    std::cout << "a =  " << a << "  b = "<< b << std::endl;


    // bubblesort checker
    int size;
    std::cout << "Enter the size of the array: "; std::cin>>size;

    int array[size];
    for(int i  = 0;i<size;i++){
        std::cout << "Enter next element of the array: "; std::cin>>array[i];   
    }

    std::cout << "Array before sorting"<< std::endl;
    print_array(array, size);

    bubblesort(array, size);

    std::cout << "Array after sorting"<< std::endl;
    print_array(array, size);


    return 0;
}


