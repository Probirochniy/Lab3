#include <stdio.h>

int main()
{
	
	printf("Enter string: ");
	char str[10], *s;
	int count = 0;
	gets(str);
	s = str;
	while(*s!='\0')
	{
		count++;
		*s++;
	}
	printf("%d",count);
	
}
