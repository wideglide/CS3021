//============================================================================
// Name        : Class725.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//============================================================================
// Name        : Class725.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void swap(int* p, int* q) { //exchanging the two values

	int t = *p;
	*p = *q;
	*q = t;
}

void swap2(int* p, int* q) { //this confirms that pointers are passed by value

	//set p point to q's value box and
	//q point to p's value box

	int* t;

	t = p;
	p = q;
	q = t;
}

void swap3(int& r, int& s) {

	int t;

	t = r;  //value box is referenced directly by the reference variable;
	r = s;  //you don't need a deference operator like the one for the pointer variable
	s = t;  //Reference variable is fixed; it can't change to refer to a different value box
}

void sample1() {

	int* p1;
	int* p2;

	p1 = new int;
	p2 = new int;

	*p1 = 10;
	*p2 = 20;

	cout << *p1 << "  " << *p2 << endl;

	swap(p1, p2);

	cout << *p1 << "  " << *p2 << endl;

	*p1 = 100;
	*p2 = 200;

	cout << endl;
	cout << *p1 << "  " << *p2 << endl;

	swap2(p1, p2);

	cout << *p1 << "  " << *p2 << endl;
}

void sample2( ) {

	//This is an example of call-by-reference
	int n, m;

	n = 10;
	m = 20;

	cout << endl;
	cout << n << "  " << m << endl;

	swap3(n, m);

	cout << n << "  " << m << endl;
}


int main() {

	sample1();

	sample2();

	return 0;
}

