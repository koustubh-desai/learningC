/*#include<stdio.h>
void SelectionSort(int *,int);
main(){
	int size=5;
	int arr[5]={44,33,55,22,11};
	printf("Original Array is \n%d %d %d %d %d\n",*arr,*(arr+1),*(arr+2),*(arr+3),*(arr+4));
	SelectionSort(arr,0);
}
void SelectionSort(int* p,int i)
{
	
	int j=i,tmp;
	printf("\nin iteration %d",i);
	while(++j < 5){
		if(*(p+i) > *(p+j)){
			tmp = *(p+i);
			*(p+i) = *(p+j);
			*(p+j) = tmp;
		}
	}
	printf("\n%d %d %d %d %d\n",*p,*(p+1),*(p+2),*(p+3),*(p+4));
	(i<3)?SelectionSort(p,++i):0;
	return;
}*/
#include<stdio.h>
void SelectionSort(int *,int);
main(){
	int size=5;
	int arr[5]={44,33,55,22,11};
	printf("Original Array is \n%d %d %d %d %d\n",*arr,*(arr+1),*(arr+2),*(arr+3),*(arr+4));
	SelectionSort(arr,3);
}
void SelectionSort(int* p,int i)
{
	int j=i,tmp;
	if(i>0){SelectionSort(p,i-1);}
	printf("\nin iteration %d",i);
	while(++j < 5){
		if(*(p+i) > *(p+j)){
			tmp = *(p+i);
			*(p+i) = *(p+j);
			*(p+j) = tmp;
		}
	}
	printf("\n%d %d %d %d %d\n",*p,*(p+1),*(p+2),*(p+3),*(p+4));
	return;
}
