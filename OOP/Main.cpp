#include <iostream>
#include"Auxiliary.h"
#include"Myclass.h"
#include"Myclass.cpp"
#include"Myfunc.h"
//using namespace std;

#define POINTS_DISTANCE
//#define OTHERS

void main()
{
	setlocale(LC_ALL, "Russian");
	system("color F0");
	Font(36);

#ifdef POINTS_DISTANCE
	double ax, ay, bx, by;
	Point A; // Объявление объекта "А" структуры "Point"
	Point B;
	std::cout << "\t\t Введите координаты точки A" << std::endl;
	W_line();
	std::cout << "введите х: ";
	std::cin >> ax;
	std::cout << "введите y: ";
	std::cin >> ay;
	//system("cls");

	A.set_x(ax);
	A.set_y(ay);

	std::cout << "\t\t Введите координаты точки B" << std::endl;
	W_line();
	std::cout << "введите х: ";
	std::cin >> bx;
	std::cout << "введите y: ";
	std::cin >> by;
	//system("cls");

	B.set_x(bx);
	B.set_y(by);

	std::cout << "\t Расстояние точки A от точки В - "<< A.distance(B) << std::endl;
	//std::cout << "\t Расстояние точки B от точки А - "<< B.distance(A) << std::endl;
	W_line();
	std::cout << "\t Расстояние между точками А и B - "<< distance(A, B) << std::endl;
	W_line();
	system("pause");
#endif // POINTS
	///////////////////////////////////////////////////////////////////////////
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

	

	


}
