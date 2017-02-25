#include<iostream>

int main(){
    //dynamic allocation to 
    int *ptr = new int;
    
    //deallocate pointer memory
    delete ptr;
    
    //avoid dangling pointers by setting it to 0 (nullptr if C++11)
    ptr = 0;
    
    //will cause a seg fault
    std::cout << *ptr << std::endl;
    
    return 0;
}
