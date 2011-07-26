//============================================================================
// Name        : Class712.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int sum(int n) {

	int total = 0;

	//Version 1 -- loop
//	for (int i = 1; i <= n; i++) {
//		total += i;
//	}
	while (n > 0) {
		total += n;
		n--;
	}

	//Version 2 -- closed form
	//total = n * (n + 1) / 2; //watch out for integer division

	//Version 3 -- recursion
//	if (n == 0) {
//		return 0;
//	} else {
//		total = sum(n-1) + n;
//		return total;
//	}

	return total;
}


int main() {

	int val;

	do {
		cout << "Enter (neg to stop): ";
		cin >> val;

		if (val < 0) break;

		cout << "val: " << val << endl;
		cout << "Result: " << sum(val) << endl << endl;
		cout << "val: " << val << endl;
		/*
		 * The call-by-value parameter passing mechanism is used
		 * when calling the sum function. Consequently, the value of
		 * the variable 'val' does not change, even the corresponding
		 * parameter 'n' in the function is modified.
		 */

//		if (val >= 0) {
//			cout << "Result: " << sum(val) << endl << endl;
//		}

	} while (true);// (val >= 0);

	return 0;
}
