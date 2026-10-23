#include <stdio.h>

int main()
{
  float w;
  float h;
  float BMI;
  scanf("%f",&w);
  scanf("%f",&h);
  BMI = w/((h/100)*(h/100));
  if(BMI < 18.5f)
  {
    printf("UNDERWEIGHT");
  }
  else if(18.5f <= BMI && BMI < 25.0f)
  {
    printf("NORMAL");
  }
  else if(25.0f <= BMI && BMI < 30.0f)
  {
    printf("OVERWEIGHT");
  }
  else if (30.0f <= BMI)
  {
    printf("OBESE");
  }
  return 0;
}