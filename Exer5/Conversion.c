#include <stdio.h>

void convertTime(int time, int* hours, int* mins, int* sec){
	
	

	*hours = time/3600;
	*mins = time%3600/60;
	*sec = time % 60;
	

	
}
void displayTime(int time, int* hours, int* mins, int* sec){
	
	drawSBox(49,8,40,10);
	gotoxy(50,9);printf("%d seconds is equal to,",time);
	gotoxy(50,10);printf("%d hour(s), %d minute(s),%d second(s)",*hours,*mins,*sec);
}
void computeCoin(int coinValue, int* quarter, int* dime, int* penny){
	
	*quarter = coinValue/25;
	*dime = coinValue%25/10;
	*penny = coinValue%25%10;
}
void displayCoin(int coinValue, int* quarter, int* dime, int* penny){
	drawSBox(49,8,40,10);
	gotoxy(50,9);printf("%d cents can be given as,",coinValue);
	gotoxy(50,10);printf("%d quarter(s), %d dime(s), %d pennies",*quarter,*dime,*penny);
	
}


void Exit(){
	
	gotoxy(85,25); printf("Program Terminated. Thank you!");
	
	
}
