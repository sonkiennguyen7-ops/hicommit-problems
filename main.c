#include <stdio.h>

int main()
{
  float w;
  float h;
  float BMI;
  scanf("%f",&w);
  scanf("%f",&h);
  BMI = w/((h/100)*(h/100));
  if(BMI < 18.500000)
  {
    printf("UNDERWEIGHT");
  }
  else if((18.500000 <= BMI) && (BMI < 24.9999))
  {
    printf("NORMAL");
  }
  else if((25.000000 <= BMI) && (BMI < 29.9999))
  {
    printf("OVERWEIGHT");
  }
  else (30.000000 <= BMI);
  {
    printf("OBESE");
  }
  return 0;
}