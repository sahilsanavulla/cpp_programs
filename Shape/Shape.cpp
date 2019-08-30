
/**
* File main.cpp - Copyright (C) 2019
* Triassic Solutions Private Limited. All rights reserved.
* This file contains implementation of Runtime Polymorphism.
* Author  :T0581
* Version :1.0
* Date    :24-07-2019
*
*/



#include "Shape.h"

using namespace std;


// -------------------------------------------------------
// Method      : InitData
// Parameters  : Nil
// Returns     : void
// Description : Member function to initialise
// -------------------------------------------------------


void CShape::InitData()
{
    CShape *Data[Length];

    static int nCount = 0;
    char chOptionNumber;

    do
    {
        system("cls");
        this->Title();
        cout << "\n\n\t\t\t\t\t\ta.Exit";
        cout << "\n\t\t\t\t\t\tb.Triangle";
        cout << "\n\t\t\t\t\t\tc.Circle";
        cout << "\n\t\t\t\t\t\td.Rectangle";
        cout << "\n\t\t\t\t\t\te.Display Area";
        cout << "\n\n\nPlease choose an option by providing an input as number(0,1,2,3 or 4):  ";
        cin >> chOptionNumber;


        switch( chOptionNumber )
        {
        case 'a':
            system("cls");
            cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tEXIT\n\n\n\n\n\n\n\n\n\n\n\n";
            break;

        case 'b':
            cout << "\nSelected shape is TRIANGLE";
            Data[nCount] = new CTriangle;
            Data[nCount]->ReadData();
            nCount++;
            break;

        case 'c':
            cout << "\nSelected shape is CIRCLE";
            Data[nCount] = new CCircle;
            Data[nCount]->ReadData();
            nCount++;
            break;

        case 'd':
            cout << "\nSelected shape is RECTANGLE";
            Data[nCount] = new CRectangle;
            Data[nCount]->ReadData();
            nCount++;
            break;

        case 'e':
            system("cls");
            cout << "\n\t\t\t\t\t\t**********AREA**********\n\n";
            cout << endl;
            cout << endl;
            for( int nInCount = 0; nInCount < nCount; nInCount++ )
            {
                Data[nInCount]->DisplayArea(m_dDataOne, m_dDataTwo);
                cout << endl;
            }
            cout << endl;
            cout << "\n\n\n\t\t\t\t\t  (Please press 'Enter' to continue)";
            getche();
            break;

        }

    }
    while(chOptionNumber != 'a');

    for( int nInCount = 0; nInCount < nCount; nInCount++ )
    {
        delete Data[nInCount];
    }

}


// -------------------------------------------------------
// Method      : Title
// Parameters  : Nil
// Returns     : void
// Description : Member function to show title
// -------------------------------------------------------


void CShape::Title()
{
    cout << "\n\t\t\t\t\t**********MENU***********\n";
}


// -------------------------------------------------------
// Method      : ReadData
// Parameters  : Nil
// Returns     : void
// Description : Member function to input data of triangle
// -------------------------------------------------------


void CTriangle::ReadData()
{
    cout << "\nEnter the dimensions of Triangle:";
    cout << "\n\nBase = ";
    cin >> m_dDataOne;
    cout << "Height = ";
    cin >> m_dDataTwo;

}

// -------------------------------------------------------
// Method      : DisplayArea
// Parameters  : Nil
// Returns     : void
// Description : Member function to display area of triangle
// -------------------------------------------------------

void CTriangle::DisplayArea(double, double)
{
    m_fTriangleArea = (m_dDataOne * m_dDataTwo)/2;
    cout << "\t\t\t\t\tArea of triangle :\t\t";
    cout << m_fTriangleArea;

}


// -------------------------------------------------------
// Method      : ReadData
// Parameters  : Nil
// Returns     : void
// Description : Member function to input data of Circle
// -------------------------------------------------------

void CCircle::ReadData()
{
    cout << "\n\nEnter the radius of the circle: ";
    cin >> m_dDataOne;
}

// -------------------------------------------------------
// Method      : DisplayArea
// Parameters  : Nil
// Returns     : void
// Description : Member function to display area of circle
// -------------------------------------------------------

void CCircle::DisplayArea(double, double)
{
    m_fCircleArea = 3.14 * m_dDataOne * m_dDataOne;
    cout << "\t\t\t\t\tArea of circle :\t\t";
    cout << m_fCircleArea;
}


// -------------------------------------------------------
// Method      : ReadData
// Parameters  : Nil
// Returns     : void
// Description : Member function to input data of rectangle
// -------------------------------------------------------

void CRectangle::ReadData()
{
    cout << "\nEnter the dimensions of Rectangle:";
    cout << "\n\nLength = ";
    cin >> m_dDataOne;
    cout << "Breadth = ";
    cin >> m_dDataTwo;
}

// -------------------------------------------------------
// Method      : DisplayArea
// Parameters  : Nil
// Returns     : void
// Description : Member function to display area of rectangle
// -------------------------------------------------------

void CRectangle::DisplayArea(double, double)
{
    m_nRectangleArea = m_dDataOne * m_dDataTwo;
    cout << "\t\t\t\t\tArea of rectangle :\t\t";
    cout << m_nRectangleArea;
}


