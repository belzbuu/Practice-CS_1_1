#define MAX 10
#define TRUE 1
#define FALSE 0
#include <stdio.h>

typedef int BitSet[MAX];


void menu(){
	
	printf("1.Initialize\n2.Display\n3.Add\n4.Contains\n5.Cardinality\n6.isEmpty\n7.getUnion\n8.Intersection\n9.Difference\n10.Subset\n11.Disjoint\n12.Equal\n");
	
}



void initialize(BitSet s){
	
	int i;
	for(i = 0 ; i < MAX; i++){
		s[i] = FALSE;
	}
}

void display(BitSet s){
	
	
	int i;
	printf("Set = {");
	for(i = 0; i < MAX;i++){
		if(s[i] != FALSE){	
			printf("%d, ",i);
		}
	}
		printf("}");

} 

void add(int elem,BitSet s){
	s[elem] = TRUE;
}

int contains(BitSet s,int elem){
	int i;
	for(i = 0; i < MAX;i++){
		if(s[i] == elem) return 1;
	}
	return 0;
	
}

int cardinality(BitSet s){
	int i;
	int ctr = 0;
	for(i = 0; i < MAX;i++){
		if(s[i] == TRUE) ctr++;
	}
	return ctr;
}

int isEmpty(BitSet s){
	if(cardinality(s) == 0) return 1;
	else return 0;
}

void getUnion(BitSet result,BitSet s1,BitSet s2){
	int i,j,tag;
	
	initialize(result);
	for(i = 0 ; i < MAX;i++){
		if(s1[i] == TRUE){
	
			result[i] = TRUE;
		}
	}
	
	for(i = 0 ; i < MAX;i++){
		if(s2[i] == TRUE) {
			result[i] = TRUE;	
		}
	}
	return;
}

void intersection(BitSet result,BitSet s1,BitSet s2){
	int i,j;
	
	initialize(result);
	for(i = 0 ; i < MAX;i++){
		if(s1[i] == TRUE && s2[i] == TRUE){
			result[i] = TRUE;
		}
	}
		return;
}

void difference(BitSet result,BitSet s1,BitSet s2){
	int i,j;
	initialize(result);
	for(i = 0 ; i < MAX;i++){
		if(s1[i] == TRUE && s2[i] == FALSE) result[i] = TRUE;
	}
		return;
}

int subset(BitSet s1,BitSet s2){
	
	if(cardinality(s1) <= cardinality(s2));
	return 0;
	
}

int disjoint(BitSet s1,BitSet s2){
		int result = 0;
		int i,j;
		for(i = 0; i < MAX;i++){
			for(j = 0 ; j < MAX;j++){
				if(s1[i] == s2[j]){
					return 0;
				}
			}
		}
		return 1;
}

int equal(BitSet s1,BitSet s2){
	int ctr = 0;
	int i,j;

	if(cardinality(s1) == cardinality(s2)) return 1;
	
	return 0;
}
