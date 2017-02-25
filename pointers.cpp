#include<iostream>

int main(){
    int value = 5;
    //set to memory address of variable value
    int *ptr = &value;
    
    //&ptrname or ptrname prints out the pointer's memory address 
    std::cout << &ptr << std::endl;
    //*ptrname prints out the value (dereferencing
    std::cout << *ptr << std::endl;
    
    //*ptr is the same as value since it has the same memory address
    *ptr = 7;
    std::cout << value << std::endl;
}
