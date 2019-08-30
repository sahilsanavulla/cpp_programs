/**
* File main.cpp - Copyright (C) 2019
* Triassic Solutions Private Limited. All rights reserved.
* This file contains implementation of the this pointer
*
* Author  :T0581
* Version :1.0
* Date    :09-07-2019
*
*/

#include <iostream>

using namespace std;

/**
* Class CTestCase
* <To test the working of this pointer>
* Author  :T0581
* Version :1.0
* Date    :09-07-2019
*
*/

class CTestCase
{
private:
    int nNumber = 0;
    char cCharacter;

public:

// -------------------------------------------------------
// Method      : InputData
// Parameters  : <nNumber> - <int> - Number to be displayed
//               <cCharacter> - <char> - Character to be displayed
// Returns     : void
// Description : Member function to input data
// -------------------------------------------------------

void InputData(int nNumber, char cCharacter)
{
    this->nNumber = nNumber;
    this->cCharacter = cCharacter;
}

// -------------------------------------------------------
// Method      : DisplayData
// Parameters  : Nil
// Returns     : void
// Description : Member function to display data
// -------------------------------------------------------

void DisplayData()
{
    cout << nNumber << endl;
    cout << cCharacter << endl;
}

};

int main()
{
    CTestCase Sample;
    Sample.InputData(15, 'T');
    Sample.DisplayData();
    return 0;
}
