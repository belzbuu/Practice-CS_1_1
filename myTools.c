#include <stdio.h>
#include<windows.h>
void gotoxy(int x, int y)
{
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void center(int row, char str[]){ 
   
   int col = 53;
   gotoxy(col,row);printf("%s",str);   
   

}

void menu(){
	

	center(5,"ROBBY THE ROBOT");
	center(7,"a - origin");
	center(8,"b - location");
	center(9,"c - move");
	center(10,"d - exit");

}



void drawSBox(int x1,int y1, int x2, int y2){
	
	int h = y2;
	int w = x2;
	int i,j,k;
	for(i = 0; i < h ; i++){
		for(j = 0; j < w;j++){
			gotoxy(x1+j,y1+i);
			if(i == 0 && j == 0){
				printf("%c",218);
			}else if(i == 0 && j == w-1){
				printf("%c",191);
			}else if(i == h-1 && j ==0){
				printf("%c",192);
			}else if(i == h-1 && j == w-1){
				printf("%c",217);
			}else if(j == 0 || j == w-1){
				printf("%c",179);
			
			}else if(i == 0 || i == h-1 ){
				printf("%c",196);
			}
			else{
				printf(" ");
			}
		}
	}
	
	
}

void drawLBox(int x, int y, int h, int w){
	
	gotoxy(x,y);printf("%c",201);
	int i,j;
	for(i = 1; i < w;i++){
		gotoxy(x+i,y);printf("%c",205);
	}
	gotoxy(x+i,y);printf("%c",187);
	for(j = 1; j<h;j++){
		gotoxy(x+i,y+j);printf("%c",186);
		gotoxy(x,y+j);printf("%c",186);
	}
	gotoxy(x,y+i);printf("%c",200);
	for(i = 1; i < w;i++){
		gotoxy(x+i,y+j);printf("%c",205);
	}
	gotoxy(x+i,y+j);printf("%c",188);

}

void outString(int row, int col, char str[]){
	
	
	gotoxy(row,col); printf("%s",str);
	
	
}

    

