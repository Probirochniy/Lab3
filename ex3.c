#include <stdio.h>
#include <stdlib.h>

int main()
{
	char in[100];
	gets(&in);
	int c=0;
	int i;
	for(i=0;i<100;i++)
	{
		if(in[i]>='0' && in[i]<='9') c++;
	}
	
	long int n = atoi(in);
	
	
	int A[c];
	i=0;
	while(n>0)
	{
		A[i]=n%10;
		n=n/10;
		i++;
	}
	
	int dub[10];
	for(i=0;i<10;i++)
	{
		dub[i]=0;
	}
	
	for(i=c-1;i>=0;i--)
	{
		if(dub[A[i]]==0)
		{
			printf("%d",A[i]);
			printf(" ");
			dub[A[i]]=1;
		}
	}
	
}
