#include <stdio.h>

int main()
{
  float w;
  float h;
  float BMI;
  scanf("%f",&w);
  scanf("%f",&h);
  BMI = w/((h/100)*(h/100));
  if(BMI < 18.500000f)
  {
    printf("UNDERWEIGHT");
  }
  else if((18.500000f <= BMI) && (BMI < 24.9999f))
  {
    printf("NORMAL");
  }
  else if((24.9999f <= BMI) && (BMI < 29.9999f))
  {
    printf("OVERWEIGHT");
  }
  else if (29.9999f <= BMI);
  {
    printf("OBESE");
  }
  return 0;
}