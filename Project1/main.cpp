#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	string tempString = "(88+9+7)";
	vector<string> stringVector;
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
}

