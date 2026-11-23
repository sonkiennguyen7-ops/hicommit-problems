#include <stdio.h>
int main() 
{
  double d;
  int tien;
  scanf("%lf",&d);
  if(d<=1,000000)
  {
    tien = d*15000;
    printf("%d",tien);
   
  }
  else if (d>1,000000 && d<=5,000000)
  {
    tien = 1,000000*15000 + (d-1,000000)*130000;
    printf("%d",tien);
    
  }
  else (d>5,000000);
  {
    tien = 1,000000*15000 + 4,000000*130000 + (d-5,000000)*11000;
    printf("%d",tien);
   
  } 
  return 0;
}