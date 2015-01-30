#include<stdio.h>
main(){
	int i,j;
	printf("Enter a number \n");
	scanf("%d",&i);
	j = fact(i);
	printf("\nFactorial is %d",j);
}
fact(num){
 if(num == 1)
 return 1;
 return (num * fact(num-1));
}
