#include <stdio.h>
int main() {
  int rows, columns;
  printf("Input number of rows: ");
  scanf("%i", &rows); 
  printf("\nInput number of columns: ");
  scanf("%i", &columns);
  
  int arr[rows][columns];
  for(int i = 0; i < rows; i++) {
      for(int j = 0; j < columns; j++) {
         printf("\nInput value of row %i and column %i: ", i, j);
         scanf("%d", &arr[i][j]);           
      }    
  }
  int sum_of_column_1 = 0;
  int sum_of_column_2 = 0;
  for(int i = 0; i < rows; i++) {
      sum_of_column_1 += arr[0][i];          
  } 
 for(int i = 0; i < rows; i++) {
      sum_of_column_2 += arr[1][i];          
  } 
  
  int difference = sum_of_column_1 - sum_of_column_2;
  int product = sum_of_column_1 * sum_of_column_2;
  printf("\n\nThe sum of column 1 is %d", sum_of_column_1);
  printf("\n\nThe sum of column 2 is %d", sum_of_column_2);
  printf("\n\nThe difference of column 1 is %d", difference);
  printf("\n\nThe product of column 1 is %d", product);
  int min = arr[0][0];
  for(int i = 0; i < columns; i++) {
    if(min > arr[0][i]) min = arr[0][i];  
  }
  printf("\n\nThe smallest element in column 1 is %d", min); 
return 0;    
}
