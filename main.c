#include <stdio.h>
int main()
 {
    float distance, order_value;
    printf("nhap_du_lieu");
    scanf("%f,%f",&distance, &order_value);

    if (distance <= 0 || order_value < 0)
	 {
        printf("Du_lieu_khong_hop_le");
    } 
    else if (order_value >= 500000 && distance <= 15) 
	{
        printf("mien_phi");
    }
    else {
        if (distance >= 1 && distance <= 5)
		 {
            printf("phi_la_15000");
        } 
        else if (distance >= 6 && distance <= 15)
		 {
             printf("phi_la_25000");
        } 
        else {
             printf("phi_la_40000");
        }
    }

    return 0;
}
