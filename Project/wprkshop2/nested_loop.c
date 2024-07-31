#include <stdio.h>

int main()
{
  int a = 0;
  scanf("%d",&a);
  for(int i = 0; i < a;i++){
    for(int x = 0; x < i;x++){
      printf("*");
    }
    printf("*\n");
  }
}