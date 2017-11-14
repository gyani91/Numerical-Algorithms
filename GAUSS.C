#include<conio.h>
#include<stdio.h>

void main()
{
	 float x,y1=0.0,y2,z1=0.0,z2;
	 clrscr();

	 while(1)
	 {
		x=(85-6*y1+z1)/27;
		y2=(72-6*x-2*z1)/15;
		z2=(110-x-y2)/54;

		printf("\n%f\t%f\t%f",x,y2,z2);

		if(y1==y2 && z1==z2)
			break;
		y1=y2;
		z1=z2;
	 }
}