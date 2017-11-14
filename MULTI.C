#include<conio.h>
#include<stdio.h>

float f(float x)
{
	float r;
	r=(x*x*x)+(x*x)-1;
	return(r);
}

float df(float x)
{
	float r;
	r=(3*x*x)+(2*x);
	return(r);
}

void main()
{
	float s,x1=1.0,x2;
	clrscr();

	while(1)
	{
		s=x1-(f(x1)/df(x1));
		x2=s-(f(s)/df(x1));
		printf("%f\n",x2);
		if(x1==x2)
			break;
		x1=x2;
	}
}

