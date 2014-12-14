#pragma once
#include "PointBase.h"
#include "Vector.h"
#include "Polygon.h"
#include "Triangle.h"
#include <iostream>
using namespace std;

//-----------------------------------------------------------------
// Name: Triangle
// Description: Bi��u di��n hi�nh tam gia�c.����c th��a k�� t�� l��p Polygon
//				chi� co� 1 thu��c ti�nh la� ���i t���ng cu�a l��p Polygon
//				nh�ng ����c ���t s�� �i��m lu�n la� 3
//				Co� s�� du�ng na�p ch��ng 1 s�� ph��ng th��c
//-----------------------------------------------------------------

class Triangle : public Polygon{
private :
	Polygon m_oTriangle;
public :
	Triangle();
	Triangle(Polygon oTriangle);
	~Triangle();
	void setTriangle(Polygon oTriangle);
	Polygon getTriangle();
	void import();
	void display();
	Triangle translatinal(Vector vector);
	Triangle turn(float fAlpha);
	Triangle zoom(float fCoefficient);
};

