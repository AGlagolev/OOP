#include<iostream>
#include"Myclass.h"

/********************************************************************************************************/
/*************************************** Fraction *******************************************************/
/********************************************************************************************************/
// Описывают простую дробь
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
	void LCM(const Fraction& other)
	{
		int a, b;
		for (int i = 2; i <= this->denominator*other.denominator; i++)
		{
			if ((this->numerator%i == 0) && (this->denominator%i == 0))
			{
				a /= i;
				b /= i;
				this->numerator /= i;
				this->denominator /= i;
				i = this->denominator;			
			}
		}
	};
////////////////////////////////////////
	bool GCD()
	{
		int a, b;
		a = this->numerator;
		b = this->denominator;

		bool res =false;
		for (int i = this->denominator; i >1 ; i--)
		{
			if ((this->numerator%i == 0) && (this->denominator%i == 0))
			{
				a /= i;
				b /= i;
				this->numerator /= i;
				this->denominator /= i;
				i= this->denominator;
				res = true;
			}
		}
		return(res);
	};
//////////////////////////////////////// GET&SET
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
			std::cout << this->numerator << " / " << this->denominator;			
		}
////////////////////////////////////////

////////////////////////////////////////

////////////////////////////////////////

////////////////////////////////////////
/********************************************************************************************************/
//// Operators

//////////////////////////////////////// "*"
		Fraction& operator*(const Fraction& other)
		{
			Fraction fucking_res;			
			fucking_res.set_num(this->numerator * other.numerator);
			fucking_res.set_denum(this->denominator * other.denominator);
			return fucking_res;
		};
//////////////////////////////////////// "/"
		Fraction& operator/(const Fraction& other) const
		{
			Fraction S;
			S.set_num(this->numerator * other.denominator);
			S.set_denum(this->denominator * other.numerator);
			return S;
		};
//////////////////////////////////////// "+"
		Fraction& operator+(const Fraction& other) const
		{
			Fraction S;
			
				S.denominator = this->denominator * other.denominator;
				S.numerator = (this->numerator*(S.denominator / this->denominator)) + (other.numerator*(S.denominator / other.denominator));
			
			return S;
		};
//////////////////////////////////////// "-"
		Fraction& operator-(const Fraction& other) const
		{
			Fraction S;
			S.denominator = this->denominator * other.denominator;
			S.numerator = (this->numerator*(S.denominator / this->denominator)) - (other.numerator*(S.denominator / other.denominator));
			
			return S;
		};
//////////////////////////////////////// "=" 
		Fraction& operator=(const Fraction& other)
		{
			//*this = other;
			this->numerator = other.numerator;
			this->denominator = other.denominator;
			//std::cout << "\t\tCopyAssignment:\t" << this << std::endl;
			return *this;
		}
//////////////////////////////////////// "+="
		void operator+=(const Fraction& other) 
		{			
			int Mult;
			Mult = denominator * other.denominator;
			numerator = (numerator*(Mult/denominator)) + (other.numerator*(Mult/ other.denominator));
			denominator = Mult;
			
		};
//////////////////////////////////////// "-="
		void operator-=(const Fraction& other)
		{
			int Mult;
			Mult = denominator * other.denominator;
			numerator = (numerator*(Mult / denominator)) - (other.numerator*(Mult / other.denominator));
			denominator = Mult;
			
		};
//////////////////////////////////////// "*="
		void operator*=(const Fraction& other)
		{		
			numerator = numerator * other.numerator;
			denominator = denominator*other.denominator;
		};
//////////////////////////////////////// "/="
		void operator/=(const Fraction& other)
		{
			numerator = numerator * other.denominator;
			denominator = denominator * other.numerator;
		};
//////////////////////////////////////// "=="
		bool operator==(const Fraction& other) const
		{
			bool d = false;
			double c = 1 / 2;
			double a = this->numerator / this->denominator;
			double b = other.numerator / other.denominator;
			if(a==b)
			//if ((double)(numerator / denominator) == (double)(other.numerator / other.denominator))
			{
				d = true;
				return d;
			}
			else
			{
				d = false;
				return d;
			}
		};
//////////////////////////////////////// "<"
		bool operator<(const Fraction& other) const
		{
			if ((double)(numerator / denominator) < (double)(other.numerator / other.denominator))
			{
				return true;
			}
			else return false;
		};
//////////////////////////////////////// ">"
		bool operator>(const Fraction& other) const
		{
			if ((double)(numerator / denominator) > (double)(other.numerator / other.denominator))
			{
				return true;
			}
			else return false;
		};
/********************************************************************************************************/
//// Constructor
		Fraction(int nom = 1, int denom = 1)
		{
			set_num(nom);
			set_denum(denom);
			
			std::cout << "\t\tConstructor:\t" << this << std::endl;
		};
		Fraction(const Fraction& other)
		{
			*this = other;

		}
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

