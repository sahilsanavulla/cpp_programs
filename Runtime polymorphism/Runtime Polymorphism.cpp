
/**
* File main.cpp - Copyright (C) 2019
* Triassic Solutions Private Limited. All rights reserved.
* This file contains implementation of Runtime Polymorphism.
* Author  :T0581
* Version :1.0
* Date    :15-07-2019
*
*/



#include "Runtime Polymorphism.h"

using namespace std;


// -------------------------------------------------------
// Method      : ReadData
// Parameters  : Nil
// Returns     : void
// Description : Member function to input data of triangle
// -------------------------------------------------------


void CTriangle::ReadData()
{
    cout << "\nEnter the dimensions of Triangle:";
    cout << "\nBase = ";
    cin >> m_nBase;
    cout << "Height = ";
    cin >> m_nHeight;

}

// -------------------------------------------------------
// Method      : DrawShape
// Parameters  : Nil
// Returns     : void
// Description : Member function to display area of triangle
// -------------------------------------------------------

void CTriangle::DrawShape()
{
    m_fTriangleArea = (m_nBase * m_nHeight)/2;
    cout << "Drawing the Triangle with area   ";
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
    cout << "\nEnter the radius of the circle: ";
    cin >> m_nRadius;
}

// -------------------------------------------------------
// Method      : DrawShape
// Parameters  : Nil
// Returns     : void
// Description : Member function to display area of circle
// -------------------------------------------------------

void CCircle::DrawShape()
{
    m_fCircleArea = 3.14 * m_nRadius * m_nRadius;
    cout << "Drawing the Circle with area   ";
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
    cout << "\nLength = ";
    cin >> m_nLength;
    cout << "Breadth = ";
    cin >> m_nBreadth;
}

// -------------------------------------------------------
// Method      : DrawShape
// Parameters  : Nil
// Returns     : void
// Description : Member function to display area of rectangle
// -------------------------------------------------------

void CRectangle::DrawShape()
{
    m_nRectangleArea = m_nLength * m_nBreadth;
    cout << "Drawing the Rectangle with area   ";
    cout << m_nRectangleArea;
}


