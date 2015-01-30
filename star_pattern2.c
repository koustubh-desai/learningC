#include <stdio.h>
void main()
{
	int i=4,j;
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	i -= 2;
	for (; i >=1; --i)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
/* o/p
*
**
***
****
***
**
*
*/
