#include<iostream>
#include"Myclass.h"

/********************************************************************************************************/
/*************************************** Fraction *******************************************************/
/********************************************************************************************************/

class Strings
{
	/********************************************************************************************************/
//// Private
	int num;
	char P[300];
	/********************************************************************************************************/
	//// Public
public:
	//// Metods
	//void LCM(const Fraction& other)
	//{
	//	int a, b;
	//	for (int i = 2; i <= this->denominator*other.denominator; i++)
	//	{
	//		if ((this->numerator%i == 0) && (this->denominator%i == 0))
	//		{
	//			a /= i;
	//			b /= i;
	//			this->numerator /= i;
	//			this->denominator /= i;
	//			i = this->denominator;
	//		}
	//	}
	//};
	//////////////////////////////////////////
	//Fraction& reduce()
	//{
	//	int a, b;
	//	a = this->numerator;
	//	b = this->denominator;

	//	bool res = false;
	//	for (int i = this->denominator; i > 1; i--)
	//	{
	//		if ((this->numerator%i == 0) && (this->denominator%i == 0))
	//		{
	//			a /= i;
	//			b /= i;
	//			this->numerator /= i;
	//			this->denominator /= i;
	//			i = this->denominator;
	//			res = true;
	//		}
	//	}
	//	return(*this);
	//};
	////////////////////////////////////////// GET&SET
	int get_num() const
	{
		return(this->num);
	};
	//////////////////////////////////////////
	/*char* get_Array() const
	{
		char* a;
		char z = 'd';
		return P;
	}*/
	//////////////////////////////////////////
	void set_Arr(char Arr[])
	{
		/*int z = 0;
		while (Arr[z] != 0) z++;
		num = z;
		char* S = new char[z];*/
		for (int i = 0; i < 299; i++)
		{
			P[i] = Arr[i];
		}
		//P = S;
	};
	//////////////////////////////////////////
	//void set_denum(int denom)
	//{
	//	if (denom >= 1 && denom <= 500)
	//	{
	//		this->denominator = denom;
	//	}
	//	else this->denominator = 1;
	//};
	////////////////////////////////////////// OVER_SET
	//Fraction& operator()(int numer, int denum)
	//{
	//	set_num(numer);
	//	set_denum(denum);
	//	return *this;
	//};
	//////////////////////////////////////////
	void print()
	{
		int i = 0;
		while (P[i])
		{
			std::cout << P[i];
			i++;
		}
		std::cout << std::endl;
	}
	//////////////////////////////////////////

	//////////////////////////////////////////

	//////////////////////////////////////////

	//////////////////////////////////////////
	///********************************************************************************************************/
	////// Operators

	////////////////////////////////////////// "*"
	//Fraction& operator*(const Fraction& other)
	//{
	//	Fraction fucking_res;
	//	std::cout << &fucking_res << std::endl;
	//	std::cout << this << std::endl;
	//	std::cout << &other << std::endl;
	//	fucking_res.set_num(this->numerator * other.numerator);
	//	fucking_res.set_denum(this->denominator * other.denominator);
	//	return fucking_res.reduce();
	//};
	////////////////////////////////////////// "/"
	//Fraction& operator/(const Fraction& other) const
	//{
	//	Fraction S;
	//	S.set_num(this->numerator * other.denominator);
	//	S.set_denum(this->denominator * other.numerator);
	//	return S;
	//};
	////////////////////////////////////////// "+"
	//Fraction& operator+(const Fraction& other) const
	//{
	//	Fraction S;

	//	S.denominator = this->denominator * other.denominator;
	//	S.numerator = (this->numerator*(S.denominator / this->denominator)) + (other.numerator*(S.denominator / other.denominator));

	//	return S;
	//};
	////////////////////////////////////////// "-"
	//Fraction& operator-(const Fraction& other) const
	//{
	//	Fraction S;
	//	S.denominator = this->denominator * other.denominator;
	//	S.numerator = (this->numerator*(S.denominator / this->denominator)) - (other.numerator*(S.denominator / other.denominator));

	//	return S;
	//};
	////////////////////////////////////////// "=" 
	//Fraction& operator=(const Fraction& other)
	//{
	//	//*this = other;
	//	this->numerator = other.numerator;
	//	this->denominator = other.denominator;
	//	//std::cout << "\t\tCopyAssignment:\t" << this << std::endl;
	//	return *this;
	//}
	////////////////////////////////////////// "+="
	//void operator+=(const Fraction& other)
	//{
	//	int Mult;
	//	Mult = denominator * other.denominator;
	//	numerator = (numerator*(Mult / denominator)) + (other.numerator*(Mult / other.denominator));
	//	denominator = Mult;

