#include <stdio.h>

int main()
{
  int a = 0;
  int x = 0;
  for(int i = 0; i < 10;i++){
    scanf("%d",&a);
    x += a;
    if(a <= 0){
      break;
    }
  }
  printf("%d",x);
}