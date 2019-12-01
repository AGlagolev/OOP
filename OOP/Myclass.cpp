#include<iostream>
#include"Myclass.h"

/********************************************************************************************************/
/*************************************** Fraction *******************************************************/
/********************************************************************************************************/
class Fraction
{
/********************************************************************************************************/
//// Private
	int numerator;
	int denominator;

/********************************************************************************************************/
//// Public
public:
//// Metods
		int get_num() const 
	    {
			return(this->numerator);	
		};
////////////////////////////////////////
		int get_denum() const
		{
			return(this->denominator);
		};
////////////////////////////////////////
		void set_num(int nom)
		{
			if (nom >= 1 && nom <= 500)
			{
				this->numerator = nom;
			}
			else this->numerator = 1;
		};
////////////////////////////////////////
		void set_denum(int denom)
		{
			if (denom >= 1 && denom <= 500)
			{
				this->denominator = denom;
			}
			else this->denominator = 1;
		};
////////////////////////////////////////
		void print() const
		{
			std::cout << this->numerator << " / " << this->denominator << std::endl;			
		}
////////////////////////////////////////

////////////////////////////////////////

////////////////////////////////////////

////////////////////////////////////////
/********************************************************************************************************/
//// Operators

//////////////////////////////////////// = 
		Fraction& operator=(const Fraction& other)
		{
			this->numerator = other.numerator;
			this->denominator = other.denominator;
			std::cout << "\t\tCopyAssignment:\t" << this << std::endl;
			return *this;
		}
////////////////////////////////////////

/********************************************************************************************************/
//// Constructor
		Fraction(int nom = 1, int denom = 1)
		{
			set_num(nom);
			set_denum(denom);
			
			std::cout << "\t\tConstructor:\t" << this << std::endl;
		};
/********************************************************************************************************/
//// Destructor
		~Fraction()
		{
			std::cout << "\t\tDestructor:\t" << this << std::endl;
		};
};




/********************************************************************************************************/
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

