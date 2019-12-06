#include <iostream>
#include"Auxiliary.h"
//#include"Myclass.h"
#include"Myclass.cpp"
#include"Myfunc.h"


#define SIMPLE_FRACTION
//#define POINTS_DISTANCE
//#define ASSIGNMENT
//#define OTHERS

int main()
{
	setlocale(LC_ALL, "Russian");
	std::system("color 0A");
	Font(25);

#ifdef SIMPLE_FRACTION

	Begin :
	{
		Fraction X, Y, Z;
		int num_1, num_2;
		W_line();
		std::cout << "\tЗАПИСЬ ПЕРВОГО ЧИСЛА" << std::endl;
		parsw(X);
		W_line();
		std::cout << "\tЗапись второго числа" << std::endl;
		parsw(Y);
	vvod:
		std::system("cls");
		std::cout << "\nПервое число:  ";
		X.print();
		std::cout << "\t\tВторое число:  ";
		Y.print();
		std::cout << std::endl << "\t\t\n\nВыбирете действие, которое необходимо сделать с числами:  \n\n" << std::endl;
		std::cout << "1 - умножение\n2 - деление\n3 - сложение\n4 - вычитание\n9 - Перезаписать числа\nESC - выход\n\n";

		num_1 = _getch();
		

		switch (num_1 - 48)
		{
		case 1:
		{
			Z = X * Y;
			X.print(); std::cout << " * "; Y.print(); std::cout << " = "; Z.print();

			if (Z.GCD())
			{
				std::cout << " = ";	Z.print();
			}

			std::cout << std::endl;
			std::system("pause");
			std::system("cls");
			goto vvod;
			
};
		case 2:
		{
			Z = X / Y;
			X.print(); std::cout << " : "; Y.print(); std::cout << " = "; Z.print();

			if (Z.GCD())
			{
				std::cout << " = ";	Z.print();
			}

			std::cout << std::endl;
			std::system("pause");
			std::system("cls");
			goto vvod;
		};
		case 3:
		{
			Z = X + Y;
			X.print(); std::cout << " + "; Y.print(); std::cout << " = ";

			Z.GCD();			
			Z.print();
			

			std::cout << std::endl;
			std::system("pause");
			std::system("cls");
			goto vvod;
		};
		case 4:
		{
			Z = X - Y;
			X.print(); std::cout << " - "; Y.print(); std::cout << " = ";

			Z.GCD();
			Z.print();


			std::cout << std::endl;
			std::system("pause");
			std::system("cls");
			goto vvod;
		};
		case 9:
		{
			std::system("cls");
			goto Begin;
		};
		case -21:
		{
			break;
		};
		default:
		{
			std::cout << "Неверный ввод_\n";
			std::system("pause");
			std::system("cls");
			goto vvod;

		};
		}
			   
	}	

#endif // SIMPLE_FRACTION
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
	
	W_line();
	std::cout << "\t Расстояние между точками А и B - "<< distance(A, B) << std::endl;
	W_line();

	//ПЕРЕГРУЗКА ОПЕРАТОРОВ
	//std::cout << "Метод add - " << A.add(B) << std::endl;
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
		//Point C; // Объявление объекта "А" структуры "Point"
		//Point D;
		//std::cout << "\t\t Введите координаты точки C" << std::endl;
		//W_line();
		//std::cout << "введите х: ";
		//std::cin >> cx;
		//std::cout << "введите y: ";
		//std::cin >> cy;


		//C.set_x(cx);
		//C.set_y(cy);

		//std::cout << "Координаты точки C" << " x: " << C.get_x() << " y: " << C.get_y() << std::endl;
		//W_line();
		//std::cout << "Координаты точки D" << " x: " << D.get_x() << " y: " << D.get_y() << std::endl;
		//W_line();
		//std::cout << "\tПосле присвоения" << std::endl;
		//D = C;

		//std::cout << "Координаты точки C" << " x: " << C.get_x() << " y: " << C.get_y() << std::endl;
		//W_line();
		//std::cout << "Координаты точки D" << " x: " << D.get_x() << " y: " << D.get_y() << std::endl;
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
	   	 
	return 0;
}
