#include<iostream>
#include"Myclass.h"

class Point
{
	double x;
	double y;
///////////////////////////////////////////////////////////////////////////
public:
	/////////////////////////////////// Methods: /////////////////////////////////////////
	double add(const Point& other)
	{
		return(this->x + other.x);
	};


	double distance(Point other) const
	{		
		return(sqrt((pow(abs(this->x-other.x), 2) + (pow(abs(this->y-other.y), 2)))));
	};

	void set_x(double x)
	{
		if (x >= -100 && x <= 100)
		{
			this->x = x;
		}
		else this->x = 0;
	};
	void set_y(double y)
	{
		if (y >= -100 && y <= 100)
		{
			this->y = y;
		}
		else this->y = 0;
	};

	void print() const
	{
		std::cout << "\t.x = " << this->x << std::endl;
		std::cout << "\t.y = " << this->y << std::endl;
	}
	
	double get_x() const
	{
		return(x);
	}
	double get_y() const
	{
		return(y);
	}
	/////////////////////// Operators: ////////////////////////////////////////////

	double operator+(const Point& other)const
	{
		return this->x + other.x;
	}

	Point& operator=(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		std::cout << "\t\tCopyAssignment:\t" << this << std::endl;
		return *this;
	}
	////////////////////// Constructors: //////////////////////////////////////////
	
	Point(double x =0, double y =0) 
	{
		this->x = x;
		this->y = y;
		std::cout << "\t\tConstructor:\t" << this << std::endl;
	}
	Point(const Point& other) 
	{
		this->x = other.x;
		this->y = other.y;
		std::cout << "\t\tCopyConstructor:\t" << this << std::endl;
	}
	//Point()
	//{
	//	x = y = 0;// или this ->x = this -> y = 0;
	//	std::cout << "DefaultConstructor:\t" << this << std::endl;
	//}

	//////////////////// Destructor:
	~Point()
	{
		std::cout << "\t\tDestructor:\t" << this << std::endl;
	}
};