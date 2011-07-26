//============================================================================
// Name        : Class719.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//An array is a homogeneous collection of data items. In contrast
//a struct is a heterogeneous collection of data items.

struct Cat {
	string name;
	string breed;
	int    age;
	float  wgt;
};


void clearArray(int num[ ], int size) {

	//Is an array passed by value?? Let's test
	for (int i = 0; i < size; i++) {
		num[i] = 0;
	}

}

void sample1( ) {

	int list[ ] = { 10, 20, 30, 40, 50, 60};

	for (int i = 0; i < 6; i++) {
		cout << "  " << list[i];
	}

	cout << endl;

	clearArray(list, 6);

	for (int i = 0; i < 6; i++) {
		cout << "  " << list[i];
	}

	cout << endl;
}

void sample2( ) {

	Cat cat1, cat2;

	cat1.name = "Puff Puff";
	cat1.breed = "Mixed";
	cat1.age = 3;
	cat1.wgt = 13.5;

	cout << cat1.name  << endl;
	cout << cat1.breed << endl;
	cout << cat1.age   << endl;
	cout << cat1.wgt   << endl;

//	cout << cat1 << endl; //??

	cat2 = cat1;

	cout << cat2.name  << endl;
	cout << cat2.breed << endl;
	cout << cat2.age   << endl;
	cout << cat2.wgt   << endl;

	cat2.age += 100;

	cout << cat1.age << endl;
	cout << cat2.age << endl;
}

void happyBday(Cat cat) {
	cat.age += 1;

	cout << cat.age << endl;
}

void sample3( ) {

	Cat cat1;

	cat1.name = "Puff Puff";
	cat1.breed = "Mixed";
	cat1.age = 3;
	cat1.wgt = 13.5;

	happyBday(cat1);

	cout << cat1.age << endl;
}

void sample4( ) {

	//Combine two composite types array and struct into one
	//Here's an array of struct
	Cat myPet[10];

	myPet[0].name = "Bom Bom";
	myPet[0].breed = "Maine Coon";
	myPet[0].age = 10;
	myPet[0].wgt = 9.8;

	//...
}


int main() {

//	sample1( );

//~ sample2( );

//~ sample3( );

	sample4( );

	return 0;
}
