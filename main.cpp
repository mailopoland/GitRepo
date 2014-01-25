#include <iostream>

#include "add.h"
#include "power.h"
#include "multiply.h"

using namespace std;

int main(){
	cout << pow( add(multiply(2,2), 4) ,3);
	return 0;
}
