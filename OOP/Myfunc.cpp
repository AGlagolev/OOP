
#include "Myfunc.h"
#include"Myclass.h"
#include"Myclass.cpp"


//using namespace std;

double distance(const Point& A, const  Point& B) // ������ ����� �� ���������� � ������ const
{	
	//A.set_x(23);
	return(sqrt((pow(abs( A.get_x()- B.get_x()), 2) + (pow(abs(A.get_y() - B.get_y()), 2)))));
}

void parsw(Fraction& A)
{
	int a, b, pos;
	std::string s1,s2,str;	
	std::getline(std::cin, str);
	
	pos = str.find('/', 0);
	s1 = str.substr(0, pos);
	s2 = str.substr(pos + 1);
	a = atoi(s1.c_str());
	b = atoi(s2.c_str());
	A.set_num(a);
	A.set_denum(b);
	std::cout << "\ta = "<< a << "\tb = " << b << std::endl;

}