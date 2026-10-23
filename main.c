#include <stdio.h>

int main()
{
  float w;
  float h;
  float BMI;
  scanf("%f",&w);
  scanf("%f",&h);
  BMI = w/((h/100)*(h/100));
  if(BMI < 18.50)
  {
    printf("UNDERWEIGHT");
  }
  else if(18.50 <= BMI && BMI < 25.0)
  {
    printf("NORMAL");
  }
  else if(25.0 <= BMI && BMI < 30.0)
  {
    printf("OVERWEIGHT");
  }
  else if (30.0 <= BMI)
  {
    printf("OBESE");
  }
  return 0;
}