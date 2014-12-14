#include "Triangle.h"
#include "Polygon.h"

//Kh��i ta�o cho class
Triangle::Triangle() : Polygon(){
}

//Kh��i ta�o co� ���i cho l��p Triangle
Triangle::Triangle(Polygon oPolygon){
	if (oPolygon.getAmount() == 3)
		this->m_oTriangle = oPolygon;
	else
		cout << "Not a Triangle points" << endl;
}

//Ha�m hu�y cu�a l��p 
Triangle::~Triangle(){
}

//Ha�m tra� v�� gia� tri� cu�a 1 ���i t���ng cu�a l��p �a gia�c hi��n thi� to�a ��� ca�c �i��m cu�a tam gia�c
Polygon Triangle::getTriangle(){

	return m_oTriangle;
}

//���t gia� tri� va�o b��ng tham tri� la� ���i t���ng cu�a l��p Polygon
void Triangle::setTriangle(Polygon oPolygon){
	if (oPolygon.getAmount() == 3)
		this->m_oTriangle = oPolygon;
	else
		cout << "Not a Triangle points" << endl;
}

//Quay hi�nh tam gia�c theo 1 go�c fAlpha ��a va�o
Triangle Triangle::turn(float fAlpha){
	return m_oTriangle.turn(fAlpha);
}

//Ti�nh ti��n hi�nh tam gia�c theo 1 vector ��a va�o
Triangle Triangle::translatinal(Vector vector){

	return m_oTriangle.translatinal(vector);
}

//T�ng gia�m ki�ch th���c cu�a hi�nh
Triangle Triangle::zoom(float fCoefficient){

	return m_oTriangle.zoom(fCoefficient);
}

void Triangle::display(){
	m_oTriangle.display();
}

void Triangle::import(){
	m_oTriangle.setAmount(3);
	cout << endl << "Nhap toa do: " << endl;
	for (int nNum = 0; nNum < m_oTriangle.getAmount(); nNum++){
		cout << "Point " << nNum++ << " : " << endl;
		m_oTriangle.getPolygon()[nNum].import();
	}
}
