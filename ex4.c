#include <stdio.h>

int main()
{
	int h;
	scanf("%d",&h);
	int i,n=1,j,k=1;
	for(i=0;i<h;i++)
	{
		for(j=1;j<h-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<k;j++)
		{
			printf("%d",n);
			printf(" ");
			n++;
		}
		k++;
		printf("\n");
	}
}
