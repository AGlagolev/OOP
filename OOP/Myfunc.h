#pragma once
#include <cmath>
#include<iostream>
#include<string>
#include "Myclass.h"

double distance(const Point& A,const Point& B);
void parsw(Fraction& A);
std::ostream& operator<<(std::ostream& os, const Fraction& obj);
std::istream& operator>>(std::istream& is, Fraction& obj);