
#include "Conversion.h"
#include "myTools.h"
#include <stdio.h>


int main(){
	
	char choice;
	int time;
	int hours;
	int mins;
	int sec;
	int coinValue;
	int quarter;
	int dime;
	int penny;
	int timeOrcoin;
	while(1){
		drawSBox(10,0,30,20);
		menu();
		scanf("%c",&choice);
		switch(choice){
			
			case 'a':{
				drawSBox(49,2,30,5);
				
				gotoxy(50,3);printf("Enter time in seconds:");
				gotoxy(50,4);scanf("%d",&time);
				convertTime(time,&hours,&mins,&sec);
				
				break;
			}
			case 'b':{
				drawSBox(49,2,30,5);
				gotoxy(50,3);printf("Enter coin value:");
				gotoxy(50,4);scanf("%d",&coinValue);
				while(coinValue <= 0 || coinValue > 100){
					gotoxy(50,4);printf("                   ");
					gotoxy(50,5);printf("Invalid Input");
					gotoxy(50,4);scanf("%d",&coinValue);
				}
				computeCoin(coinValue,&quarter,&dime,&penny);
				
				break;
			}
			case 'c':{
				gotoxy(50,4);printf("Display Time - 1 || Coin - 2");
				gotoxy(50,5);scanf("%d",&timeOrcoin);
				switch(timeOrcoin){
					case 1:{
						displayTime(time,&hours,&mins,&sec);
						gotoxy(85,25);system("pause");
						break;
					}
					case 2:{
						displayCoin(coinValue,&quarter,&dime,&penny);
						gotoxy(85,25);system("pause");
						break;
					}
				}
			
				break;
			}
			
			case 'd':{
				Exit();
				return 0;
				break;
			}
		}
		system("cls");
	}
	
		
		
	gotoxy(60,25);
	return 0;
}


