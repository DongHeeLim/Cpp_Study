#include <stdio.h>

int main()
{
	int a = 3, b = 5;
	int* c = &a;

	*c += ++b;

	printf("%d\n", a);


	return 0;
}