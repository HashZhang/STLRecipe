#include "Calculator.h"
#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int CalculatorNumber = 9;

Calculator::Calculator()
{
    Setparameter1(0.0);
    Setparameter2(0.0);
}

Calculator::~Calculator()
{
    cout << "Calculator removed!" << endl;
}

double Calculator::add(){
    return Getparameter1() + Getparameter2();
}


