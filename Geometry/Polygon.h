#pragma once
#include "PointBase.h"

//-----------------------------------------------------------------
// Name: Polygon
// Description: Bi��u di��n l��p �a gia�c, k�� th��a ca�c ph��ng th��c cu�a 
//				l��p PointBase, g��m 2 thu��c ti�nh la� m_byAmuont: s�� �i��m
//				cu�a �a gia�c, con tro� m_pPolygon tro� t��i ma�ng g��m m_byAmount
//				�i��m la� ���i t���ng cu�a l��p PointBase
//-----------------------------------------------------------------

class Polygon : public PointBase{
private :
	int m_byAmount;
	PointBase *m_pPolygon;
public :
	Polygon();
	Polygon(int m_byAmount, PointBase *m_pPolygon);
	~Polygon();
	int getAmount();
	void setAmount(int m_byAmount);
	void setPolygon(PointBase *m_pPolygon);
	PointBase* getPolygon();
	void import();
	void display();
	Polygon translatinal(Vector vector);
	Polygon turn(float fAlpha);
	Polygon zoom(float fCoefficient);
};

