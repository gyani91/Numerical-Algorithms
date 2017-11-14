#include<conio.h>
#include<stdio.h>

float f(float x)
{
	float r;
	r=(x*x*x)-(3*x)+4;
	return(r);
}

void main()
{
	float a,b=-10.0,f1,f2,x,temp;
	int i;
	clrscr();

	f1=f(b);
	b++;
	f2=f(b);
	//printf("%f\n%f",f1,f2);

	while((f1*f2)>0)
	{
		//printf("\n%f",f2);
		b++;
		f1=f2;
		f2=f(b);
	}

	a=b-1;
	printf("%f\t%f\t%f\t%f\n",f1,f2,a,b);

	while(1)
	{
		x=((a*f(b))-(b*f(a)))/(f(b)-f(a));
		printf("\n%f",x);

		if(x==temp)
			break;
		temp=x;

		if(f1*f(x)<0)
			a=x;
		else
			b=x;
	}
}