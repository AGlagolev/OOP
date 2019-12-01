#include "Myfunc.h"
#include"Myclass.h"
#include <cmath>
#include"Myclass.cpp"


double distance(Point A, Point B)
{	
	return(sqrt((pow(abs( A.get_x()- B.get_x()), 2) + (pow(abs(A.get_y() - B.get_y()), 2)))));
}