#include <stdio.h>

int main()
{
  int a = 0;
  int b = 1;
  int x;
  for(int i = 0;i < 10;i++){
    printf("%d ",a);
    x = a + b;
    a = b;
    b = x;
  }
  return 0;
}