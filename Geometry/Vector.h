#pragma once

//-----------------------------------------------------------------
// Name: Vector
// Description: Bi��u di��n to�a ��� cu�a cu�a 1 vector g��m 2 thu��c ti�nh la�
//				hoa�nh ��� va� tung ���
//				Ca�c ph��ng th��c kh��i ta�o va� nh��p to�a ���
//-----------------------------------------------------------------

class Vector{
public:
	float m_fAbscissa;
	float m_fOrdane;
public:
	Vector();
	Vector(float m_fAbscissa, float m_fOrdane);
	void import();
	~Vector();
};

