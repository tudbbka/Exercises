#pragma once
class ArrayInt{
	int m_nAmount;
	int *m_pInt;
public:
	ArrayInt();
	~ArrayInt();
	void import();
	static void permute(int *pLast, int *pNext);
	void display();
};

