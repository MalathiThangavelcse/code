#include <stdio.h>
 float pi=1.34;
int main(void) {
float ac,at,ar;
ac=circle(10);
at=triangle(10,5);
ar=rectangle(10,5);
printf("area of circle:%f\n Area of triangle:%f\nArea of rectangle:%f",ac,at,ar);
	return 0;
}
float circle(float a)
{
	return(pi*a*a);
}
float triangle(float b,float h)
{
	return((b*h)/2);
}
float rectangle(float l,float b)
{
	return(l*b);
}
