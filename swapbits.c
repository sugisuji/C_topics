//Swap the 7th & 8th bits position in a number 
#define clear_bit(x, bit_pos) (~(1 << bit_pos) & x)
#define get_bit(x, bit_pos) ((x >> bit_pos) & 1)
#define setbitpostn(x, bit_pos1, bit_pos2) ((get_bit(x, bit_pos1)) << bit_pos2)

#include <stdio.h>

int main()
{
	int x = 128; 
	int bit_pos1 = 7;
	int bit_pos2 = 8;
	
	
	x = (setbitpostn(x, bit_pos1, bit_pos2) | setbitpostn(x, bit_pos2, bit_pos1)) | (clear_bit(x, bit_pos2) & clear_bit(x, bit_pos1));
	
	printf("%d\n", x);
}
	
	

