#include "IntegerNumber.h"
#include "ArrayStack.h"
#include <windows.h>
#include <iostream>
using namespace std;

int main(){
	IntegerNumber nNumber;
	nNumber.import();
	ArrayStack *pArrayStack;
	pArrayStack = new ArrayStack();
	IntegerNumber oTemp;
	oTemp.analyseToPrime(pArrayStack, nNumber.getNumber());
	cout << nNumber.getNumber() << " = ";
	pArrayStack->displayPrime();
	cout << endl;
	cout << "125 = " << nNumber.changeBase(16, 125);
	system("pause");
}