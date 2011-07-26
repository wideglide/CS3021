//============================================================================
// Name        : Class715.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <math.h>
#include <string>
#include <iostream>
using namespace std;

void practice1_Step1() {

	const float DEG_TO_RADIAN = 3.14159 / 180.0;
	float dist, height, alpha, beta;

	cout << "Enter distance between points A and B: ";
	cin >> dist;

	cout << "Enter degree alpha: ";
	cin >> alpha;

	cout << "Enter degree beta: ";
	cin >> beta;

	height = 150;

	cout << "distance: " << dist << endl;
	cout << "alpha:    " << alpha << endl;
	cout << "beta:     " << beta  << endl << endl;
	cout << "height:   " << height << endl;

}

/*
 * d - distance between A and B
 * a - angle A in radian
 * b - angle B in radian
 *
 * return h - height = d * sin(a) * sin(b) / sqrt(sin(a + b) * sin(a-b))
 */
float computeHeight(float d, float a, float b) {
		//Note: Pass values such that a > b?
	float h;

	//h = 150.0; //test value to check the function before
				//writing a full implementation

	h = d * sin(a) * sin(b) / sqrt(sin(a+b) * sin(a-b));

	//test outputs
//	cout << sin(a) <<  endl;
//	cout << sin(b) << endl;
//	cout << sin(a+b) << endl;
//	cout << sin(a-b) << endl;

	return h;
}

void practice1_Step2(){

	const float DEG_TO_RADIAN = 3.14159 / 180.0;
	float dist, height, alpha, beta;

	cout << "Enter distance between points A and B: ";
	cin >> dist;

	cout << "Enter degree alpha: ";
	cin >> alpha;

	cout << "Enter degree beta: ";
	cin >> beta;

	height = computeHeight(dist, alpha * DEG_TO_RADIAN, beta * DEG_TO_RADIAN);

	cout << "distance: " << dist << endl;
	cout << "alpha:    " << alpha << endl;
	cout << "beta:     " << beta  << endl << endl;
	cout << "height:   " << height << endl;
}

/*
 * Count how many times string c occurs in string s
 */
int search(string s, string c) {
	int result = 0;

	int loc = 0;

	while (true) {

		loc = s.find(c, loc); //start looking for c in s from loc

		if (loc < 0) break;

		result++;
		loc++;
	}

	return result;
}
/*
 * Scan the string multiple times. Each scan will detect
 * the number of occurrence of a specified vowel.
 */
void practice2Ver1() {

	string str;

	/*
	 * NOTE: The following input routine does not work as normally expected.
	 * 		 Variable 'str' is terminated by a blank space so if you enter
	 *
	 * 		 This is a test
	 *
	 * 		 the text 'This' is assigned to str.
	 *
	 * 		 You need to use the getline function to read the complete string,
	 * 		 up to the RETURN key press.
	 */
//	cout << "Enter String: " ;
//	cin >> str;

	cout << "Enter string: ";
	getline(cin, str); //input full line

	int cnt = 0;

	cnt += search(str, "a");
	cnt += search(str, "e");
	cnt += search(str, "i");
	cnt += search(str, "o");
	cnt += search(str, "u");

	cout << "Vowel Cnt: " << cnt;
}

/*
 * In this version, we scan the string only once. For each character we
 * process, we test if it is a lowercase vowel and increment the vowel
 * counter accordingly.
 */
void practice2Ver2(){

	string str;

	cout << "Enter string: ";
	getline(cin, str); //input full line

	int cnt = 0;

	for (int loc = 0; loc < str.size(); loc++) {
		char ch = str[loc];
							//NOTE: char constant is single quote
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
			cnt++;
		}
	}

	cout << "Vowel Cnt: " << cnt;
}


int main() {

	/*
	 * Implement this exercise in 2 steps. In Step 1 we implement
	 * input and output routines using a fixed (dummy) output. Once
	 * we confirm the routines work okay, then we implement the
	 * computation routine. Two steps are written in two separate
	 * functions to illustrate the development steps. In practice,
	 * you write the first step and then add or modify code to the
	 * existing code.
	 */
	//practice1_Step1();
	//practice1_Step2();

	/*
	 * Count the number of lowercase vowels in a given string str.
	 * There are two (perhaps more) approaches. Approach 1 is to scan
	 * the string for a specific character. We are looking for
	 * five specific characters (a, e, i, o, & u) so we scan
	 * the string fives, one for each vowel. Approach 2 is to scan
	 * the string exactly once. For each character in the string,
	 * check if this character is a vowel.
	 *
	 * Again you should develop the functions in incremental steps. Here
	 * we provide only the final version.
	 */
	//practice2Ver1();
	practice2Ver2();

	return 0;
}
