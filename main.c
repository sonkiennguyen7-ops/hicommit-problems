#include <stdio.h>

int main() 
{
  int d;
  int m;
  int y;
  scanf("%d",&d);
  scanf("%d",&m);
  scanf("%d",&y);
    if( 1<=m && m<=12)
    {
    if(m=1 && d=31)
    {
      printf("VALID");
    }
    else if(m=3 && d=31)
    {
      printf("VALID");
    }
    else if(m=5 && d=31)
    {
      printf("VALID");
    }
    else if(m=7 && d=31)
    {
      printf("VALID");
    }
    else if(m=8 && d=31)
    {
      printf("VALID");
    }
    else if(m=10 && d=31)
    {
      printf("VALID");
    }
    else if(m=12 && d=31)
    {
      printf("VALID");
    }
    else if(m=4 && d=30)
    {
      printf("VALID");
    }
    else if(m=6 && d=30)
    {
      printf("VALID");
    }
    else if(m=9 && d=30)
    {
      printf("VALID");
    }
    else if(m=11 && d=30)
    {
      printf("VALID");
    }
    else if(y%400==0 && y%4==0 && y%100!=0 && d=29 )
    {
      printf("VAILD");
    }
    else if(y%400!=0 && y%4!=0 && y%100==0 && d=28 )
    {
      printf("VAILD");
    }
    else
    {
      printf("INVAILD");
    }
      printf("VAILD");
    }
  return 0;
}