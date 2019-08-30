/**
* File main.cpp - Copyright (C) 2019
* Triassic Solutions Private Limited. All rights reserved.
* This file contains implementation of Constructor Overloading
*
* Author  :T0581
* Version :1.0
* Date    :11-07-2019
*
*/


#include <iostream>

using namespace std;

/**
* Class CVolume
* <To check Constructor overloading>
* Author  :T0581
* Version :1.0
* Date    :11-07-2019
*
*/

class CVolume
{
public:

// -------------------------------------------------------
// Method      : Volume
// Parameters  : <nSide> <int> <To store side of cube>
// Returns     : void
// Description : Member function to find volume of cube
// -------------------------------------------------------

CVolume(int nSide)
{
    int m_nVolumeCube = nSide * nSide * nSide;
    cout << "nVolume of Cube is : ";
    cout << m_nVolumeCube;
    cout <<endl;

}

// -------------------------------------------------------
// Method      : Volume
// Parameters  : <fRadius> <float> <To store radius of sphere>
// Returns     : void
// Description : Member function to find volume of sphere
// -------------------------------------------------------

CVolume(float fRadius)
{
    float m_fVolumeSphere = (4/3) * 3.14 * fRadius * fRadius * fRadius;
    cout << "Volume of Sphere is : ";
    cout << m_fVolumeSphere;
    cout << endl;

}

// -------------------------------------------------------
// Method      : Volume
// Parameters  : <nLength> <int> <To store the length of cuboid>
//               <nBreadth> <int> <To store the breadth of cuboid>
//               <nHeight> <int> <To store the height of cuboid>
// Returns     : void
// Description : Member function to display Employee data
// -------------------------------------------------------

CVolume(int nLength, int nBreadth, int nHeight)
{
    int m_nVolumeCuboid = nLength * nBreadth * nHeight;
    cout << "Volume of Cuboid is : ";
    cout << m_nVolumeCuboid;
    cout << endl;
}


};




int main()
{
    int nSide = 0;
    float fRadius = 0;
    int nLenght = 0;
    int nBreadth = 0;
    int nHeight = 0;

    cout << "\nCUBE";
    cout <<"\nEnter the side of the Cube : ";
    cin >> nSide;
    CVolume Data_1(int nSide);

    cout << "\nSPHERE";
    cout << "\nEnter the Radius of Sphere : ";
    cin >> fRadius;
    CVolume Data_2(float fRadius);

    cout << "\nCUBOID";
    cout << "\nEnter the sides of Cuboid : ";
    cout << "\nLength : ";
    cin >> nLenght;
    cout << "Breadth : ";
    cin >> nBreadth;
    cout << "Height : ";
    cin >> nHeight;
    CVolume Data_3(int nLength, int nBreadth, int nHeight);


   return 0;
}
