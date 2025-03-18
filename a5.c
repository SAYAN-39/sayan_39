#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x);
float f1(float x);
int main()
{
	float a,b,x,n=0,e;
	printf("error");
	scanf("%f",&e);
	do
	{
		printf("enter the first number");
		scanf("%f",&a);
		printf("enter the second number");
		scanf("%f",&b);
	}while(f(a)*f(b)>0);
	do
	{
		x=(a+b)/2;
		if(f(x)<0)
		{
			a=x;
		}
		else
		{
			b=x;
		}
		if(n==7)
		{
			break;
		}
		n++;
		printf("%f\n\t",x);
	}while((fabs(x))>e);
	return 0;
}
float f(float x)
{
	return((x*x*x)-(9*x)+1);
}
float f1(float x)
{
	return ((3*x*x)-3);
}


