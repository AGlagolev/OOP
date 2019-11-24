#include <iostream>
#include"Auxiliary.h"
#include"Myclass.h"
#include"Myclass.cpp"
#include"Myfunc.h"
//using namespace std;



void main()
{
	setlocale(LC_ALL, "Russian");
	system("color F0");
	Font(40);

	{
		double a, b;
		//double gx, gy;
		Point A; // Объявление объекта "А" структуры "Point"


		std::cout << "введите х: ";
		std::cin >> a;
		std::cout << "введите y: ";
		std::cin >> b;

		A.set_x(a);
		A.set_y(b);
		W_line();

		A.print();
		//A.print_y();
		W_line();


		std::cout << "\tA.get_x() = " << A.get_x() << std::endl;
		std::cout << "\tA.get_y() = " << A.get_y() << std::endl;
		W_line();

		
			Point B(3, 4);

			//B.set_x(5);
			//B.set_y(6);
			Point* pB;
			pB = &B;
			std::cout << "\tB.get_x() = " << pB->get_x() << std::endl;
			std::cout << "\tB.get_y() = " << pB->get_y() << std::endl;
			W_line();
		
		W_line();
		{
			Point C = 5;
			//C.print();


		}

		{
			Point D = B;
			D.print();
			std::cout << "Distance: " << distance(A.get_x(), D.get_x(), A.get_y(), D.get_y()) << std::endl;
		}
		
	}
	W_line();
	system("pause");

	


}
