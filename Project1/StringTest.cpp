#include "StringTest.h"
#include <iostream>
#include <string>

using namespace std;
StringTest::StringTest()
{
}


StringTest::~StringTest()
{
}


void StringTest::Test1()
{
	string string1("zhxdick");
	string string2(string1,3);
	cout << string2 << endl;
	string string3(string1,1,4);
	cout << string3 << endl;
	char chs[] = "zhxhash";
	string string4(chs,4);
	cout << string4 << endl;
	string string5(10,'X');
	cout << string5 << endl;
	string string6(string1,0,5);
	cout << string6 << endl;
}

void StringTest::Test2()
{
	
}