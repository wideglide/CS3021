//============================================================================
// Name        : Class713.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <math.h>
#include <string>
#include <iostream>
using namespace std;

#define PI 3.14159265

void sample1( ) {
	double degree, result;
	degree = 60.0;

	result = cos (degree * PI/180);

	cout << result << endl;

	return;
}

void string1( ) {

	string str;
	int n;

	n = 10;
	str = "Hello";
	string space = "";

	for (int i = 0; i < 10; i++) {

		space += "  ";

		cout << space << str << endl;
        //	cout << str << " " << i << endl;
	}

	return;
}

void string2 ( ) {

	string first, last;

	first = "John";
	last = "Smith";

	string fullname1 = first + " " + last; //John Smith
	string fullname2 = last + ", " + first; //Smith, John
	cout << fullname1 << endl << fullname2 << endl;

	string fullname3 = "";

//	fullname3 = first[0];
//	fullname3 = fullname3 + ". " + last;


	fullname3.append(1, first[0]); //change 1 to 3 and see what happens
	fullname3.append(". " + last);
    //or
    //fullname3 = fullname3 + ". " + last;

	cout << fullname3 << endl;

    /*
     Note:

     We cannot the string concatenation operation as

            string s = first[0] + ". " + last;

     because of data type mismatch. Expression first[0] is char, not string
     */

	return;
}

void string3( ) {

    cout << endl << endl;

    string str = "This is a test";

    cout << "'" << str << "' has " << str.size() << " characters." << endl;
    cout << str.substr(0,4) << endl;
    cout << "First blank space in the string at position " << str.find(" ") << endl;
    cout << str << endl;

    return;
}

void string4( ) {
	//find the number of blank spaces in a given string
	string str = "Hello world how  are you  .";

	string searchStr = " ";

	int cnt = 0;
	int loc = str.find(searchStr);

	while (loc >= 0) { /*not found*/

		cnt++;

		str = str.substr(loc+1,str.size( ));
		loc = str.find(searchStr);
	}

	cout << cnt << endl;

	return;
}

int main() {

	//sample1( );

	//string1( );

	//string2( );

    //string3( );

	string4();

	return 0;
}
