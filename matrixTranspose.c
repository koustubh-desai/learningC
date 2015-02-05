#include<stdio.h>
void swap(int *, int *);
main()
{
	int mat[4][4] = {{1,2,3,4},
					{5,6,7,8},
					{9,10,11,12},
					{13,14,15,16}
					};
	int i,j;
	for(i=0;i<4;i++){
		for(j=0;j<=i;j++){
			swap (*(mat+i)+j,*(mat+j)+i);
		}
	}
	for(i=0;i<4;i++){
		printf("\n");
		for(j=0;j<4;j++){
			printf(" %d",mat[i][j]);
		}
	}
}
void swap(int* i, int* j){
	int tmp;
	tmp = *i;
	*i = *j;
	*j = tmp;
}
