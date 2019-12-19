#include "robby.h"
#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include "myTools.h"
void initialize(int * x, int *y){
	*x = 0;
	*y = 0;
}

void printLocation(int x, int y){

	gotoxy(48,20);	printf("Robby's location is at %d,%d",x,y);
}

void move(int *x, int * y){
	gotoxy(42,20);
	printf("4-WEST , 8 - NORTH, 6 - EAST, 2 - SOUTH");
	gotoxy(60,22);
	int choice,units;
	scanf("%d",&choice);
	while(choice != 4 && choice != 8 && choice != 6 && choice != 2){
			gotoxy(50,24);
			printf("INVALID INPUT, PLEASE TRY AGAIN!");
			gotoxy(60,22);
			scanf("%d",&choice);
			
	}
	gotoxy(50,24);
	printf("                                ");
	gotoxy(45,22);printf("How many units? ");

	scanf("%d",&units);
	switch(choice){
		case 4:{
			*x -= units; 
			break;
		}
		case 8:{
			*y += units;
			break;
		}
		case 6:{
			*x += units;
			break;
		}
		case 2:{
			*y -= units;
			break;
		}
		default:{
			break;
		}
	}
}

void graph(){
	
	int i,j;
	
	for(i = 0; i < 20;i++){
		gotoxy(13,0+i);printf("|");
	}
	for(j = 0; j < 30;j++){
		gotoxy(0+j,i/2);printf("-");
	}
	
	
}
void boxRobot(int x, int  y){
	
	gotoxy(13+x,7+(y*-1));printf(" () ");
	gotoxy(13+x,8+(y*-1));printf("-[]-");
	gotoxy(13+x,9+(y*-1));printf(" ||");
	
	if(y > 7){
		gotoxy(0,15);printf("Robby died");
	}
	
}
void Exit(){
	
	
		gotoxy(50,25);
		printf("Program Terminated, Thank you!!");
		exit(0);
}


//
//
//void repeat(int * xp, int *yp){
//	int rep = 1;
//
//	
//	char choice;
//	char ex;
//	while(rep){
//		drawSBox(37,3,50,25);
//		menu();
//		center(15,"Enter your choice: ");
//		gotoxy(60,17);
//		scanf("%c",&choice);
//		switch(choice){
//			
//			case 'a':{
//				initialize(xp,yp);
//				gotoxy(0,25);
//				system("pause");
//				
//				break;
//			}
//			case 'b':{
//				printLocation(*xp,*yp);
//				gotoxy(0,25);
//				system("pause");
//				break;
//			}
//			case 'c':{
//				move(xp,yp);
//				gotoxy(0,25);
//				system("pause");
//				break;
//			}
//			case 'd':{
//				gotoxy(50,25);
//				printf("Program Terminated, Thank you!!");
//				exit(0);
//			
//			}
//			
//			
//		
//		}
//		gotoxy(0,25);
//	
//		
//		system("cls");
//		repeat(xp,yp);
//	}
//}
