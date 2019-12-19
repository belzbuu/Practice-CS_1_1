#include <stdio.h>

void sumAll(int *n, int *sum){
	drawSBox(50,0,30,10);
	gotoxy(52,3);
	printf("Enter n: ");
	gotoxy(65,3);
	scanf("%d",n);
	while(*n<0){
		gotoxy(52,4);printf("invalid input, enter again");
		gotoxy(65,3);
		scanf("%d",n);
	}

	
	*sum = *n*(*n+1)/2;
	
	gotoxy(52,5);
	printf("The Sum is: %d",*sum);
}
void aveAllDiv(int *n,float *ave){
	
	drawSBox(50,20,30,10);
	gotoxy(52,23);
	printf("Enter n: ");
	gotoxy(65,23);
	scanf("%d",n);
	while(*n < 0){
		gotoxy(52,24);printf("invalid input, enter again");
		gotoxy(65,23);
		scanf("%d",n);
	}
	int i;
	int sum = 0;
	int ctr = 0;
	for(i = 1; i <= *n;i++){
		if(i % 3 == 0){
			sum += i;
			ctr++;
		}
	}
	*ave = sum / (float)ctr;
	if(ctr == 0) *ave = 0.0;
	gotoxy(52,25);
	printf("The Average is: %.2f",*ave);

	
}
void swap(int *a, int *b,int *c,int *d){
	
	drawSBox(50,0,30,10);
	gotoxy(52,3);
	printf("Enter a: ");
	gotoxy(61,3);
	scanf("%d",a);
	gotoxy(52,4);
	printf("Enter b: ");
	gotoxy(61,4);
	scanf("%d",b);
	gotoxy(52,5);
	printf("Enter c: ");
	gotoxy(61,5);
	scanf("%d",c);
	gotoxy(52,6);
	printf("Enter d: ");
	gotoxy(61,6);
	scanf("%d",d);
	
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = *d;
	*d = temp;
		
	drawSBox(50,10,30,10);
	gotoxy(52,13);
	printf("New a: %d", *a);
	gotoxy(52,14);
	printf("New b: %d", *b);
	gotoxy(52,15);
	printf("New c: %d", *c);
	gotoxy(52,16);
	printf("New a: %d", *d);

	
}

void Exit(){
	
	gotoxy(80,25);
	printf("Program Terminated. Thank You!");
	
	
}

