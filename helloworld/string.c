#include <stdio.h>
int main()
{
	char name[20];
	printf("%s", "Enter your name: ");
	scanf("%s", name);
	printf("Hello %s\n", name);
	return 0;
}