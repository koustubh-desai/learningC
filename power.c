#include<stdio.h>
main(){
	int i,j,res;
	printf("Enter a number \n");
	scanf("%d %d",&i,&j);
	res = pow(j,i);
	printf("\n Power of %d raise to %d is %d",i,j,res);
}
int pow(i,j){
 if(i == 1)
 return j;
 return (j * pow(--i,j));
}
