/*Selection Sort: Every element is compared with all its subsequent following elements*/
/*   Bubble Sort: Every element is compared with immediate next element only*/
#include<stdio.h>
void SelectionSort(int *,int);
void Bubble(int *,int);
void checkAndSwap(int *,int*);
main(){
	int size=5;
	int arr[5]={44,33,55,22,11};
	printf("Original Array is \n%d %d %d %d %d\n",*arr,*(arr+1),*(arr+2),*(arr+3),*(arr+4));
	SelectionSort(arr,0);
	/*Bubble(arr,0);*/
}
void Bubble(int* p,int i){
	int j=-1;
	while(++j < 4){
		checkAndSwap(p+j,p+j+1);
	}
	printf("\nin iteration %d",i);
	printf("\n%d %d %d %d %d\n",*p,*(p+1),*(p+2),*(p+3),*(p+4));
	(i<3)?Bubble(p,++i):0;
	return;
}
void SelectionSort(int* p,int i){
	int j=i;
	while(++j < 5){
		checkAndSwap(p+i,p+j);
	}
	printf("\nin iteration %d",i);
	printf("\n%d %d %d %d %d\n",*p,*(p+1),*(p+2),*(p+3),*(p+4));
	(i<3)?SelectionSort(p,++i):0;
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
