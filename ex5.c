#include <stdio.h>

int main()
{
	int start,end,dig,i,j,fact,prod,num;
	scanf("%d",&start);
	scanf("%d",&end);
	for(i=start;i<=end;i++)
	{
		num=i;
		prod=0;
		while(num>0)
		{
			dig=num%10;
			
			fact=1;
			while(dig>0)
			{
				fact=fact*dig;
				dig-=1;
			}
			prod=prod+fact;
			num=num/10;
		}
		if(prod == i)
		{
			printf("%d",i);
			printf("\n");
		}
	}
}
