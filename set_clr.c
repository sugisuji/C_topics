#include <stdio.h>

int main()
{
	int x = 1;
	int y = 2;
	int set_bit = 17;
	int clr_bit = 18;
	
	x = (1 << set_bit) | x;
	y = (~(1 << clr_bit)) & y;
	printf("%d\n", x);
	printf("%d\n", y);
	
}
