#include <iostream>
#include <string>


using namespace std;
int main() {
	string expression, leftOperand, rightOperand;
	char operation;
	int i,left,right,result;

	cin >> expression;

	for ( i = 0; (expression[i] >= 48 && expression[i] <= 57); i++ )
		leftOperand += expression[i];

	operation = expression[i];
	rightOperand = expression.substr((i+1));

	left  = stoi(leftOperand);
	right  = stoi(rightOperand);

	result = (operation == '+') ? left + right : (operation == '-' ? (left-right) : (operation == '*' ? (left * right) : (left/right)));

	cout << result;


	return 0;
}
