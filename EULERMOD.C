#include<conio.h>
#include<stdio.h>

float f(float x,float y)
{
	float r;
	r=(x*x)+y;
	return r;
}

void main()
{
	float x1=0.0,y1=1.0,y2,h=0.05,temp=0;
	clrscr();

	for(;x1<=0.2;x1+=h)
	{
		y2=y1+h*f(x1,y1);
		printf("\n\nIteration : %f",y2);
		while(1)
		{
			y2=y1+h/2*(f(x1,y1)+f(x1+h,y2));
			printf("\n%f",y2);
			if(y2==temp)
				break;
			temp=y2;
		}
		y1=y2;
	}
}
