/**
* File main.cpp - Copyright (C) 2019
* TSPL. All rights reserved.
* This file contains implementation of the Addition and Swapping
*
* Author  :T0581
* Version :1.1
* Date    :07-09-2019
*
*/


#include <iostream>

using namespace std;

// -------------------------------------------------------
// Method      : Swap
// Parameters  : <nNumber_1> - <int> - Number to be swapped
//               <nSum> - <int> - Sum to be swapped
// Returns     : void
// Description : Member function to input data
// -------------------------------------------------------

void Swap( int &nNumber_1, int &nSum )
{
    int ntemp = 0;
    ntemp = nSum;
    nSum = nNumber_1;
    nNumber_1 = ntemp;

}

int main()
 {
     int nNumber_1 = 0;
     int nNumber_2 = 0;
     int nNumber_3 = 0;
     int nSum = 0;
     int nValue = 50;

     cout << "Enter three numbers:\n";
     cout << "Number_1 = ";
     cin >> nNumber_1;
     cout << "Number_2 = ";
     cin >> nNumber_2;
     cout << "Number_3 = ";
     cin >> nNumber_3;
     cout << "\nSum of three numbers = ";
     nSum = nNumber_1 + nNumber_2 + nNumber_3;
     cout << nSum << endl;

     // Add three numbers and if the sum is <= 50 the number_1 will be replaced with the sum.
     // Also the value of Number_1 will be stored to Number_4.

     if( nValue <= nSum )
     {
         Swap( nNumber_1, nSum );
         cout << "\nNumber_1 = ";
         cout << nNumber_1 << endl;
         cout << "Number_4 = ";
         cout << nSum << endl;
     }

     // If the sum is less than 50, then it will be displayed "Invalid Input"

     else
     {
         cout << "\nInvalid Input" << endl;
     }



    return 0;
}

