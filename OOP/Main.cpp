#include <iostream>
#include <string>
#include"Auxiliary.h"
#include"Myclass.h"
#include"Myclass.cpp"
#include"Myfunc.h"
//#include"Myfunc.cpp"

using namespace std;

//#define POINTS_DISTANCE
//#define ASSIGNMENT
//#define OTHERS
#define SIMPLE_FRACTION

int main()
{
	setlocale(LC_ALL, "Russian");
	std::system("color F0");
	Font(25);


#ifdef POINTS_DISTANCE
	double ax, ay, bx, by;
	Point A; // ���������� ������� "�" ��������� "Point"
	Point B;
	std::cout << "\t\t ������� ���������� ����� A" << std::endl;
	W_line();
	std::cout << "������� �: ";
	std::cin >> ax;
	std::cout << "������� y: ";
	std::cin >> ay;
	//system("cls");

	A.set_x(ax);
	A.set_y(ay);

	std::cout << "\t\t ������� ���������� ����� B" << std::endl;
	W_line();
	std::cout << "������� �: ";
	std::cin >> bx;
	std::cout << "������� y: ";
	std::cin >> by;
	//system("cls");

	B.set_x(bx);
	B.set_y(by);

	std::cout << "\t ���������� ����� A �� ����� � - "<< A.distance(B) << std::endl;
	
	W_line();
	std::cout << "\t ���������� ����� ������� � � B - "<< distance(A, B) << std::endl;
	W_line();

	//���������� ����������
	//std::cout << "����� add - " << A.add(B) << std::endl;
	std::cout << A + B << endl;

	

	system("pause");

#ifdef ASSIGNMENT

#endif // ASSIGNMENT

#endif // POINTS
	///////////////////////////////////////////////////////////////////////////
#ifdef ASSIGNMENT
	{

		/*Point& operator=(const Point& other)
		{
			this->x = other.x;
			this->y = other.y;
			std::cout << "\t\tCopyAssignment:\t" << this << std::endl;
			return *this;
		}
*/


		Point A, B, C;
		A = B = C = Point(2, 3);


		//double cx, cy;
		//Point C; // ���������� ������� "�" ��������� "Point"
		//Point D;
		//std::cout << "\t\t ������� ���������� ����� C" << std::endl;
		//W_line();
		//std::cout << "������� �: ";
		//std::cin >> cx;
		//std::cout << "������� y: ";
		//std::cin >> cy;


		//C.set_x(cx);
		//C.set_y(cy);

		//std::cout << "���������� ����� C" << " x: " << C.get_x() << " y: " << C.get_y() << std::endl;
		//W_line();
		//std::cout << "���������� ����� D" << " x: " << D.get_x() << " y: " << D.get_y() << std::endl;
		//W_line();
		//std::cout << "\t����� ����������" << std::endl;
		//D = C;

		//std::cout << "���������� ����� C" << " x: " << C.get_x() << " y: " << C.get_y() << std::endl;
		//W_line();
		//std::cout << "���������� ����� D" << " x: " << D.get_x() << " y: " << D.get_y() << std::endl;
		//W_line();




	}
#endif // ASSIGNMENT

	//////////////////////////////////////////////////////////////////////////
#ifdef OTHERS
	{
		//W_line();

		//A.print();
		////A.print_y();
		//W_line();


		//std::cout << "\tA.get_x() = " << A.get_x() << std::endl;
		//std::cout << "\tA.get_y() = " << A.get_y() << std::endl;
		//dd = A.distance();
		//std::cout << "Distance: " << A.distance();
		//W_line();


		//	Point B(3, 4);

		//	//B.set_x(5);
		//	//B.set_y(6);
		//	Point* pB;
		//	pB = &B;
		//	std::cout << "\tB.get_x() = " << pB->get_x() << std::endl;
		//	std::cout << "\tB.get_y() = " << pB->get_y() << std::endl;
		//	W_line();
		//
		//W_line();
		//{
		//	Point C = 5;
		//	//C.print();


		//}

		//{
		//	Point D = B;
		//	D.print();
		//	std::cout << "Distance: " << distance(A.get_x(), D.get_x(), A.get_y(), D.get_y()) << std::endl;
		//}

	}
	//W_line();
	//system("pause");
#endif // OTHERS
    //////////////////////////////////////////////////////////////////////////
#ifdef SIMPLE_FRACTION
	
	Begin :
	{
		
		Fraction X, Y;
		int num_1, num_2;
		std::cout << "������� ������ ������� ����� � ������� �/� (��� � - ������������ �������� �� 1 �� 500): ";
		parse(X);
		//char str[7];
		////cin >> num_1;
		//cin.getline(str, 25);
		//cout << str;
		//std::cin.getline(a, 10, '/' );
		//std::cout << num_1;
		/*Y.set_num(12);
		Y.set_denum(30);
		
		X.set_num(300);
		X.set_denum(50);
		cout << "\t";
		X.print();
		W_line();
		cout << "\t";
		Y.print();
		W_line();*/
		//int a, b;
		/*a = X.get_num();
		b = X.get_denum();*/
		//std::cout << "\t���������: " << a << "\t�����������: " << b << std::endl;
	
	
	}
	//goto Begin;

#endif // SIMPLE_FRACTION


	

	std::system("pause");
	return 0;
}
