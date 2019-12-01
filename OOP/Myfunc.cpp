#include "Myfunc.h"
#include"Myclass.h"
#include <cmath>
#include"Myclass.cpp"


double distance(const Point& A, const  Point& B) // Защита полей от перезаписи с помощю const
{	
	//A.set_x(23);
	return(sqrt((pow(abs( A.get_x()- B.get_x()), 2) + (pow(abs(A.get_y() - B.get_y()), 2)))));
}