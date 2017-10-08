#include <iostream.h>
#include<iomanip.h>
void main()
{
	float r,l,s,pi;
	int a;
    pi=3.14159;
	l=2*pi*r;
	s=pi*r*r;
	switch(a)
	{
	case 1:printf("s=pi*r*r",s);break;
	case 2:printf("l=2*pi*r",l);break;
	case 3:printf("s=pi*r*r,l=2*pi*r",s,l);break;
	}
}