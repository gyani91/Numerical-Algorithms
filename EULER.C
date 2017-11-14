#include<conio.h>
#include<stdio.h>

float f(float x,float y)
{
	float r;
	r=1+(x*y);
	return(r);
}

void main()
{
	float x1=0,y1=2,y2,h=0.1;
	clrscr();

	for(;x1<=0.4;x1+=h)
	{
		y2=y1+h*f(x1,y1);
		printf("\n%f",y2);
		if(y2==y1)
			break;
		y1=y2;
	}
}
