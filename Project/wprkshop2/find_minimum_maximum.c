#include <stdio.h>

int main()
{
  int max = 0;
  int min = 0;
  int m[10];
  for(int i = 0; i < 10; i++){
    scanf("%d",&m[i]);
  }
  for (int i = 0; i < 10; i++)
  {
    if(max < m[i]){
      max = m[i];
    }if((min > m[i])){
      min = m[i];
    }
  }
  printf("Maximum number: %d\nMinimum number: %d",max,min);
  return 0;
}