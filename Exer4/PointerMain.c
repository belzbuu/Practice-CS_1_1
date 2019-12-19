#include "Pointer2.h"
#include "myTools.h"
#include <windows.h>
#include <stdio.h>
int main(){
	
	
	int n;
	int sum;
	float ave;
	char choice;
	
	int a,b,c,d;
	while(1){
		drawSBox(10,0,30,20);
		menu();
		scanf("%c",&choice);
		switch(choice){
			
			case 'a':{
				sumAll(&n,&sum);
				gotoxy(80,25);
				system("pause");
				system("cls");

				break;
			}
			
			case 'b':{
				aveAllDiv(&n,&ave);
				gotoxy(80,25);
				system("pause");
				system("cls");
				break;
			}
			
			case 'c':{
				swap(&a,&b,&c,&d);
					gotoxy(80,25);
				system("pause");
				system("cls");
				break;
			}
			case 'd':{
				Exit();
				return 0;
				break;
			}
		}
		
	}
	
}
