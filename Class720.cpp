//============================================================================
// Name        : Class720.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iomanip>
#include <iostream>
using namespace std;


void sample1( ) {

	int*   p1;
	int  * p2;
	int   *p3;  //p1, p2, and p3 are all pointers to an int

	int* a, b; //WATCH OUT: a is a pointer to int but b is a regular int variable

	//The values of pointers are addresses so you cannot assign a data value to them directly.
	//We need the dereferencing operator. But before we apply this operator, we need to
	//create a memory location to store a data value.

	p1 = new int; //DYNAMIC ALLOCATION, Yeah!! Now we have a box to store an int
					//The 'new' operation returns int* an address of a newly created int box

	*p1 = 45;

	p2 = p1;  //Now we have two pointers referring to the same data

	p3 = new int; //another box

	*p3 = *p1;  //data in a box pointed by p1 is copied to another box pointed by p3

	cout << *p1 << "  " << *p2 << "  " << *p3 << endl;

	*p3 = 20;

	cout << *p1 << "  " << *p2 << "  " << *p3 << endl;

	*p1 = 50;

	cout << *p1 << "  " << *p2 << "  " << *p3 << endl;

}


void sample2( ) {

	int n;

	int* p;

	n = 100;

	p = &n;  //& is the address-of operator

			//at this point, p points to the int box named 'n'

	cout << n << "  " << *p << endl;

}

void exchange1(int a, int b) {

	int t = a;
	a = b;
	b = t;

}

void exchange2(int* a, int* b) {

	int t;
	t = *a;
	*a = *b;
	*b = t;

}

void sample3( ) {

	int i = 10;
	int j = 20;

	exchange1(i, j);

	cout << i << " " << j << endl;

	int* p1;
	int* p2;

	p1 = &i; p2 = &j;

	exchange2(p1, p2);

	cout << *p1 << " " << *p2 << endl;
}

void clear(int list[ ], int size) { //We are actually passing a pointer to the first position of an array

	for (int i = 0; i < size; i++) {
		list[i] = 0;
	}

}

void clear2(int *list, int size) {

	for (int i = 0; i < size; i++) {
			list[i] = 0;
	}
}

void clear3(int list[], int size) {

	int* p;

	p = list;

	int cnt = 0;

	while (cnt < size) {

		*p = 0;

		p = p + 1;

		cnt++;
	}
}


void sample4( ) {

	int num[ ] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

	clear(num, 10);

	clear2(num, 10);

	//clear3(num, 10);

	for (int i = 0; i < 10; i++) {
		cout << "  " << num[i];
	}
}

int main() {

	sample1();

	sample2();

	sample3();

	sample4( );


	return 0;
}
