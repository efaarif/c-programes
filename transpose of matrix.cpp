#include <stdio.h>
int main()
{
	int a,b,i,j;
	printf("enter the size of matrix : ");
	scanf("%d %d", &a, &b);
	int arr[a][b];
	printf("enter the elements of matrix :\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
		    scanf("%d",&arr[i][j]);
		}
	}
	
	
	printf("original matrix :\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
		     printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("transpose matrix :\n");
	for(i=0;i<b;i++)
	{
		for(j=0;j<a;j++)
		{
		     printf("%d",arr[j][i]);
		}
		printf("\n");
	}
	
	
}
