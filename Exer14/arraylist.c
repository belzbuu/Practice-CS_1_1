#include <stdio.h>
#include <stdlib.h>

struct list {
		int *items; // pointer to the array
		int size;    // actual size of the array
		int count; // number of items in the array
};
typedef struct list *List;
List newList(int size){
	
	List s1;
	s1 = (List) malloc(size*sizeof(List));
	s1->items = (int*) malloc(size*sizeof(int));
	s1->size = size;
	s1->count = 0;
	printf("--Successful!--\n");
	return  s1;
}
void addEnd(List list,int item){

	int n  = list->count;
	list->items[n] = item;
	list->count = n+1;
}
int isEmpty(List list){
	if(list->count == 0) return 1;
	return 0;
}
void display(List list){
	if(isEmpty(list) == 1){
		printf("Set is empty!!\n");
		return;
	}
	int i;
	printf("Set ={ ");
	for(i = 0 ; i < list->count;i++){

		if(i+1 == list->count){
					printf("%d ",list->items[i]);
		}else
				printf("%d, ",list->items[i]);
	}
	printf("}");
	printf("\n");
	return;
}
int contains(List list, int item){
	int i;
	for(i = 0 ; i < list->count;i++){
		if(list->items[i] == item) return 1;
	}
	return 0;
}
void Remove(List list, int i){
	int ctr;
	for(ctr = i+1; ctr < list->count;ctr++){
		list->items[ctr-1] = list->items[ctr]; 
	}
	list->count -= 1;
}
void insertAfter(List list,int item, int i){
	int ctr;
	list->count+=1;
	for(ctr = list->count-1; ctr >= i ;ctr--){
		list->items[ctr+1] = list->items[ctr]; 
	}
	list->items[i] = item;
}

void addFront(List list,int item){
	int ctr;
	list->count+=1;
	for(ctr = list->count-1; ctr >= 0 ;ctr--){
		list->items[ctr+1] = list->items[ctr]; 
	}
	list->items[0] = item;
}

void removeFront(List list){
	int ctr;
	for(ctr = 1; ctr < list->count;ctr++){
		list->items[ctr-1] = list->items[ctr]; 
	}
	list->count -= 1;
}
void menu(){
	
//	printf("1.New List\n2.Is Empty\n3.Display\n4.Remove\n5.Insert After\n6.Add End\n7.Add Front\n8.Remove Front\n9.Contains\n");
	printf("1.New List\n2.Is Empty\n3.Display\n4.Add Front\n5.Add End\n6.Insert After\n7.Remove Front\n8.Remove\n9.Contains\n");

}
