#include <stdio.h>

int main()
{
  int number[10],numfix;

  for(int i = 0;i < 10;i++){
    scanf("%d", &number[i]);
  }

  for (int  i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
      if(number[j] < number[j+1]){
       numfix = number[j];
       number[j] = number[j+1];
       number[j+1] = numfix;
      }
    }
  }

  for(int i = 0;i < 10;i++){
    if(i == 9){
      printf("%d", number[i]);
    }else{
      printf("%d ", number[i]);
    }
  }
  return 0;
}