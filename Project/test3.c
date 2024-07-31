#include <stdio.h>

int main()
{
  int number[3][3],max;

  for(int i = 0;i < 3;i++){
    scanf("%d %d %d", &number[i][0], &number[i][1], &number[i][2]);
  }
max = number[0][0];

  for(int i = 0;i < 3;i++){
    for(int j = 0;j < 3;j++){
        if(max < number[i][j]){
            max = number[i][j];
        }
    }
  }
    printf("The maximum value in the matrix is: %d", max);
  return 0;
}