#include "Circle.h"
#include "graphics.h"
using namespace std;

Circle::Circle(){
	m_fRadius = 0;
}

Circle::Circle(float fAbscissa, float fOrdane, float fRadius){
	m_fAbscissa = fAbscissa;
	m_fOrdane = fOrdane;
	m_fRadius = fRadius;
}

Circle::~Circle(){
}

float Circle::getRadius(){
	return m_fRadius;
}

void Circle::setRadius(float fRadius){
	m_fRadius = fRadius;
}

void Circle::import(){
	Geometry::import();
	cout << endl << "Ban kinh: ";
	cin >> m_fRadius;
}

void Circle::display(){
	cout << endl << "Circle:";
	Geometry::display();
	cout << endl << "Ban kinh: " << m_fRadius;
}

void Circle::draw(){
	int mh, mode;
	mh = EGA;
	mode = EGALO;
	initgraph(&mh, &mode, "");
	setbkcolor(GREEN);
	setcolor(WHITE);
	setfillstyle(SLASH_FILL, RED);
	circle(5, 4, 5);
	closegraph();
}