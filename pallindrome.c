#include <stdio.h>
int pal(char *, char *);
main( )
{
	char name[25];
	printf("Enter String:\n");
	gets(name);
	printf("%d",pal(name,name+strlen(name)-1));
}
int pal(char *i, char *j){
	if(i>=j){return 1;}
	if(*i == *j){return pal(++i,--j);}
	else{return 0;}
}
