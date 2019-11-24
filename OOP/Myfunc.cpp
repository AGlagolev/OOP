#include "Myfunc.h"
#include <cmath>
double distance(double A_x, double A_y, double B_x, double B_y)
{
	return(sqrt((pow((A_x-B_x),2)+(pow((A_y-B_y),2)))));
}