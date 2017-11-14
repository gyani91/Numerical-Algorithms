#include<conio.h>
#include<stdio.h>

float f(float x)
{
	float r;
	r=(x*x*x)-x-1;
	return(r);
}

float df(float x)
{
	float r;
	r=(3*x*x)-1;
	return(r);
}

void main()
{
	float x1=1.0,x2,f1,f2;
	clrscr();

	f1=f(x1);
	x1++;
	f2=f(x1);
	printf("%f\n%f",f1,f2);

	while((f1*f2)>0)
	{
		printf("\n%f",f2);
		x1++;
		f1=f2;
		f2=f(x1);
	}//detect sign change

	while(1)
	{
		x2=x1-(f(x1)/df(x1));
		printf("\n%f",x2);
		if(x2==x1)
			break;
		x1=x2;
	}
}
