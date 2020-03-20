#include <stdio.h>
long factorial(int n){
	
	if(n == 0){
		return 1;
	}
	return n*factorial(n-1);
	
	
}
int fibonacci(int n){
	if(n == 0){
		return 0;
	}else if(n < 2){
		return 1;
	}
	return fibonacci(n-1) + fibonacci(n-2);
}
int tribonacci(int n){
	if(n == 0) return 0;
	if(n < 3){
		return 1;
	}
	return tribonacci(n-1)+ tribonacci(n-2) + tribonacci(n-3) ;
}
int sumNos(int n){
	if(n == 1){
		return 1;
	}
	return n + sumNos(n-1);
}
long decimalBinary(int n){
	if (n == 0)  
        return 0;  
    else
        return (n % 2 + 10 *  
                decimalBinary(n / 2)); 
}
void menu(){
	printf("1.FACTORIAL\n2.FIBONACCI\n3.TRIBONACCI\n4.SUMNOS\n5.DECIMALBINARY\n");
}

