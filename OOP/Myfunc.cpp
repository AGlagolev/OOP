
#include "Myfunc.h"
#include"Myclass.h"
#include"Myclass.cpp"


double distance(const Point& A, const  Point& B) // ������ ����� �� ���������� � ������ const
{	
	
	return(sqrt((pow(abs( A.get_x()- B.get_x()), 2) + (pow(abs(A.get_y() - B.get_y()), 2)))));
}

void parsw(Fraction& A)
{
par_begin:

	int a, b, pos;
	a = b = pos = -1;
	std::string s1, s2, str;
	std::cout << "������� ������� ����� � ������� �/� \n(��� � - ������������ ����� �� 1 �� 500): ";
	std::getline(std::cin, str);
	pos = str.find('/', 0);
	s1 = str.substr(0, pos);
	s2 = str.substr(pos + 1);
	a = atoi(s1.c_str());
	b = atoi(s2.c_str());

	if ((pos >= 1) && (a>=1) && (a<=500) && (b>=1) && (b<=500))
	{
		A.set_num(a);
		A.set_denum(b);		
	}
	else
	{
		std::cout << "������������ ����. ��������� ������� " << std::endl;
		
		std::system("pause");
		std::system("cls");
		goto par_begin;
	}
	
	

}

//// operator <<
std::ostream& operator<<(std::ostream& os, const Fraction& obj)
{
	os << obj.get_num() << " / " << obj.get_denum();
	return os;
}
//////////////////////////////////////////////////////////////
//std::ostream& operator<<(std::ostream& os, const Strings& obj)
//{
//	os << obj.;
//	return os;
//}
//// operator <<
std::istream& operator>>(std::istream& is,Fraction& obj)
{
	int num, den;
	is >> num >> den;
	obj(num, den);
	return is;
}
