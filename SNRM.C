#include<conio.h>
#include<stdio.h>

float f(float x,float y)
{
	float r;
	r=(x*x)+(x*y)-6;
	return(r);
}
float g(float x,float y)
{
	float r;
	r=(x*x)-(y*y)-3;
	return(r);
}

float f1(float x,float y)
{
	float r;
	r=(2*x)+y;
	return(r);
}

float f2(float x,float y)
{
	float r;
	r=x;
	return(r);
}

float g1(float x,float y)
{
	float r;
	r=2*x;
	return(r);
}
float g2(float x,float y)
{
	float r;
	r=(-2*y);
	return(r);
}


float D(float x, float y)
{
	float r;
	r=((f1(x,y)*g2(x,y))-(g1(x,y)*f2(x,y));
	return(r);
}

float Dx(float x, float y)
{
	float r;
	r=((f(x,y)*g2(x,y))-(g(x,y)*f2(x,y))/D(x,y);
	return(r);
}

float Dy(float x, float y)
{
	float r;
	r=((f1(x,y)*g(x,y))-(g1(x,y)*f(x,y))/D(x,y);
	return(r);
}

void main()
{
	float x1=1.0,y1=1.0,x2,y2;
	clrscr();

	while(1)
	{
		x2=x1-Dx(x1,y1);
		y2=y1-Dy(x1,y1);

		printf("\n%f\t%f",x2,y2);
		if(x2=x1 && y2=y1)
			break;
		x1=x2;
		y1=y2;
	}
}