	//};
	////////////////////////////////////////// "-="
	//void operator-=(const Fraction& other)
	//{
	//	int Mult;
	//	Mult = denominator * other.denominator;
	//	numerator = (numerator*(Mult / denominator)) - (other.numerator*(Mult / other.denominator));
	//	denominator = Mult;
	//};
	////////////////////////////////////////// "*="
	//void operator*=(const Fraction& other)
	//{
	//	numerator = numerator * other.numerator;
	//	denominator = denominator * other.denominator;
	//};
	////////////////////////////////////////// "/="
	//void operator/=(const Fraction& other)
	//{
	//	numerator = numerator * other.denominator;
	//	denominator = denominator * other.numerator;
	//};
	////////////////////////////////////////// "=="
	//bool operator==(const Fraction& other) const
	//{
	//	if ((((double)numerator) / denominator) == (((double)other.numerator) / other.denominator))
	//	{
	//		return true;
	//	}
	//	else return false;
	//};
	////////////////////////////////////////// "<"
	//bool operator<(const Fraction& other) const
	//{
	//	if ((((double)numerator) / denominator) < (((double)other.numerator) / other.denominator))
	//	{
	//		return true;
	//	}
	//	else return false;
	//};
	////////////////////////////////////////// ">"
	//bool operator>(const Fraction& other) const
	//{
	//	if ((((double)numerator) / denominator) > (((double)other.numerator) / other.denominator))
	//	{
	//		return true;
	//	}
	//	else return false;
	//};
	///********************************************************************************************************/
	////// Increment_decrement
	////////////////////////////////////////////////// ++ //prefix increment
	//Fraction& operator++()
	//{
	//	this->numerator += this->denominator;
	//	return *this;
	//};
	////////////////////////////////////////////////// ++ //postfix increment
	//Fraction operator++(int)
	//{
	//	Fraction buffer = *this;
	//	this->numerator += this->denominator;
	//	return buffer;
	//}
	///********************************************************************************************************/
	////// Type_convertion
	////////////////////////////////////////////////// int
	//operator bool()
	//{
	//	return numerator;
	//}
	//operator int()
	//{
	//	return numerator;
	//}
	////////////////////////////////////////////////// int	
	//operator double()
	//{
	//	return (double(numerator) / denominator);
	//}
	////// Constructor
	Strings()
	{
		this->num = 1;
		
		std::cout << "\t\tDefaultConstructor:\t" << this << std::endl;
	}
	//Fraction(int nom) // Использует неявное преобразование
	//{
	//	set_denum(1);
	//	set_num(nom*denominator);
	//	//std::cout << "\t\tConstructor:\t" << this << std::endl;
	//};


	////explicit Fraction(int nom) // Исключает неявное преобразование
	////{
	////	set_num(nom*denominator);
	////	set_denum(1);
	////	//std::cout << "\t\tConstructor:\t" << this << std::endl;
	////};
	//Fraction(int nom, int denom)
	//{
	//	set_num(nom);
	//	set_denum(denom);
	//	//std::cout << "\t\tConstructor:\t" << this << std::endl;
	//};
	//Fraction(const Fraction& other)
	//{
	//	*this = other;

	//};

	///********************************************************************************************************/
	////// Destructor
	~Strings()
	{
		std::cout << "\t\tDestructor:\t" << this << std::endl;
	};
};
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
	Fraction& reduce()
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
		return(*this);
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
//////////////////////////////////////// OVER_SET
		Fraction& operator()(int numer, int denum)
		{
			set_num(numer);
			set_denum(denum);
			return *this;
		};
////////////////////////////////////////
		void print() 
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
			std::cout << &fucking_res << std::endl;
			std::cout << this << std::endl;
			std::cout << &other << std::endl;
			fucking_res.set_num(this->numerator * other.numerator);
			fucking_res.set_denum(this->denominator * other.denominator);
			return fucking_res.reduce();
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
			if ((((double)numerator) / denominator) == (((double)other.numerator) / other.denominator))
			{				
				return true;
			}
			else return false;			
		};
//////////////////////////////////////// "<"
		bool operator<(const Fraction& other) const
		{			
			if ((((double)numerator) / denominator) < (((double)other.numerator) / other.denominator))
			{
				return true;
			}
			else return false;
		};
//////////////////////////////////////// ">"
		bool operator>(const Fraction& other) const
		{
			if ((((double)numerator) / denominator) > (((double)other.numerator) / other.denominator))
			{
				return true;
			}
			else return false;
		};
/********************************************************************************************************/
//// Increment_decrement
//////////////////////////////////////////////// ++ //prefix increment
		Fraction& operator++()
		{
			this->numerator += this->denominator;
			return *this;
		};
//////////////////////////////////////////////// ++ //postfix increment
		Fraction operator++(int)
		{
			Fraction buffer = *this;
			this->numerator += this->denominator;
			return buffer;
		}
/********************************************************************************************************/
//// Type_convertion
//////////////////////////////////////////////// int
		operator bool()
		{
			return numerator;
		}
		operator int() 
		{
			return numerator;
		}
//////////////////////////////////////////////// int	
		operator double()
		{
			return (double(numerator) / denominator);
		}
//// Constructor
		Fraction()
		{
			this->numerator = 0;
			this->denominator = 1;
			std::cout << "\t\tDefaultConstructor:\t" << this << std::endl;
		}
		Fraction(int nom) // Использует неявное преобразование
		{
			set_denum(1);
			set_num(nom*denominator);
			//std::cout << "\t\tConstructor:\t" << this << std::endl;
		};

		
		//explicit Fraction(int nom) // Исключает неявное преобразование
		//{
		//	set_num(nom*denominator);
		//	set_denum(1);
		//	//std::cout << "\t\tConstructor:\t" << this << std::endl;
		//};
		Fraction(int nom , int denom )
		{
			set_num(nom);
			set_denum(denom);
			
			//std::cout << "\t\tConstructor:\t" << this << std::endl;
		};
		Fraction(const Fraction& other)
		{
			*this = other;

		};

/********************************************************************************************************/
//// Destructor
		~Fraction()
		{
			//std::cout << "\t\tDestructor:\t" << this << std::endl;
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

