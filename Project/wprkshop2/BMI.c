#include <stdio.h>

int main(){
  float a,b;
  scanf("%f%f", &a,&b);
  float x = (a/(b*b));
  printf("Your BMI is %.2f\n",x);
  
  if(x < 18.5){
    printf("You are underweight.");
  }else if(x <= 24.9){
    printf("You are normal weight.");
  }else if(x <= 29.9){
    printf("You are overweight.");
  }else if(x > 30){
    printf("You are obese.");
  }
 
  return 0;
}