#include <stdio.h>
#include <time.h>
void main()
{
	int i,j, n = 4,k=0;
	clock_t start, end;
	double cpu_time_used;

	start = clock();
	/*for(i = 1; i <=n ; i++)
	{
		for(j = 1; j <= n+i-1; j++)
		{
			j == (n-i) ?printf("%d",i):printf(" ");
		}
		printf("\n");
	}*/
	for(i = 1; i <=n ; i++)
	{
		
		for(j = 1; j <= n; j++)
		{
			j > (n-i)?printf("%d ",++k):printf(" ");
		}
		printf("\n");
	}
	end = clock();
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nTime elapsed is %f",cpu_time_used);
}
/* o/p
   1
  2 3
 4 5 6
7 8 9 10
*/
/*0.124000*/
/*
for(i = 1; i <=n ; i++)
	{
		
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j = 1; j <= 2*i-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	*/
