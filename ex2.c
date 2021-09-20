#include <stdio.h>

void swap(char *x, char *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
	
	return;
}

main()
{
	char in[100];
	int i;
	for(i=0;i<=100;i++)
	{
		in[i]=' ';
	}
	gets(&in);
	int j,k;
	
	

	
	j=0;
	
	
	
	for(i=0;i<=100;i++)
	{
		if(isalpha(in[i])) j++;
	}

	int num=j;

	char out[num+1];
	
	int C[num+1];
	
	for(i=0;i<=num;i++) C[i]=0;
	
	int m=0,n=0;
	
	for(i=0;i<=num;i++)
	{
		k=1;
		for (j=i-1;j>=0;j--)
		{
			if(in[i]==in[j])
			{
				k=0;
				break;
			}
			if(in[i]==' ') 
			{
			k=0;
			break;
			}
		}
			if(k==1) 
			{
				printf("%c",in[i]);
				printf(" ");
				for(n=0;n<=num;n++)
				{
					if (in[i]==in[n]) 
					{
					printf(".");
					C[m]++;
					}
				}
				out[m]=in[i];
				m++;
				
				printf("\n");
			}
		
	}
	
	for(i=0;i<m;i++)
	{
		for(j=i;j<m;j++)
		{
		if(C[j]>C[i]) 
		{
		swap(&C[j],&C[i]);
		swap(&out[j],&out[i]);
		}
		
		
		if(C[j]==C[i])
		{
			if(out[j]<out[i]) swap(&out[j],&out[i]);
		}
	
		}
	}
		
		
		
		printf("\n");
		printf("\n");
		
		for(i=0;i<m;i++)
		{
			printf("%c", out[i]);
			printf(" ");
			for(j=0;j<C[i];j++)
			{
				printf(".");
			}
			printf("\n");
		}
	
}
