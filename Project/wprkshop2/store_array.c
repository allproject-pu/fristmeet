#include <stdio.h>

int main()
{
  int x = 0;
  int m[5];
  for(int i = 0; i < 5; i++){
    scanf("%d",&m[i]);
    x += m[i];
  }
  printf("Sum of entered numbers: %d\n",x);

  printf("Numbers in array: ");
  for(int i = 0; i < 5; i++){
    printf("%d ",m[i]);
  }
}