//Toggle bits in a number within a Range
#include <stdio.h>

#define toggle(x, bit_pos)  ((1 << bit_pos) ^ x)


int main()
{
	int num = 5;
	int start_range = 2;
	int end_range = 4;
	int i = 0;
	
	
	for(i = start_range ; i < end_range ; i++)
	{
		num = toggle(num , i);
	}
	
	printf("%d", num);
	 
}



