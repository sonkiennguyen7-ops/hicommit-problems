#include <stdio.h>
int main()
{
	int distance, order_value;
	scanf("%d%d",&distance, &order_value);

	if (distance <= 0 || order_value < 0)
	{
		printf("INVALID");
	}
	else if (order_value >= 500000 && distance <= 15)
	{
		printf("%d",0);
	}
	else if (distance >= 1 && distance <= 5)
	{
		printf("%d",15000);
	}
	else if (distance <= 15)
	{
		printf("%d",25000);
	}
	else if(distance >= 15)
    {
		printf("%d",40000);
	}
	return 0;
}#include <stdio.h>
int main()
{
	int distance, order_value;
	scanf("%d,%d",&distance, &order_value);

	if (distance <= 0 || order_value < 0){
		printf("INVALID");
	}
	else if (distance <= 15  && order_value >= 500000 ){
		printf("0");
	}
	else if (distance >= 1 && distance <= 5){
		printf("15000");
	}
	else if (distance <= 15){
		printf("25000");
	}
	else{
		printf("40000");
	}
	return 0;
}