/**
* File main.cpp - Copyright (C) 2019
* Triassic Solutions Private Limited. All rights reserved.
* This file contains implementation of Hybrid Inheritance
* Author  :T0581
* Version :1.0
* Date    :08-07-2019
*
*/


#include <iostream>

using namespace std;

/**
* Class CNumbers
* <To check hybrid inheritance>
* Author  :T0581
* Version :1.0
* Date    :08-07-2019
*
*/

class CNumbers
{
public:

//Variables to input constant values
    int nNumber_a;
    int nNumber_b;

// -------------------------------------------------------
// Method      : CNumbers
// Parameters  : Nil
// Returns     : Nil
// Description : Member function to input the numbers
// -------------------------------------------------------

CNumbers()
{
    cout << "Enter the Numbers: " << endl;
    cout << "\nNumber_1 : ";
    cin >> nNumber_a;
    cout << "Number_2 : ";
    cin >> nNumber_b;
}

};

/**
* Class CNumber
* <derived class>
* Author  :T0581
* Version :1.0
* Date    :08-07-2019
*
*/

class CNumber : public CNumbers
{
public:
//Variable to input value
    int nNumber_c;

// -------------------------------------------------------
// Method      : CNumber
// Parameters  : Nil
// Returns     : Nil
// Description : Member function to input the number
// -------------------------------------------------------

CNumber()
{
    cout << "Number_3 : ";
    cin >> nNumber_c;
}

};

/**
* Class CNext_Number
* <New base class>
* Author  :T0581
* Version :1.0
* Date    :08-07-2019
*
*/

class CNext_Number
{
public:
//Variable to input value
    int nNumber_d;

// -------------------------------------------------------
// Method      : CNext_Number
// Parameters  : Nil
// Returns     : Nil
// Description : Member function to input the number
// -------------------------------------------------------

CNext_Number()
{
    cout << "Number_4 : ";
    cin >> nNumber_d;
}

};

/**
* Class CSum
* <derived class from two base classes>
* Author  :T0581
* Version :1.0
* Date    :08-07-2019
*
*/

class CSum : public CNumber, public CNext_Number
{
public:

// -------------------------------------------------------
// Method      : CSum
// Parameters  : Nil
// Returns     : Nil
// Description : Member function to get the sum
// -------------------------------------------------------

CSum()
{
    int nTotal;
    nTotal = nNumber_a + nNumber_b + nNumber_c + nNumber_d;
    cout << "\nTotal : ";
    cout << nTotal << endl;
}

};

int main()
{
    CSum Result;
    return 0;
}
