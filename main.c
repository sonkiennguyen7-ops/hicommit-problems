#include <stdio.h>

int main() 
{
  float gpa;
  float min;
  int abs;
  scanf("%f",&gpa);
  scanf("%f",&min);
  scanf("%d",&abs);
  if (abs>3)
  {
    printf("FAIL_ATTENDANCE");
  }
  else if(min<4.000000)
  {
    printf("FAIL_SUBJECT");
  }
  else if(gpa>=8.000000 && min>=7.000000)
  {
    printf("EXCELLENT");
  }
  else if(gpa>=6.500000 && min>=5.000000)
  {
    printf("GOOD");
  }
  else if(gpa>=5.000000 && min>=4.000000)
  {
    printf("PASS");
  }
  else
  {
    printf("FAIL");
  }
  return 0;
}