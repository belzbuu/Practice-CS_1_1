#define MAX 10
#include <stdio.h>
typedef struct {
	int elements[MAX];
	int count;
} Set;


void menu(){
	
	printf("1.Initialize\n2.Display\n3.Add\n4.Contains\n5.Cardinality\n6.isEmpty\n7.getUnion\n8.Intersection\n9.Difference\n10.Subset\n11.Disjoint\n12.Equal\n");
	
}



void initialize(Set *s){
	
	s->count = 0;
	
}

void display(const Set *s){
	
	if(s->count == 0) {
		printf("NO ELEMENTS\n");
		return;
	}
	
	int i;
	printf("Set = {");
	for(i = 0; i < s->count;i++){
		printf("%d, ",s->elements[i]);
	}
		printf("}");

} 

void add(Set *s,int elem){
	int i;

	s->elements[s->count] = elem;
	s->count++;
}

int contains(const Set *s, int elem){
	int i;
	for(i = 0; i < s->count;i++){
		if(s->elements[i] == elem) return 1;
	}
	return 0;
	
}

int cardinality(const Set *s){
	return s->count;
}

int isEmpty(const Set *s){
	if(s->count == 0) return 1;
	else return 0;
}

void getUnion(Set *result,const Set *s1, const Set *s2){
	int i,j,tag;
	
	result->count = 0;
	for(i = 0; i < s1->count;i++){
				result->elements[result->count] = s1->elements[i];
				result->count++;
	}
	for(i = 0; i < s2->count;i++){
		tag = 0;
		for(j = 0; j < result->count;j++){
			if(s2->elements[i] == result->elements[j]){
				tag = 1;
			}
		}
			if(tag != 1){
				result->elements[result->count] = s2->elements[i];
				result->count++;
			}
	}
	return;
}

void intersection(Set *result,const Set *s1, const Set *s2){
	int i,j;
	
	result->count = 0;
	for(i = 0; i < s1->count;i++){
		for(j = 0 ; j < s2->count;j++){
			if(s1->elements[i] == s2->elements[j]){
				result->elements[result->count] = s1->elements[i];
				result->count++;
			}
		}
	}
		return;
}

void difference(Set *result,const Set *s1, const Set *s2){
	int i,j;
	int tag = 0;
	result->count = 0;
	for(i = 0; i < s1->count;i++){
		tag = 0;
		for(j = 0 ; j < s2->count;j++){
			if(s1->elements[i] == s2->elements[j]){
					tag = 1;
			}
		}
		if(tag == 0){
				result->elements[result->count] = s1->elements[i];
				result->count++;
		}
	}
		return;
}

int subset(const Set *s1, const Set *s2){
	
	int ctr = 0;
	int i,j;
	for( i = 0 ; i < s1->count;i++){
		for(j = 0; j<s2->count;j++){
			if(s1->elements[i] == s2->elements[j]) ctr++;
		}
	}
	
	if(ctr == s1->count) return 1;
	return 0;
	
}

int disjoint(const Set *s1, const Set *s2){
		int result = 0;
		int i,j;
		for(i = 0; i < s1->count;i++){
			for(j = 0 ; j < s2->count;j++){
				if(s1->elements[i] == s2->elements[j]){
					return 0;
				}
			}
		}
		return 1;
}

int equal(const Set *s1, const Set *s2){
	int ctr = 0;
	int i,j;
	if(s1->count != s2->count) return 0;
	for(i = 0 ; i < s1->count;i++){
		for(j = 0; j < s2->count;j++){
			if(s1->elements[i] == s2->elements[j]) ctr++;
		}
	}
	
	if(ctr == s1->count) return 1;
	return 0;
}
