#include <stdio.h>

main()
{
	char in[100];
	gets(&in);
	int i,j,k;
	j=0;
	for(i=0;i<=100;i++)
	{
		if(isalpha(in[i])) j++;
	}
	
	int num=j;
	
	char out[num];
	
	int n=0;
	
	for(i=0;i<=num-1;i++)
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
					if (in[i]==in[n]) printf(".");
				}
				
				printf("\n");
			}
		
	}

	
	
}

