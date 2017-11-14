#include<conio.h>
#include<conio.h>

float f(float x,float y)
{
	float r;
	r=y-x;
	return(r);
}

void main()
{
	float m1,m2,m3,m4,x1=0.0,x2,y1=2.0,y2,h=0.1;
	clrscr();

	for(;x1<0.4;x1+=h)
	{
		m1=f(x1,y1);
		m2=f(x1+h/2,y1+m1*h/2);
		m3=f(x1+h/2,y1+m2*h/2);
		m4=f(x1+h,y1+m3*h);

		y2=y1+(m1+2*m2+2*m3+m4)*h/6;
		printf("\n%f",y2);
		y2=y1;
	}
}

