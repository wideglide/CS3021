//============================================================================
// Name        : Class718.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void sample1(){
	//Compute the average of given input values -- 0 to terminate
	double val, sum, avg;
	int cnt;

	sum = 0.0;
	cnt = 0;

	do {
		cout << "Enter value (0 to terminate): ";
		cin >> val;

		if (val == 0) break;

		cnt++;
		sum += val;

	} while (true);

	avg = sum / cnt;

	cout << endl << "Average: " << avg << endl;
}

void sample2(){

	//compute the average of given input values
	//determine the number of values less than average and those
	//greater than average

	//KEY POINT: I need to REMEMBER the input values

	double number[100]; //static declaration and allocation

	double val, sum, avg;
	int cnt, belowAvgCnt, aboveAvgCnt;

	sum = 0.0;
	cnt = belowAvgCnt = aboveAvgCnt = 0;

	do {
		cout << "Enter value (0 to terminate): ";
		cin >> val;

		if (val == 0) break;

		number[cnt] = val;

		cnt++;
		sum += val;

	} while (true); //NOTE: This loop will crash if someone tries to enter more than 100 numbers

	avg = sum / cnt;

	for (int i = 0; i < cnt; i++) {
		if (number[i] < avg) {
			belowAvgCnt++;
		} else if (number[i] > avg) {
			aboveAvgCnt++;
		}
	}

	cout << endl << "Average: " << avg << endl;
	cout << "Below Average Cnt: " << belowAvgCnt << endl;
	cout << "Above Average Cnt: " << aboveAvgCnt << endl;

}

int sum(int collection[ ], int size) {

	int total = 0;

	for (int i = 0; i < size; i++ ) {
		total += collection[i];
	}

	return total;
}

void sample3(){

	//Passing an array to a function

	//static initialization of arrays
	int arr1[ ] = {1, 4, -5, 8, 6, 9, 19};
//	int arr1[7];
//	arr1[0] = 1;
//	arr1[1] = 4;
	//...

	int arr2[ ] = {10, 8, 6, 4, 2, 0,  -2, -4, -6, -8, -10};

	cout << "Sum 1: " << sum(arr1, 7) << endl;
	cout << "Sum 2: " << sum(arr2, 11) << endl;
}

void sample4() {

	int mylist[ ] = {10, 8, 6, 4, 2, 0,  1, 3, 5, 7, 9};

	int sum1 = 0;
	for (int i = 0; i < 11; i++) { //sum of even integers
		if (mylist[i] % 2 == 0) {
			sum1 += mylist[i];
		}
	}

	int sum2 = 0;
	for (int j = 0; j < 11; j++) { //sum of integers in even index position
		if (j % 2 == 0) {
			sum2 += mylist[j];
		}
	}
	cout << "Sum of even ints = " << sum1 << endl;
	cout << "Sum of ints in even pos = " << sum2 << endl;
	

}

int main() {

//	sample1();

//	sample2();

//	sample3();

	sample4();

	return 0;
}
