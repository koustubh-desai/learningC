#include <stdio.h>
#include <time.h>
void main()
{
	int i,j, n = 5,k=1,mul=1;
	clock_t start, end;
	double cpu_time_used;
	start = clock();
	
	for(i = 1; i <=n ; i++)
	{
		
		for(j = 1; j <= n; j++)
		{
			if (j> n-i)
			{
				printf("%d ",k%10);
				k /= 10;
				if(!k)break;
			}
			else
			printf(" ");
			
		}
		printf("\n",k);
		mul = mul * 11;
		k = mul;
	}
	
	end = clock();
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nTime elapsed is %f",cpu_time_used);
}
/* o/p
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
*/

