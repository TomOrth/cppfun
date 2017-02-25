#include<iostream>

int main(){
    //cout example
    std::cout << "Hello";
    std::cout << " I am Tom!";

    //cout w/ endl
    std::cout << "\n" << "Hello again" << std::endl;
    std::cout << "Friend" << std::endl;
			
    //cin example
    int x;
    std::cout << "Input number for X: ";
    std::cin >> x;
    std::cout << "You inputted: " << x << "\n";
			
    return 0;
}
			
