#include "Geometry.h"
using namespace std;

Geometry::Geometry(){
	float m_fAbscissa = 0;
	float m_fOrdane = 0;
}


Geometry::~Geometry(){
}

float Geometry::getAbscissa(){
	return m_fAbscissa;
}

float Geometry::getOrdane(){
	return m_fOrdane;
}

void Geometry::import(){
	cout << "Nhap hoanh do: " << endl;
	cin >> m_fAbscissa;
	cout << "Nhap tung do: " << endl;
	cin >> m_fOrdane;
}

void Geometry::display(){
	cout << endl << "Hoanh do: " << m_fAbscissa;
	cout << endl << "Tung do " << m_fOrdane;
}