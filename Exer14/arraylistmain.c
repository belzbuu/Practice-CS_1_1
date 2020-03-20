#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "arraylist.h"
int main(){
	
	
	int choice;
	int size;
	int elem,item;
	List s1;
	while(1){
		menu();
		printf("Enter choice: ");
		scanf("%d",&choice);
		switch(choice){

			case 1:{
				printf("Enter list size: ");
				scanf("%d",&size);
				s1 = newList(size);
				break;
			}
			case 2:{
				printf("Is empty: %d\n",isEmpty(s1));
				break;
			}
			
			case 5:{
				printf("Enter an item: ");
				scanf("%d",&item);
				addEnd(s1,item);
				break;
			}
			
			case 3:{
				display(s1);
				break;
			}

			case 8:{
				printf("Enter index: ");
				scanf("%d",&item);
				Remove(s1,item);
				break;
			}
			
			case 6:{
				printf("Enter index: ");
				scanf("%d",&elem);
				printf("Enter item: ");
				scanf("%d",&item);
				insertAfter(s1,item,elem);
				break;
			}
			
			
			case 4:{
				printf("Enter item: ");
				scanf("%d",&item);
				addFront(s1,item);
				break;
			}
			
			case 7:{
				removeFront(s1);
				break;
			}
			case 9:{
				printf("Enter item: ");
				scanf("%d",&item);
				printf("Contains %d: %d\n",item,contains(s1,item));
				break;
			}
			
			
			
			
		}
		
		
		
		
		system("pause");
		system("cls");
	}
	
	


	
	return 0;
}



