#include <iostream>


void print_array(int arr[], int size){
    for(int i = 0;i<size;i++){
        std::cout << arr[i] << " "; 
    }
    std::cout << std::endl;
    return;
}

void interchange(int& x, int& y){
    int tmp = x;
    x = y;
    y = tmp;
    return;
}


void bubblesort(int arr[], int size){
    for(int i = 0;i<size;i++){
        for(int j = 0;j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                interchange(arr[j], arr[j+1]);
            }
        }
    }
    return;
}


int main(){
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
}