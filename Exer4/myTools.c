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
   
   int col = 16;
   gotoxy(col,row);printf("%s",str);   
   

}

void menu(){
	

	center(5,"[a] Sum");
	center(6,"[b] Average");
	center(7,"[c] Swap");
	center(8,"[d] Exit");

	center(11,"Enter your choice: ");
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

    

