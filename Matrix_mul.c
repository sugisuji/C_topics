#include <stdio.h>

void get_matrx_elmnt(int matrix[][10], int row, int column) {
	
	int i = 0;
	int j = 0;

   printf("\nEnter elements: \n");

   for (i = 0; i < row; ++i) {
      for (j = 0; j < column; ++j) {
         scanf("%d", &matrix[i][j]);
      }
   }
}


void multiply(int first[][10],
                      int second[][10],
                      int result[][10],
                      int r1, int c1, int r2, int c2) {
                      	
    int i , j , k;
                      	
   for (i = 0; i < r1; ++i) {
      for (j = 0; j < c2; ++j) {
         result[i][j] = 0;
      }
   }

   for (i = 0; i < r1; ++i) {
      for (j = 0; j < c2; ++j) {
         for (k = 0; k < c1; ++k) {
            result[i][j] += first[i][k] * second[k][j];
         }
      }
   }
}

void display(int result[][10], int row, int column) {
	
	int i , j;

   for (i = 0; i < row; ++i) {
      for (j = 0; j < column; ++j) {
         printf("%d  ", result[i][j]);
         if (j == column - 1)
            printf("\n");
      }
   }
}

int main() {
   int r1, c1, r2, c2;
   printf("Enter rows and column for the first matrix: ");
   scanf("%d %d", &r1, &c1);
   printf("Enter rows and column for the second matrix: ");
   scanf("%d %d", &r2, &c2);
   
   int first[r1][c1], second[r2][c2], result[r1][c2];


   while (c1 != r2) {	
      printf("Enter rows and columns for the first matrix: ");
      scanf("%d%d", &r1, &c1);
      printf("Enter rows and columns for the second matrix: ");
      scanf("%d%d", &r2, &c2);
   }


   get_matrx_elmnt(first, r1, c1);
   get_matrx_elmnt(second, r2, c2);


   multiply(first, second, result, r1, c1, r2, c2);


   display(result, r1, c2);

   return 0;
}
