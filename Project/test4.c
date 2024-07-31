#include <stdio.h>
int number[10][2],x,max;

int main()
{
  for(int i = 0;i < 10;i++){//เก็บ10ค่า
    scanf("%d", &number[i][0]);
  }

  for (int  i = 0; i < 10; i++){
    number[i][0] += number[i][1];
  }
  for (int  i = 0; i < 10; i++){
    if(max < number[i][1]){
        max = number[i][1];
    }
  }
  for (int  i = 0; i < 10; i++){
    if(max == number[i][1]) {
        x = number[i][0];
    }
  }
  printf("Mode = %d", x);
  return 0;
}