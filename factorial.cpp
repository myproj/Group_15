#include "functions.h"

int factorial(int n){
	if(n < 1) {
		std::cout << "Please enter a positive number: ";
		ctd::cin >> n;
	}
	if(n == 0)
		return 1;
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
