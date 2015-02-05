/*
                                  Description of Sorting Algos.
Selection Sort: Every element is compared with all its subsequent following elements
   Bubble Sort: Every element is compared with immediate next element only
Insertion Sort: Every elment beginning from second is compared with all its subsequent previous element

*/
#include<stdio.h>
void SelectionSort(int *,int);
void BubbleSort(int *,int);
void InsertionSort(int *,int);
void checkAndSwap(int *,int*);
#define MAX 5
main(){
	int arr[MAX]={44,33,55,22,11};
	printf("Original Array is \n%d %d %d %d %d\n",*arr,*(arr+1),*(arr+2),*(arr+3),*(arr+4));
	/*SelectionSort(arr,0);*/
	/*BubbleSort(arr,0);*/
	InsertionSort(arr,1);
}
void BubbleSort(int* p,int i){
	int j=-1;
	while(++j < MAX-1){
		checkAndSwap(p+j,p+j+1);
	}
	printf("\nin iteration of bs %d",i);
	printf("\n%d %d %d %d %d\n",*p,*(p+1),*(p+2),*(p+3),*(p+4));
	(++i<=MAX-2)?BubbleSort(p,i):0;
	return;
}
void SelectionSort(int* p,int i){
	int j=i;
	while(++j < MAX){
		checkAndSwap(p+i,p+j);
	}
	printf("\nin iteration of ss %d",i);
	printf("\n%d %d %d %d %d\n",*p,*(p+1),*(p+2),*(p+3),*(p+4));
	(++i<=MAX-2)?SelectionSort(p,i):0;
	return;
}
void InsertionSort(int* p,int i){
	int j,current;
	current=i;
	for(j=i-1;j>=0;j--){
		if(*(p+j)>*(p+current)){
			checkAndSwap(p+j,p+current);
			current = j;
		}
	}
	printf("\nin iteration of is %d",i);
	printf("\n%d %d %d %d %d\n",*p,*(p+1),*(p+2),*(p+3),*(p+4));
	printf("\n value of i j and current is %d %d %d",i,j,current);
	if(++i<=MAX-1){InsertionSort(p,i);}
	return;
}
void checkAndSwap(int* i, int* j){
	int tmp;
	if(*i > *j){
			tmp = *i;
			*i = *j;
			*j = tmp;
		}
}
