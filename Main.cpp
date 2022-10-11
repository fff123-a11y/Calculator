#include <iostream>
#include "Calculator.h"
using namespace std;

//const int MAX_EXP_LEN = 1000;			//最大表达式长度	防止内存溢出

//main函数
int main()
{
	Calculator cal;
	cout << cal.operatorSym << endl;
	cout << "----------" << endl;

	while (true) {
		getline(cin, cal.infix);
		/*
		if (cal.infix.length() > MAX_EXP_LEN) {
			cout << "超出最大长度！" << endl;
			system("pause");
		}
		else {
			cal.calculate();
		}
		*/
		cal.calculate();
		cout << cal.getResult() << endl;
	}
	return 0;
}
