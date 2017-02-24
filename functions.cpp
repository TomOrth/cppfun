#include<iostream>

int math(int a, int b);

int main(){
	std::cout << math(1,2) << std::endl;
	return 0;
}

int math(int a, int b){
	return a+b;
}
