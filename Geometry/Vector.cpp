#include "Vector.h"
#include <iostream>
using namespace std;

//Kh��i ta�o vector co� to�a ��� (0,0)
Vector::Vector(){	
	this->m_fAbscissa = 0;
	this->m_fOrdane = 0;
}

//Ha�m kh��i ta�o co� ���i
Vector::Vector(float m_fAbscissa, float	m_fOrdane){
	this->m_fAbscissa = m_fAbscissa;
	this->m_fOrdane = m_fOrdane;
}

//Nh��p to�a ��� vector
void Vector::import(){
	cout << "Nhap hoanh do vecto : ";
	cin >> m_fAbscissa;
	cout << endl;
	cout << "Nhap Tung do vecto : ";
	cin >> m_fOrdane;
	cout << endl;
}

Vector::~Vector()
{
}
