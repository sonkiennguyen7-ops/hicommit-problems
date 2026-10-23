#include <stdio.h>

int main()
{
  float w;
  float h;
  float BMI;
  scanf("%f",&w);
  scanf("%f",&h);
  BMI = w/(h/100)*(h/100);
  if(BMI < 18.5)
  {
    printf("UNDERWEIGHT");
  }
  else if(18.50 <= BMI < 25.00)
  {
    printf("NORMAL");
  }
  else if(25.00 <= BMI < 30.00)
  {
    printf("OVERWEIGHT");
  }
  else if (BMI >= 30.0)
  {
    printf("OBESE");
  }
  return 0;
}