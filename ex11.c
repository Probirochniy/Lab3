#include <stdio.h>

int main()
{
	printf("Input elements in 2x2 matrix:");
	printf("\n");
	int matrix[2][2];
	scanf("%d",(*(matrix)));
	scanf("%d",(*(matrix)+ 1));
	scanf("%d",(*(matrix + 1)));
	scanf("%d",(*(matrix + 1)+ 1));
	
	printf("Elements of 2x2 matrix:");
	printf("\n");
	printf("%d",*(*(matrix)));
	printf(" ");
	printf("%d",*(*(matrix)+ 1));
	printf("\n");
	printf("%d",*(*(matrix + 1)));
	printf(" ");
	printf("%d",*(*(matrix + 1)+ 1));	
}
