#include<conio.h>
#include<stdio.h>
#include<math.h>

float grp(int x)
{
	float h=0.1;
	float ans;
	ans=pow(h,x);
	ans/=fact(x);
	return(ans);
}

void main()
{
	int i;
	float x0=0.0,y0=1.0,d1y,d2y,d3y,d4y,y;
	clrscr();

	for(i=0;i<2;i++)
	{
		d1y=((x0*x0)*y0)-1;
		d2y=((x0*x0)*d1y)+(2*x0*y0);
		d3y=((x0*x0)*d2y)+(4*x0*d1y)+2*y0;
		d4y=((x0*x0)*d3y)+(6*x0*d2y)+6*d1y;

		y=y0+(grp(1)*d1y)+(grp(2)*d2y)+(grp(3)*d3y)+(grp(4)*d4y);

		y0=y;
		x0=x0+0.1;
		printf("\ny(%f)= %f",x0,y0);

	}

}

int fact(int x)
{
	int sum=1;
	if(x<=1)
		return(1);
	sum=x*fact(x-1);
	return(sum);
}