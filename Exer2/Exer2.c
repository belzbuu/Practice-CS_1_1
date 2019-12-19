#include <stdio.h>
#include <windows.h>
/*
  Name: Raphael James Marie Anthony C. Mansueto
  Date: November 14, 2019
  Description: A C program that displays the pattern below
							    1
							   121
							  12321
							 1234321
	In the example, n = 4.
*/
void repeat();
int getNum();
void display(int n);
int main (){

repeat();


return 0;
}

int getNum(){
	int n;
	scanf("%d",&n);
	while(n < 0){
		printf("Invalid Number, please enter again: ");
		scanf("%d",&n);
	}
	return n;
}


void display(int n){
	
	int i = 1;
	int j = 1;
	int ctr =1;
	int ctr2 = 1;
	int nj = 1;
	//Determines the number of rows
	while(i <= n){
		j= 1;
		//Loop the left half of the pattern
		while(j <= n){
			if(j >= n-i+1){
				printf("%d",ctr);
				ctr++;
			}else{
				printf(" ");
			}
			j++;
		}
		if(i > 1){
			nj = 1;
			while(nj <= n){
					if(nj <= i-1){
						printf("%d",ctr2);
						ctr2--;
					}
					nj++;
			}
		}
		ctr =1;
		ctr2 = i;
		printf("\n");
		i++;
	}	
}


void repeat(){
	
	int x = 1;
	int n;
	while(x > 0){

		printf("Enter a number: ");
		n = getNum();
		display(n);
		printf("Would you like to continue: (1 - Yes || 0 - No): ");
		scanf("%d",&x);
		system("cls");
	}
}
