#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
	Factorial f1;
	int n, factorial;
	cout << "Enter the number to find its factorial: ";
	cin >> n;
	factorial = f1.fact(n);
	cout << "Factorial is equal to " << factorial << endl;
	system("pause");
}