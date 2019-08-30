/**
* File main.cpp - Copyright (C) 2019
* Triassic Solutions Private Limited. All rights reserved.
* This file contains implementation of Multilevel Inheritance
*
* Author  :T0581
* Version :1.0
* Date    :08-07-2019
*
*/

#include <iostream>

using namespace std;

#define nLength 10
#define nLimit 15

/**
* Class CStandard
* <To check multilevel inheritance>
* Author  :T0581
* Version :1.0
* Date    :08-07-2019
*
*/

class CStandard
{
public:

// -------------------------------------------------------
// Method      : CStandard
// Parameters  : Nil
// Returns     : Nil
// Description : Member function to enter standard
// -------------------------------------------------------

CStandard()
{
    char szStandard[nLength];
    cout << "Enter Standard: ";
    cin >> szStandard;
}

};

/**
* Class CDivision
* <intermediate derived class>
* Author  :T0581
* Version :1.0
* Date    :08-07-2019
*
*/

class CDivision : public CStandard
{
public:

// -------------------------------------------------------
// Method      : CDivision
// Parameters  : Nil
// Returns     : Nil
// Description : Member function to enter division
// -------------------------------------------------------

CDivision()
{
    char cDivision;
    cout << "Enter Division: ";
    cin >> cDivision;
}

};

/**
* Class CName
* <derived class>
* Author  :T0581
* Version :1.0
* Date    :08-07-2019
*
*/

class CName : public CDivision
{
public:

// -------------------------------------------------------
// Method      : CName
// Parameters  : Nil
// Returns     : Nil
// Description : Member function to enter name
// -------------------------------------------------------

CName()
{
    char szName[nLimit];
    cout << "Enter Name: ";
    cin >> szName;
}

};


int main()
{
    CName Student;
    return 0;

}
