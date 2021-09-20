#include <stdio.h>

int main()
{
	char pass[3];
	printf("Enter a password(from 1 until 3 symbols): ");
	scanf("%s",pass);
	char brute[3];
	char found[3];
	brute[0]=32;
	brute[1]=32;
	brute[2]=32;
	int i,j,k,count=0,attempts;
	for(i=0;i<94;i++)
	{
		brute[0]+=1;
		for(j=0;j<94;j++)
		{
			brute[1]+=1;
			for(k=0;k<94;k++)
			{
				brute[2]+=1;
				if(brute[0] == pass[0])
				{
					if(brute[1] == pass[1])
					{
					if(brute[2] == pass[2])
					{
					found[0] = brute[0];
					found[1] = brute[1];
					found[2] = brute[2];
					attempts = count;
					}
					}
				}
				count++;
			}
			brute[2]=32;
		}
		brute[1]=32;
	}
	printf("found: ");
	printf("%c",found[0]);
	printf("%c",found[1]);
	printf("%c",found[2]);
	printf("\n");
	printf("attempts: ");
	printf("%d",attempts);
	
}
