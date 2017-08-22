#include <iostream>
#include "functions.h"


int factorial(int n){
	if(n<0)
	{
	std::cout<<"Negative Number entered| Re-enter the number"<<std::endl;
	std::cin>>n;	
	std::cout<<"Successfully Changed"<<std::endl;
} 

    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
