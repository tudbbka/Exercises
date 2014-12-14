#pragma once
#include "PointBase.h"
#include "Vector.h"
#include <math.h>

//-----------------------------------------------------------------
// Name: PointBase
// Description: Bi��u di��n �i��m trong hi�nh ho�c, g��m 2 thu��c ti�nh la�
//				tung ��� va� hoa�nh ���. Cu�ng ca�c ph��ng th��c l��y to�a ���,
//				���t gia� tri� �i��m, ti�nh ti��n, xoay �i��m theo g��c O,
//				xu��t m��t �i��m.
//-----------------------------------------------------------------

class PointBase{
	float m_fAbscissa;
	float m_fOrdane;
public:
	PointBase::PointBase();
	PointBase(float m_fAbscissa, float m_fOrdane);
	~PointBase();
	float getAbscissa();
	float getOrdane();
	void setAbscissa(float m_fAbscissa);
	void setOrdane(float m_fOrdane);
	PointBase translatinal(Vector vector);
	PointBase turn(float fAlpha);
	PointBase zoom(float fCoefficient);
	void display();
	void import();
};

