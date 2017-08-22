#include "functions.h"
#include <iostream>

int factorial(int n){
    if(n>=1){
	return(n * factorial(n-1));
    }
    else if(n < 0){

    	while(n < 0){
    		std::cout<<"Negative no. entered! Re-enter n : ";
    		std::cin>>n;
    	}
    	return (n * factorial(n - 1));
    }
    else
    	return 1;
}
