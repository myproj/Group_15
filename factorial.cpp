#include <iostream>
#include "functions.h"
#include <iostream>


int factorial(int n){
<<<<<<< HEAD
	if(n<0)
	{
	std::cout<<"Negative Number entered| Re-enter the number"<<std::endl;
	std::cin>>n;	
	std::cout<<"Successfully Changed"<<std::endl;
} 

    if(n!=1){
=======
    if(n>=1){
>>>>>>> 788297249adcd93e950007e690a83aeeb2d09595
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
