#include <stdio.h>
int main() 
{
  float dtb;
  scanf("%1f",&dtb);
  if(9.00<=dtb && dtb<=10.00)
  {
    printf("A");
  }
 else if (8.00<=dtb && dtb<=8.99)
  {
    printf("B+");
  }
 else if (7.00<=dtb && dtb<=7.99)
  {
    printf("B");
  }
  else if (6.50<=dtb && dtb<=6.99)
  {
    printf("C+");
  }
  else if (5.50<=dtb && dtb<=6.49)
  {
    printf("C");
  }
   else if (5.00<=dtb && dtb<=5.49)
   {
         printf("D+");
   }
  else if (4.00<=dtb && dtb<=4.99)
  {
    printf("D");
  }
   else if (dtb<4.00)
   {
     printf("F");
   }
  return 0;
}