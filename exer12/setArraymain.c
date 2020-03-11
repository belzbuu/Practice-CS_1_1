#include <stdio.h>
#include <windows.h>
#include "setArray.h"
#define MAX 10




int main(){
	Set s1;
	Set s2;
	Set result;
	int choice;
	int sub_choice;
	int elem,i,size;
	while(1){
		
		menu();
		printf("\nChoice: ");
		scanf("%d",&choice);
		switch(choice){
			
			
			case 1:{
				
				printf("Which set would you like to initialize? Set 1 - 1 ; Set 2 - 2; Result - 0 ; ALL SET - 9\n");
					scanf("%d",&sub_choice);
				switch(sub_choice){
					
					case 1:{
						 initialize(&s1);
						break;
					}
					case 2:{
						
						 initialize(&s2);
						break;
					}
					case 0:{
						
						 initialize(&result);
						break;
					}
					case 9:{
						
						 initialize(&s1);
						 
						 initialize(&s2);
						 
						 initialize(&result);
						break;
					}
				}
				
				break;
			}
			
			case 2:{
				
				printf("Which set would you like to display? Set 1 - 1 ; Set 2 - 2; Result - 0");
				printf("\n2nd choice: ");
				scanf("%d",&sub_choice);
				switch(sub_choice){
					
						case 1:{
							 display(&s1);
							break;
						}
						case 2:{
							
							 display(&s2);
							break;
						}
						case 0:{
							
							 display(&result);
							break;
						}
					}
				break;
			}
			
			case 3:{
					
				printf("Which set would you like to add to? Set 1 - 1 ; Set 2 - 2; Result - 0");
						printf("\n2nd choice: ");
				scanf("%d",&sub_choice);
				switch(sub_choice){
					
						case 1:{
							printf("How many elements: ");
							scanf("%d",&size);
							for(i = 0; i < size; i++ ){
									printf("Enter elem: ");
									scanf("%d",&elem);
								 add(&s1,elem);
							}
							break;
						}
						case 2:{
							
								printf("How many elements: ");
							scanf("%d",&size);
							for(i = 0; i < size; i++ ){
									printf("Enter elem: ");
									scanf("%d",&elem);
								 add(&s2,elem);
							}
							break;
						}
					}
		
				
				break;
			}
			
			case 4:{
				
							
				printf("Which set would you like to check? Set 1 - 1 ; Set 2 - 2; Result - 0");
						printf("\n2nd choice: ");
				scanf("%d",&sub_choice);
				printf("Enter element: ");
				scanf("%d",&elem);
				switch(sub_choice){
					
						case 1:{
							 printf("The set contains the elem %d: %d",elem,contains(&s1,elem));
							break;
						}
						case 2:{
							
									 printf("The set contains the elem %d: %d",elem,contains(&s2,elem));
							break;
						}
						case 0:{
									 printf("The set contains the elem %d: %d",elem,contains(&result,elem));
							break;
						}
					}
		
				
				break;
			}
			
			case 5:{
								
				printf("Which set would you like to check? Set 1 - 1 ; Set 2 - 2; Result - 0");
						printf("\n2nd choice: ");
				scanf("%d",&sub_choice);
			
				switch(sub_choice){
					
						case 1:{
							 cardinality(&s1);
							break;
						}
						case 2:{
							
							 
							 cardinality(&s2);
							break;
						}
						case 0:{
							
							
							 cardinality(&result);
							break;
						}
					}
		
				
				
				
				
				break;
			}
			
			case 6:{
				
				
					printf("Which set would you like to check? Set 1 - 1 ; Set 2 - 2; Result - 0");
							printf("\n2nd choice: ");
				scanf("%d",&sub_choice);
			
				switch(sub_choice){
					
						case 1:{
							 printf("Is the set empty: %d",isEmpty(&s1));
							break;
						}
						case 2:{
							
							 
							 printf("Is the set empty: %d",isEmpty(&s2));
							break;
						}
						case 0:{
							
							
							 printf("Is the set empty: %d",isEmpty(&result));
							break;
						}
					}
				break;
			}
			
			case 7:{
				getUnion(&result,&s1,&s2);
				break;
			}
			
			case 8:{
								intersection(&result,&s1,&s2);

				break;
			}
			
			case 9:{
								difference(&result,&s1,&s2);

				break;
			}
			
			case 10:{
				
				printf("Is s1 a subset of s2: %d\n",subset(&s1,&s2));

				
				break;
			}
			
			case 11:{
				
								printf("Are the two sets disjoint: %d\n",disjoint(&s1,&s2));

				
				break;
			}
			
			case 12:{
								printf("Is s1 equal to s2: %d\n",equal(&s1,&s2));

				break;
			}
		}
		printf("\n");
		system("pause");
		system("cls");
		
	}
	
	
	
	
	return 0;
}
