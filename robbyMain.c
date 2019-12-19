#include <stdio.h>
#include <windows.h>
int main(){
	
	


	int x = 0;
	int y = 0;

	int rep = 1;
	
	char choice;
	char ex;
	while(rep){
		drawSBox(37,3,50,25);
		menu();
		graph();
		boxRobot(x,y);
		center(15,"Enter your choice: ");
		gotoxy(60,17);
		scanf("%c",&choice);
		switch(choice){
			
			case 'a':{
				initialize(&x,&y);
				gotoxy(0,25);
				system("pause");
				
				break;
			}
			case 'b':{
				printLocation(x,y);
				gotoxy(0,25);
				system("pause");
				break;
			}
			case 'c':{
				move(&x,&y);
				gotoxy(0,25);
				system("pause");
				break;
			}
			case 'd':{
			Exit();
			break;
			
			}
			
			
		
		}
		gotoxy(0,25);
	
		
		system("cls");
	}
	return 0;
	
}
