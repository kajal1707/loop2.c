#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter n=");
	scanf("%d",&n);
	for( i=0;i<n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
	return 0;
}
