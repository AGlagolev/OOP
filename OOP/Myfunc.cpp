
#include "Myfunc.h"
#include"Myclass.h"
#include"Myclass.cpp"


double distance(const Point& A, const  Point& B) // Защита полей от перезаписи с помощю const
{	
	
	return(sqrt((pow(abs( A.get_x()- B.get_x()), 2) + (pow(abs(A.get_y() - B.get_y()), 2)))));
}

void parsw(Fraction& A)
{
par_begin:

	int a, b, pos;
	a = b = pos = -1;
	std::string s1, s2, str;
	std::cout << "Введите простую дробь в формате ч/ч \n(где ч - целочисленое число от 1 до 500): ";
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
		std::cout << "Неправильный ввод. Повторите попытку " << std::endl;
		
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
//std::ostream& operator<<(std::ostream& os, const String& obj)
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

void Arr_clear(char* Arr)
{
	for (int i = 0; i < 300; i++)
	{
		*(Arr + i) = ' ';
	}
}
////////////////////////////////////////////////
//std::ostream& operator<<(std::ostream& os, const String& obj)
//{
//	for (int i = 0; i <= obj.get_len(); i++)
//	{
//		os << obj.get_Simb(i);
//	}
//	
//	return os;
//}

///////////////////////////////////////////////
bool comparison(const String& A, const String& B)
{

	int z = 0;
	if (A.get_len() > B.get_len())
	{
		z = B.get_len();
	}
	else z = A.get_len();


	for (int i = 0; i < z; i++)
	{
		if (A.get_Simb(i) > B.get_Simb(i))	return true;
		if (A.get_Simb(i) < B.get_Simb(i))	return false;
	}
}
///////////////////////////////////////////////
int fin_d(char Arr[], const String& A, const String& B)
{
	int z1 = A.get_len();
	int z2 = B.get_len();
	int z3 = 0;
	while (Arr[z3] != '\0')
	{
		Arr[z3] = Arr[z3];
		z3++;
	}
	

	for (int i = 0; i < z1; i++)
	{
		if (Arr[0] == A.get_Simb(i))
		{
			for (int g = 0; g < z3; g++)
			{
				if (Arr[g] != A.get_Simb(i + g)) goto b;
			}
			return 1;
		}		
	}

	b:

	for (int i = 0; i < z2; i++)
	{
		if (Arr[0] == B.get_Simb(i))
		{
			for (int g = 0; g < z3; g++)
			{
				if (Arr[g] != B.get_Simb(i + g)) goto End;
			}
			return 2;
		}
	}
	End:
	return 0;
}