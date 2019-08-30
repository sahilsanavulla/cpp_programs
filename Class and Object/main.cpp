/**
* File main.cpp - Copyright (C) 2019
* Triassic Solutions Private Limited. All rights reserved.
* This file contains implementation of the Class and Objects
*
* Author  :T0581
* Version :1.0
* Date    :05-07-2019
*
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

#define nMaxLength  15
#define nLengthGiven  1

/**
* Class CStudent
* <Concept of Class and Objects>
* Author  :T0581
* Version :1.0
* Date    :05-07-2019
*
*/

class CStudent
{
     private:

        int nRollNumber = 0;
        char cName[nMaxLength];
        char cBatch[nLengthGiven];

     public:

        void Input();
        void Display();
};

// -------------------------------------------------------
// Method      : Input
// Parameters  : Nil
// Returns     : void
// Description : Member function to input Student data
// -------------------------------------------------------

void CStudent::Input()
{
     cout << "Enter Roll_Number : ";
     cin >> nRollNumber;
     cout << "Enter Name        : ";
     cin >> cName;
     cout << "Enter Batch(A/B)  : ";
     cin >> cBatch;
     cout << endl;

}

// -------------------------------------------------------
// Method      : Display
// Parameters  : Nil
// Returns     : void
// Description : Member function to display Student data
// -------------------------------------------------------

void CStudent::Display()
{
     cout << "\nRoll_Number :";
     cout << nRollNumber;
     cout << "\nName        :";
     cout << cName;
     cout << "\nBatch       :";
     cout << cBatch << endl;

}

int main()
{
     CStudent S1;
     CStudent S2;
     S1.Input();
     S2.Input();
     system("cls");
     S1.Display();
     S2.Display();
     return 0;
}


