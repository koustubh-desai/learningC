#include <stdio.h>
void main()
{
	int i,j,k=65,n=7;
	for (i = 0; i < n; i++) /*Rows*/
	{
		
		for (j = k; j < k+n; j++)/*Column*/
		{
			j<(k+n-i) ? printf("%c",j):printf(" ");/*spaces in column*/
			
		}
		j -= 2;
		for (; j >=k; j--)/*Column*/
		{
			j<(k+n-i) ? printf("%c",j):printf(" "); /*spaces in column*/
			
		}
		printf("\n");
	}
	
}
/* o/p
ABCDEFGFEDCBA
ABCDEF FEDCBA
ABCDE   EDCBA
ABCD     DCBA
ABC       CBA
AB         BA
A           A
*/
