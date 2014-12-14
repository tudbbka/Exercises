#include "Expr.h"
#include <stack>
#include <iostream>
#
using namespace std;

Expr::Expr(){
}

Expr::Expr(string pString){
	m_sString = pString;
}

Expr::~Expr(){
}
void Expr::import(){
	cout << "Nhap vao phep toan : ";
	getline(cin, m_sString);
}

bool Expr::checkNumber(string temp){
	for (int nCount = 0; nCount < temp.length(); nCount++){
		if (!isdigit(temp[nCount]) 
			return false;
		return true;
	}
}

bool Expr::checkSymbol(string temp){
	switch (temp){
	case "+":	return true;break;
	case "*":	return true;break;
	case "/":	return true;break;
	case "-":   return true;break;
	default :	return false;break;
	}
}

bool Expr::check(char temp1, char temp2){
	if ((temp1 == "+") || (temp1 == "-")) {
		if ((temp2 == "-") || (temp2 == "+")) return true;
		else return false;
	}else if ((temp1 == "*") || (temp1 == "/")) {
		if ((temp2 == "*") || (temp2 == "/") || (temp2 == "+") || (temp2 == "-")) return true;
		else return false;
	}
	return false;
}

string Expr::InfixToSuffix(){
	vector<string>::iterator  itVector;
	vector<string> tempVector = analyString(m_sString);
	vector<string> resultVector;
	int nNumber = 0; 
	for (itVector = tempVector.begin(); itVector != tempVector.end();itVector++ ){
		if (checkNumber(*itVector)){
			resultVector.push_back(*itVector);
		}
		else 
		if (*itVector == "(")
			tempVector.push_back(m_sString[nNumber]);
		else if (checkSymbol(*itVector)){	
			while ((check(tempVector.back(), *itVector)) && checkSymbol(tempVector.back())){
				string temp = tempVector.back();
				resultVector.push_back(temp);
				tempVector.pop_back();
			}
			tempVector.push_back(*itVector);

		}
		else if (*itVector == ")"){
			string temp ;
			while (tempVector.pop_back() != "("){
				temp = tempVector.back();
				resultVector.push_back(temp);
				tempVector.pop_back();
			}
			tempVector.pop_back();
		}
	 }
		if (!Stack.empty()){
			char temp = Stack.top();
			resultVector.push_back(temp);
			Stack.pop();
		}
		string tempString;
		int nNumber1 = 0;
		while (!resultVector.empty()){
			tempString += resultVector.top();
			resultVector.pop();
		}
		return tempString;
};

float  Expr::convertNumber(char charTemp){
	return float(int(charTemp) - 48);
};


float Expr::eval(){
	stack<float> resultVector;
	float fResult;
	string resultString;
	resultString = InfixToSuffix();
	for (int nNumber = resultString.length() - 1; nNumber >= 0; nNumber--){
		if ((resultString[nNumber] >="0") && (resultString[nNumber] <= "9")){
			resultVector.push_back(convertNumber(resultString[nNumber]));
		}
		else if (checkSymbol(resultString[nNumber])){
			float nTemp1 = resultVector.top();
			resultVector.pop();
			float nTemp2 = resultVector.top();
			resultVector.pop();
			switch (resultString[nNumber]){
				case "+" : resultVector.push_back(nTemp1 + nTemp2);break;
				case "-" : resultVector.push_back(nTemp1 - nTemp2);break;
				case "*" : resultVector.push_back(nTemp1 * nTemp2);break;
				case "/" : resultVector.push_back(nTemp1 / nTemp2);break;
				default: break;
			}
		}
	}
	fResult = resultVector.top();
	resultVector.pop();
	return fResult;
}

		
vector<string> Expr::analyString(string tempString){
	vector<string> stringVector, *returnValue;
	for (unsigned int nCount = 0; nCount < tempString.length(); nCount++){
		string temp = "";
		temp += tempString[nCount];
		if (isdigit(tempString[nCount])){
			string temp = "";
			while (nCount < tempString.length()){
				if (!isdigit(tempString[nCount])) break;
				temp += tempString[nCount];
				nCount++;				
			}
		stringVector.push_back(temp);
		nCount--;
		}
		else stringVector.push_back(temp);
	}
	return stringVector;
}
