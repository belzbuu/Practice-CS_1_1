struct list {
		int *items; // pointer to the array
		int size;    // actual size of the array
		int count; // number of items in the array
};
typedef struct list *List;  

List newList(int size);
int isEmpty(List list);
void display(List list);
int contains(List list, int item);
void Remove(List list, int i);
void insertAfter(List list,int item, int i);
void addEnd(List list,int item) ;
void addFront(List list,int item);
void removeFront(List list);
void menu();
int isUnique(List list,int item);
