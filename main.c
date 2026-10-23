#include <stdio.h>

int main() 
{
  int k;
  int tong = 0;
  scanf("%d",&k);
  if(k<=50)
  {
    
    tong=50*1678;
    printf("%d",tong);
  }
    
  else if((51<=k) && (k<=100))
  {  
    tong=(50*1678+(k-50)*1734);
    printf("%d",tong);
  }
    
  else if((101<k) && (k<=200))
  {
    tong=(50*1678+50*1734+(k-100)*2014);
    printf("%d",tong);
  }
    
  else if ((201<=k) && (k<300))
  {
    tong=(50*1678+50*1734+100*2014+(k-200)*2536);
    printf("%d",tong);
  }
  
  else if ((301<k) && (k<=400))
  {
    tong=(50*1678+50*1734+100*2014+100*2636+(k-300)*2834);
     printf("%d",tong);
  }
   
  else 
  {
    tong=(50*1678+50*1734+100*2014+100*2636+100*2834+(k-400)*2927);
    printf("%d",tong);
  }
  
  return 0;
}