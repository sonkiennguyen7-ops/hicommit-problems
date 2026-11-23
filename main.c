/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int d;
  int m;
  int y;
  scanf("%d",&d);
  scanf("%d",&m);
  scanf("%d",&y);
   if(y<=0)
  {
    printf("INVALID")
  }
  else if( 1<=m && m<=12)
  {
     if( m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
     {
         d=31;
     }
     else if(m==4 || m==6 || m==9 || m==11)
     {
         d=30;
     }
     else if(m==2 && y%400==0 && y%4==0 && y%100!=0)
     {
         d=29;
     }
     else if(m==2 && y%400!=0 && y%4!=0 && y%100==0)
     {
         d=28;
     } 
     else
     {
         printf("INVALID");
     }
     printf("VALID");
  }
  else
  {
    printf("INVALID");
  }
    return 0;
}