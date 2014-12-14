#include "Polygon.h"
#include "PointBase.h"
#include <iostream>
using namespace std;

//Kh��i ta�o cho l��p Polygon
Polygon::Polygon() {
	m_byAmount = 3;
	m_pPolygon = new PointBase[m_byAmount];
}

//Kh��i ta�o co� ���i cho l��p Polygon
Polygon::Polygon(int amount, PointBase *pointBase){
	this->m_byAmount = amount;
	this->m_pPolygon = pointBase;
}

//Ha�m hu�y
Polygon::~Polygon(){
//	delete (this->m_pPolygon);
}

//L��y gia� tri� cu�a bi��n m_byAmount, tra� v�� ki��u int; 
int Polygon::getAmount(){

	return m_byAmount;
}

//���t gia� tri� cho bi��n m_byAmount
void Polygon::setAmount(int m_byAmount){
	this->m_byAmount = m_byAmount;
}

void Polygon::setPolygon(PointBase *m_pPolygon){
	this->m_pPolygon = m_pPolygon;
}

//L��y ra con tro� ma�ng tro� t��i vu�ng nh�� cu�a to�a ��� ca�c �i��m cu�a �a gia�c
PointBase* Polygon::getPolygon(){
	PointBase *pPolygonTemp;
	pPolygonTemp = m_pPolygon;

	return pPolygonTemp;
}

//Nh��p gia� tri� va�o cho m��i ���i t���ng Polygon 
void Polygon::import(){
	cout << "Nhap so diem cua da giac: ";
	cin >> m_byAmount;
	cout << endl << "Nhap toa do: " << endl;
	for (int nNum = 0; nNum < m_byAmount; nNum++){
		cout << "Point " << nNum+1 << " : " << endl;
		m_pPolygon[nNum].import();
	}
}

//Hi��n thi� th�ng tin to�a ��� ca�c �i��m cu�a �a gia�c
void Polygon::display(){
	cout << "Toa do cac diem cua da giac co " << m_byAmount << "canh : " << endl;
	for (int nNum = 0; nNum < m_byAmount; nNum++){
		cout << "Point " << nNum+1 << " : " << endl;
		m_pPolygon[nNum].display();
	}
}
 //Ti�nh ti��n hi�nh �a gia�c theo m��t vector ����c nh��p va�o
Polygon Polygon::translatinal(Vector vector){
	Polygon oPolygon;
	oPolygon.setAmount(m_byAmount);
	oPolygon.setPolygon(m_pPolygon);
	for (int nNum = 0; nNum < m_byAmount; nNum++){
 		oPolygon.getPolygon()[nNum] = m_pPolygon[nNum].translatinal(vector);
	}
	return oPolygon;
}

//Quay �a gia�c theo 1 go�c xa�c �i�nh b��i go�c fAlpha
Polygon Polygon::turn(float fAlpha){
	Polygon oPolygon;
	for (int nNum = 0; nNum < m_byAmount; nNum++){
		oPolygon.m_pPolygon[nNum] = m_pPolygon[nNum].turn(fAlpha);
	}

	return oPolygon;
}


//Pho�ng to thu nho� �a gia�c b��ng h�� s�� fCoefficient
Polygon Polygon::zoom(float fCoefficient){
	Polygon oPolygon;
	for (int nNum = 0; nNum <= m_byAmount; nNum++){
		oPolygon.m_pPolygon[nNum] = m_pPolygon->zoom(fCoefficient);
	}

	return oPolygon;
}


