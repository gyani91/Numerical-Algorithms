#include<conio.h>
#include<stdio.h>
#include<math.h>

float fun(float x)
{
	float r;
	r=(x*x*x)+(2*x*x)+(10*x)-20;
	return(r);
}

void main()
{
	float f1,f2,f3,h1,h2,d1,d2,a0,a1,a2,h,x1=0.0,x2=1.0,x3=2.0,x4;
	clrscr();

	while(1)
	{
		h1=x1-x3;
		h2=x2-x3;

		f1=fun(x1);
		f2=fun(x2);
		f3=fun(x3);

		d1=f1-f3;
		d2=f2-f3;

		a0=f3;
		a1=(d2*h1*h1-d1*h2*h2)/(h1*h2*(h1-h2));
		a2=(d1*h2-d2*h1)/(h1*h2*(h1-h2));

		h= (-2*a0)/(a1+sqrt(a1*a1-4*a2*a0));

		x4=x3+h;

		printf("\n%f",x4);

		if(x3==x4)
			break;

		x1=x2;
		x2=x3;
		x3=x4;
	}
}
