/**
* File main.cpp - Copyright (C) 2019
* Triassic Solutions Private Limited. All rights reserved.
* This file contains implementation of Multiple and hierarchical Inheritance
*
* Author  :T0581
* Version :1.0
* Date    :08-07-2019
*
*/

#include <iostream>

using namespace std;

/**
* Class CBirds
* <Base class>
* Author  :T0581
* Version :1.0
* Date    :08-07-2019
*
*/

class CBirds
{
public:

// -------------------------------------------------------
// Method      : CBirds
// Parameters  : Nil
// Returns     : Nil
// Description : Member function to display
// -------------------------------------------------------

CBirds()
{
    cout << "This is a bird" << endl;
}

};

/**
* Class CFlyingBirds
* <derived class>
* Author  :T0581
* Version :1.0
* Date    :08-07-2019
*
*/

class CFlying_Birds
{
protected:

// -------------------------------------------------------
// Method      : CFlying_Birds
// Parameters  : Nil
// Returns     : Nil
// Description : Member function to display
// -------------------------------------------------------

CFlying_Birds()
{
    cout << "This bird lies under the category of Flying Birds" << endl;
}

};

/**
* Class CNon_Flying_Birds
* <Base class>
* Author  :T0581
* Version :1.0
* Date    :08-07-2019
*
*/

class CNon_Flying_Birds
{
public:

// -------------------------------------------------------
// Method      : CNon_Flying_Birds
// Parameters  : Nil
// Returns     : Nil
// Description : Member function to display
// -------------------------------------------------------

CNon_Flying_Birds()
{
    cout << "This bird lies under the category of Non Flying Birds" << endl;
}

};

/**
* Class CParrot
* <derived class>
* Author  :T0581
* Version :1.0
* Date    :08-07-2019
*
*/

class CParrot : private CBirds, public CFlying_Birds
{
public:

// -------------------------------------------------------
// Method      : CParrot
// Parameters  : Nil
// Returns     : Nil
// Description : Member function to display
// -------------------------------------------------------

CParrot()
{
    cout << "The bird is Parrot" << endl;
}

};

/**
* Class CKiwi
* <derived class>
* Author  :T0581
* Version :1.0
* Date    :08-07-2019
*
*/

class CKiwi : public CBirds, public CNon_Flying_Birds
{
public:

// -------------------------------------------------------
// Method      : CKiwi
// Parameters  : Nil
// Returns     : Nil
// Description : Member function to display
// -------------------------------------------------------

CKiwi()
{
    cout << "The bird is Kiwi" << endl;
}

};

int main()
{
    CParrot data_a;
    cout << endl;
    CKiwi data_b;

    return 0;
}
