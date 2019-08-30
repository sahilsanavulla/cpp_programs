#ifndef RUNTIME_POLYMORPHISM_H_INCLUDED
#define RUNTIME_POLYMORPHISM_H_INCLUDED

#include <iostream>
#define Length 30

using namespace std;

/**
* Class CIShape
* <Base Class>
* Author  :T0581
* Version :1.0
* Date    :15-07-2019
*
*/


class CIShape
{
public:
    virtual void ReadData()=0;
    virtual void DrawShape()=0;

};

/**
* Class CTriangle
* <Derived Class>
* Author  :T0581
* Version :1.0
* Date    :15-07-2019
*
*/

class CTriangle : public CIShape
{
    public:
        int m_nBase;
        int m_nHeight;
        float m_fTriangleArea;

    void ReadData();
    void DrawShape();

};

/**
* Class CCircle
* <Derived Class>
* Author  :T0581
* Version :1.0
* Date    :15-07-2019
*
*/

class CCircle : public CIShape
{
public:
    int m_nRadius;
    float m_fCircleArea;

    void ReadData();
    void DrawShape();

};

/**
* Class CRectangle
* <Derived Class>
* Author  :T0581
* Version :1.0
* Date    :15-07-2019
*
*/

class CRectangle : public CIShape
{
public:
    int m_nLength;
    int m_nBreadth;
    int m_nRectangleArea;

    void ReadData();
    void DrawShape();

};

#endif // RUNTIME_POLYMORPHISM_H_INCLUDED
