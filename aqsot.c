#include <stdio.h>
#include <stdlib.h>

int vals[] = {1, 5, 2, 6, 9, 8};

int compare(const a, const b);
int compare(const a, const b){
	return (*(int*)a - *(int*)b);
}

void main(){
	int i;
	for(i=0; i<=5; i++){
		printf("%d \t", vals[i]);
	}
	qsort(vals, 6, sizeof(int), compare);
	
	printf("\n");
	
	for(i=0; i<=5; i++){
		printf("%d \t", vals[i]);
	}	
	getch();
}
