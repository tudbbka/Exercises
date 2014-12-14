#pragma once
#include <vector>
#include <string>
#include <stack>
using namespace std;
class Expr{
private:
	string m_sString;
public:
	Expr();
	Expr(string pString);
	~Expr();
	bool check(string temp1, string temp2);
	string InfixToSuffix();
	float convertNumber(string charTemp);
	bool checkSymbol(string temp);
	float eval();
	void import();
	vector<string> analyString();
	bool checkNumber(string temp)
};

