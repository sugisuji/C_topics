#include <stdio.h>

int main()
{
	int  i = 0;
	int j = 0;
	
	int row = 2;
	int clmn = 2;
	//int row2 =0;
	//int clmn2 = 0;
	
	//scanf("%d%d",&row1,&clmn1);
	//scanf("%d%d",&row2,&clmn2);
	
	int a[2][2] = {1, 2, 3, 4};
	int b[2][2] = {2, 3, 5, 6};
	int matrix[2][2] = {0};
	
	//if(clmn1 == row2)
	//{
		for(i = 0; i < row ; i++)
		{
			for(j = 0; j < clmn ; j++)
			{
				matrix[i][j] = a[i][j] * b[i][j] + matrix[i][j];
			}
		}
 	
 		for(i = 0; i < row ; i++)
		{
			for(j = 0; j < clmn ; j++)
			{
				printf("%d ", matrix[i][j]);
			}
			printf("\n");
		}
}
