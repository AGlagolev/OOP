#include "Myfunc.h"
#include"Myclass.h"
#include <cmath>

double distance(double A_x, double B_x, double A_y, double B_y)
{
	return(sqrt((pow(abs(A_x-B_x),2)+(pow(abs(A_y-B_y),2)))));
}