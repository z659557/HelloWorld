#include"stdafx.h"
#include"function.h"

double fact(int a)
{
	double f=1;
	if (a <= 1 && a>=0)
		f = 1;
	else if(a>1)
	{
		f *= a*fact(a-1);
	}
	return f;
}