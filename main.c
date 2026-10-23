#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  switch(n)
  {
    case 1:
      printf("xep_loai_xuat_sac");
     case 2:
      printf("xep_loai_gioi");
     case 3:
      printf("xep_loai_kha");
     case 4:
      printf("xep_loai_trung_binh");
    default:
      printf("khong_hop_le");
      
      
  }
  
  return 0;
}