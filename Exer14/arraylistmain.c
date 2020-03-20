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
				if(s1->count == s1->size){
					s1->size *= 2;
					s1 = (List) realloc(s1,s1->size*sizeof(List));
					s1->items = (int*) realloc(s1->items,s1->size*sizeof(int));
				}
				printf("Enter an item: ");
				scanf("%d",&item);
				while(isUnique(s1,item) != 1){
					printf("element must be unique!\n");
					printf("Enter item: ");
					scanf("%d",&item);
				}
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
				while(item >= s1->count){
					printf("INVALID INDEX, ENTER AGAIN!\n");
					printf("Enter index: ");	
					scanf("%d",&item);
				}
				Remove(s1,item);
				break;
			}
			
			case 6:{
				if(s1->count == s1->size){
					s1->size *= 2;
					s1 = (List) realloc(s1,s1->size*sizeof(List));
					s1->items = (int*) realloc(s1->items,s1->size*sizeof(int));
				}
				printf("Enter index: ");
				scanf("%d",&elem);
				while(elem >= s1->count){
					printf("INVALID INDEX, ENTER AGAIN!\n");
					printf("Enter index: ");	
					scanf("%d",&elem);
				}
				printf("Enter item: ");
				scanf("%d",&item);
				while(isUnique(s1,item) != 1){
					printf("element must be unique!\n");
					printf("Enter item: ");
					scanf("%d",&item);
				}
				insertAfter(s1,item,elem);
				break;
			}
			
			
			case 4:{
				if(s1->count == s1->size){
					s1->size *= 2;
					s1 = (List) realloc(s1,s1->size*sizeof(List));
					s1->items = (int*) realloc(s1->items,s1->size*sizeof(int));
				}
				printf("Enter item: ");
				scanf("%d",&item);
				while(isUnique(s1,item) != 1){
					printf("element must be unique!\n");
					printf("Enter item: ");
					scanf("%d",&item);
				}
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



