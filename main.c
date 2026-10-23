#include <stdio.h>
int main() 
{
  float dtb;
  scanf("%1f",&dtb);
  if(9.0<=dtb && dtb<=10.0)
  {
    printf("A");
  }
 else if (8.0<dtb && dtb<=8.9)
  {
    printf("B+");
  }
 else if (7.0<dtb && dtb<=7.9)
  {
    printf("B");
  }
  else if (6.5<dtb && dtb<=6.9)
  {
    printf("C+");
  }
  else if (5.5<dtb && dtb<=5.9)
  {
    printf("C");
  }
   else if (5.0<dtb && dtb<=5.4)
   {
         printf("D+");
   }
  else if (4.0<dtb && dtb<=4.9)
  {
    printf("D");
  }
   else 
   {
     printf("F");
   }
  return 0;
}