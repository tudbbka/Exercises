#include "PointBase.h"
#include "Vector.h"
#include <math.h>
#include <iostream>
using namespace std;

//Kh��i ta�o kh�ng ���i cho PointBase
PointBase::PointBase(){
	this->m_fAbscissa = 0;
	this->m_fOrdane = 0;
}

//Kh��i ta�o co� ���i cho PointBase
PointBase::PointBase(float m_fAbscissa, float m_fOrdane){
	this->m_fAbscissa = m_fAbscissa;
	this->m_fOrdane = m_fOrdane;
}

//ha�m hu�y cho PointBase
PointBase::~PointBase(){
}

//Ha�m tra� v�� gia� tri� cu�a hoa�nh ���
float PointBase::getAbscissa(){
	return m_fAbscissa;
}

//Ha�m tra� v�� gia� tri� cu�a tung ���
float PointBase::getOrdane(){
	return m_fOrdane;
}

//Ha�n ���t gia� tri� cho hoa�nh ���
void PointBase::setAbscissa(float m_fAbscissa){
	this->m_fAbscissa = m_fAbscissa;
}

//Ha�m ���t gia� tri� cho tung ���
void PointBase::setOrdane(float m_fOrdane){
	this->m_fOrdane = m_fOrdane;
}

//Ha�m ti�nh ti��n 1 �i��m theo 1 vector coi O la� g��c
PointBase PointBase::translatinal(Vector vector){
	PointBase pointBase;
	pointBase.setAbscissa(vector.m_fAbscissa + m_fAbscissa);
	pointBase.setOrdane(vector.m_fOrdane + m_fOrdane);

	return pointBase;
}

//Ha�m xoay 1 �i��m theo t�m O v��i go�c fAlpha
PointBase PointBase::turn(float fAlpha){
	PointBase pointBase;
	pointBase.setAbscissa(m_fAbscissa * cos(fAlpha) - m_fOrdane * sin(fAlpha));
	pointBase.setOrdane(m_fAbscissa * sin(fAlpha) + m_fOrdane * cos(fAlpha));

	return pointBase;
}

//Chi�nh to�a ��� 1 �i��m gia� s�� v��i phe�p t�ng cu�a �i��m thu��c m��t hi�nh
PointBase PointBase::zoom(float fCoefficient){
	PointBase oPointBase;
	oPointBase.setAbscissa(m_fAbscissa * fCoefficient);
	oPointBase.setOrdane(m_fOrdane * fCoefficient);
	return oPointBase;
}

//Hi��n thi� to�a ��� cu�a �i��m
void PointBase::display(){
	cout << "Abscissa : " << m_fAbscissa << endl;
	cout << "Ordane : " << m_fOrdane << endl;
}

// Nh��p va�o to�a ��� cu�a ca�c �i��m
void PointBase::import(){
	cout << "Abscissa: " << endl;
	cin >> m_fAbscissa;
	cout << "Ordane: " << endl;
	cin >> m_fOrdane;
}
