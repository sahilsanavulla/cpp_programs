#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#define Length 30

using namespace std;

/**
* Class CShape
* <Base Class>
* Author  :T0581
* Version :1.0
* Date    :24-07-2019
*
*/


class CShape
{
public:
    double m_dDataOne;
    double m_dDataTwo;
    void InitData();
    void Title();
    virtual void ReadData()
    {

    }
    virtual void DisplayArea(double, double)
    {

    }

};

/**
* Class CTriangle
* <Derived Class>
* Author  :T0581
* Version :1.0
* Date    :24-07-2019
*
*/

class CTriangle : public CShape
{
public:
    float m_fTriangleArea;

    void ReadData();
    void DisplayArea(double, double);

};

/**
* Class CCircle
* <Derived Class>
* Author  :T0581
* Version :1.0
* Date    :24-07-2019
*
*/

class CCircle : public CShape
{
public:
    float m_fCircleArea;

    void ReadData();
    void DisplayArea(double, double);

};

/**
* Class CRectangle
* <Derived Class>
* Author  :T0581
* Version :1.0
* Date    :24-07-2019
*
*/

class CRectangle : public CShape
{
public:
    int m_nRectangleArea;

    void ReadData();
    void DisplayArea(double, double);

};

#endif // SHAPE_H_INCLUDED
