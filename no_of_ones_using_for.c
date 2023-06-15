#include <stdio.h>

int main()
{
	int num = 10;
	int i = 0;
	int no_of_ones = 0;
	
	for(i = 0; i < 32; i++)
	{
		if((num >> i) & 1)
		{
			no_of_ones++;
		}
	}
	printf("%d", no_of_ones);
}
