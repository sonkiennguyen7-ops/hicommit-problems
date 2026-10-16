#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int max = 0;
	scanf("\n%d",&a);
	scanf("\n%d",&b);
	scanf("\n%d",&c);
	if (a<b&&b>c)
	{
	 max=b;
	}
	else if(a>b&&a>c)
		{
	 max=a;
	}
	else
	{
	 max=c;
	}
	printf ("%d",max);
	return 0;
}