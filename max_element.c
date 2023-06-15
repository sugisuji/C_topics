#include <stdio.h>

int main()
{
	int a[10] = {1,3,4,7,1,1,2,3,4,5};
	int i, j;
	int max_num = 0;
	int temp_var = 0;
	int max_elmnt = 0;
	
	for(i = 0; i < 10; i++)
	{
		for(j = i + 1; j < 10 ; j++)
		{
			if(a[i] == a[j])
			{
				temp_var++;
			}
		}
		if(max_num < temp_var)
		{
			max_num = temp_var;
			max_elmnt = a[i];
		}
	}
	printf("%d", max_elmnt);
}
