#include<iostream>

int main(){
    int array[5] = {9,7,5,3,1};

    //print the memory address of the array variable
    std::cout << "The array has address: " << array << std::endl;

    //print the address of the array elements
    std::cout << "Element 0 has address: " << &array[0] << std::endl;
    
    //dereferencing an array prints the 0 index value
    std::cout << "Element 0 value is : " << *array << std::endl;
    return 0;
}
