//============================================================================
// Name        : Classroom1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int mypower(int n, int i) {

	if (i < 0) {
		return -1;
	}

	int result = 1;

	while (i > 0) {

		result = n * result; //result *= n

		i--;
	}

	return result;
}

int square(int n) {

	return n * n;

}

int main() {

	int val = mypower(2, -4);

	if (val < 0) {
		cout << "Error"<< endl;

	} else {
		cout << "Result " << val << endl;
	}

	cout << "2 ** -4   " << mypower(2, -4) << endl;
//	cout << "5 ** 0   " << mypower(5, 0) << endl;

/*	int cnt = 1;

	while (cnt <= 10) {

		cout << cnt << "  " << square(cnt) << endl;
		cnt = cnt + 1; //cnt += 1 or cnt++
	}
*/
	return 0;


}
