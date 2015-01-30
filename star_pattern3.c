#include <stdio.h>
void main()
{
	int i=4,j,k,n=4;
	for (i = 1; i <= n; i++) /*Rows*/
	{
		
		for (j = 1; j <= i+n-1; j++)
		{
			j>(n-i) ? printf("*"):printf(" ");
		}
		printf("\n");
	}
	/*i -= 2;
	for (; i >=1; --i)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/
}
/* o/p
   *
  ***
 *****
******* 
*/
