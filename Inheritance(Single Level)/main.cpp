/**
* File main.cpp - Copyright (C) 2019
* Triassic Solutions Private Limited. All rights reserved.
* This file contains implementation of Single inheritance
*
* Author  :T0581
* Version :1.0
* Date    :08-07-2019
*
*/

#include <iostream>

using namespace std;

/**
* Class CMultiplication
* <Base class>
* Author  :T0581
* Version :1.0
* Date    :08-07-2019
*
*/

class CMultiplication
{
private:
//variables for multiplication
    int nNumber_a;
    int nNumber_b;

public:

    void Input();
    int nValue;

// -------------------------------------------------------
// Method      : nMultiply
// Parameters  : Nil
// Returns     : int
// Description : Member function to multiply
// -------------------------------------------------------

int nMultiply()
{
    nValue = nNumber_a * nNumber_b;
    return nValue;
}

};

// -------------------------------------------------------
// Method      : Input
// Parameters  : Nil
// Returns     : void
// Description : Member function to input
// -------------------------------------------------------

void CMultiplication::Input()
{
    cout << "Enter two numbers:" << endl;
    cout << "\nNumber_1 = ";
    cin >> nNumber_a;
    cout << "Number_2 = ";
    cin >> nNumber_b;
}

/**
* Class CProduct
* <derived class>
* Author  :T0581
* Version :1.0
* Date    :08-07-2019
*
*/
class Product : public CMultiplication
{

public:

// -------------------------------------------------------
// Method      : out
// Parameters  : Nil
// Returns     : void
// Description : Member function to multiply
// -------------------------------------------------------

void out()
{
     nMultiply();
     cout << "\nProduct of a and b is : " << nValue << endl;
}

};

int main()
{
   Product Output;
   Output.Input();
   Output.out();

   return 0;

}



