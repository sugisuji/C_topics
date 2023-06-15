#include <stdio.h>

int main()
{
	int x = 1;
	char *p = &x;
	
	if(*p == 1)
	{
		printf("little endian");
	}
	else
	{
		printf("big endian");
	}
	
}
