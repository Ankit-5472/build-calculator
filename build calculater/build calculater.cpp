#include<iostream>
using namespace std;

int main() {

	float num1, num2;
	char operators;

	cout << "**jerry calculater**" << endl;
	cin >> num1 >> operators >> num2;

	switch (operators)
	{
	case'+':cout << num1 << operators << num2 << "=" << num1 + num2; break;
	case'-':cout << num1 << operators << num2 << "=" << num1 - num2; break;
	case'*':cout << num1 << operators << num2 << "=" << num1 * num2; break;
	case'/':cout << num1 << operators << num2 << "=" << num1 / num2; break;
	case'%':
		bool isnum1int, isnum2int;
		isnum1int = ((int)num1 == num1);
		isnum2int = ((int)num2 == num2);

		if (isnum1int && isnum2int)
			cout << num1 << operators << num2 << "=" << (int)num1 % (int)num2;
		else
			cout << "NOT VALID!";
		break;

	default:cout << "ENTER VALID OPERATORS !" << endl; break;

	}
	
	system("pause>0");
}