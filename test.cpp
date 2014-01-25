#include <iostream>
#include "add.h"
#include "multiply.h"
#include "power.h"

void areEquals( double excepted, double got){
	if (excepted != got){
		std::cout << "Expected: " << excepted << " but got: " << got << "\n";
	}
	else{
		std::cout << "Test passed!\n";
	}
}

int main(){
	areEquals(4 , add(2,2));
	areEquals(8 , multiply(2,4));
	areEquals(27 , pow(3,3));
} 
