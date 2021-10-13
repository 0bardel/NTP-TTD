#include "TestLab.h"
#include <iostream>

int main(){

TEST *a = new TEST();
std::cout << "Test " << whatever(*a) << std::endl;

#ifdef MY_VARIABLE
delete a;
#endif
return 0;
}

// Output
//Test 0
//g++ TestLab.cpp main.cpp -o main

