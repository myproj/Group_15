#include <iostream>
#include "functions.h"
#include <iostream>


int factorial(int n){

    if(n < 0)
        return -1;
    
    if(n>=1){
	   return(n * factorial(n-1));
    }
    else
        return 1;
}
