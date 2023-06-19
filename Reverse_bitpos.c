//Reverse the bits position in a number 
#include <stdio.h>


#define clear_bit(x, bit_pos) (~(1 << bit_pos) & x)
#define get_bit(x, bit_pos) ((x >> bit_pos) & 1)
#define setbitpostn(x, bit_pos1, bit_pos2) ((get_bit(x, bit_pos1)) << bit_pos2)


int main()
{
	int x = 1 , i , j; 
	int bit_pos1 = 0;
	int bit_pos2 = 0;
	
	for(i = 0, j = 31; i < 16 ; i++, j--)
	{
		bit_pos1 = i;
		bit_pos2 = j;
		x = (setbitpostn(x, bit_pos1, bit_pos2) | setbitpostn(x, bit_pos2, bit_pos1)) | (clear_bit(x, bit_pos2) & clear_bit(x, bit_pos1));
	}
	printf("%d\n", x);
}

