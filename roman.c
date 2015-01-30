#include<stdio.h>
void roman(int);
void main(){
	int i,j,res;
	printf("Enter a number \n");
	scanf("%d",&i);
	printf("Roman conversion is \n\n");
	roman(i);
}
void roman(i){
 if(i == 0) return;
 if(i>=1000){
	while(i>=1000){
	 printf("m");
	 i -= 1000;
	}
	roman(i);
	return;
 }
 if(i < 1000 && i >= 500){
	while(i>=500){
	 printf("d");
	 i -= 500;
	}
	roman(i);
	return;
 }
 if(i < 500 && i >= 100){
	while(i>=100){
	 printf("c");
	 i -= 100;
	}
	roman(i);
	return;
 }
 if(i < 100 && i >= 50){
	while(i>=50){
	 printf("l");
	 i -= 50;
	}
	roman(i);
	return;
 }
 if(i < 50 && i >= 10){
	while(i>=10){
	 printf("x");
	 i -= 10;
	}
	roman(i);
	return;
 }
 if(i < 10 && i >= 5){
	while(i>=5){
	 printf("v");
	 i -= 5;
	}
	roman(i);
	return;
 }
  if(i < 5 && i >= 0){
	while(i>0){
	 printf("i");
	 i -= 1;
	}
	return;
 }
}
