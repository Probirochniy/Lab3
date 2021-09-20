#include <stdio.h>

int main()
{
	
	char s1[10];
	char s2[10];
	char *s;
	printf("enter string1: ");
	scanf("%s", &s1);
	s = s1;
	int i=0;
	while(*s!='\0')
	{
		s2[i]=*s;
		*s++;
		i++;
	}
	
	
	printf("string2: ");
	printf("%s",s2);
	
}
