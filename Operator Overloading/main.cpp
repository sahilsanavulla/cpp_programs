/**
* File main.cpp - Copyright (C) 2019
* Triassic Solutions Private Limited. All rights reserved.
* This file contains implementation of Operator Overloading
*
* Author  :T0581
* Version :1.0
* Date    :12-07-2019
*
*/


#include <iostream>

using namespace std;

/**
* Class CComplex
* <To check Operator overloading>
* Author  :T0581
* Version :1.0
* Date    :12-07-2019
*
*/

class CComplex
{
    int m_nRealNumber = 0;
    int m_nImaginaryNumber = 0;

public:

// -------------------------------------------------------
// Method      : CComplex
// Parameters  : Nil
// Returns     : Nil
// Description : Member function to declare data
// -------------------------------------------------------
CComplex(int m_nReal = 0, int m_nImg = 0)
{
     m_nRealNumber = m_nReal;
     m_nImaginaryNumber = m_nImg;
}

// -------------------------------------------------------
// Method      : CComplex operator
// Parameters  : Nil
// Returns     : CComplex
// Description : Member function to add the complex data
// -------------------------------------------------------

CComplex operator + (CComplex const&obj)
{

    CComplex Data;
    Data.m_nRealNumber = m_nRealNumber + obj.m_nRealNumber;
    Data.m_nImaginaryNumber = m_nImaginaryNumber + obj.m_nImaginaryNumber;
    return Data;

}

// -------------------------------------------------------
// Method      : Display
// Parameters  : Nil
// Returns     : void
// Description : Member function to display the sum
// -------------------------------------------------------

void Display()
{
    cout << endl;
    cout << "Sum of Complex Numbers = ";
    cout << m_nRealNumber;
    cout << "+i";
    cout << m_nImaginaryNumber;
    cout << endl;
}
};


int main()
{
    int nReal_1;
    int nReal_2;
    int nImaginary_1;
    int nImaginary_2;

    cout << "Enter Real part of Number_1      : ";
    cin >> nReal_1;
    cout << "Enter Imaginary part of Number_1 : ";
    cin >> nImaginary_1;
    cout << "Enter Real part of Number_2      : ";
    cin >> nReal_2;
    cout << "Enter Imaginary part of Number_2 : ";
    cin >> nImaginary_2;

    CComplex Complex_1(nReal_1, nImaginary_1);
    CComplex Complex_2(nReal_2, nImaginary_2);
    CComplex Complex_3;
    Complex_3 = Complex_1 + Complex_2;
    Complex_3.Display();

    return 0;
}
