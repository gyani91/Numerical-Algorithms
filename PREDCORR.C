#include<conio.h>
#include<stdio.h>

float fun(float x, float y)
{
	float r;
	r=1/(x+y);
	return(r);
}

void main()
{
	int i;
	float x[5],y[5],f[5],h=0.2,temp;
	clrscr();

	x[0]=0.0;
	y[0]=2.0;
	y[1]=2.0933;
	y[2]=2.1755;
	y[3]=2.2493;

	for(i=0;i<4;i++)
	{
		x[i+1]=x[i]+h;
		f[i]=fun(x[i],y[i]);
		//printf("\n%f\t%f\t%f",x[i],y[i],f[i]);
	}

	y[4]=y[0]+(4*h/3)*(2*f[1]-f[2]+2*f[3]);
	f[4]=fun(x[4],y[4]);
	printf("%f\n\n",y[4]);
	while(1)
	{
		y[4]=y[2]+(h/3)*(f[2]+4*f[3]+f[4]);

		printf("\n%f\t%f",y[4],f[4]);

		if(y[4]==temp)
			break;

		f[4]=fun(x[4],y[4]);

		temp=y[4];
	}
}