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


int main()
{

    CIShape *Data[Length];

    int nCount = 0;
    int nOptionNumber;

    do
    {
        cout << "\n0.Exit";
        cout << "\n1.Triangle";
        cout << "\n2.Circle";
        cout << "\n3.Rectangle";
        cout << "\n4.Draw selected shapes";
        cout << "\nPlease choose an option by providing an input as number(0,1,2,3 or 4):  ";
        cin >> nOptionNumber;


        switch( nOptionNumber )
      {
      case 0:
          cout << "\nEXIT";
          break;

      case 1:
          cout << "\nSelected shape is TRIANGLE";
          Data[nCount] = new CTriangle;
          Data[nCount]->ReadData();
          nCount++;
          break;

      case 2:
          cout << "\nSelected shape is CIRCLE";
          Data[nCount] = new CCircle;
          Data[nCount]->ReadData();
          nCount++;
          break;

      case 3:
          cout << "\nSelected shape is RECTANGLE";
          Data[nCount] = new CRectangle;
          Data[nCount]->ReadData();
          nCount++;
          break;

      case 4:
          cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ";
          cout << endl;
          cout << "\nDRAWING SELECTED SHAPES";
          cout << endl;
          for( int nInCount = 0; nInCount < nCount; nInCount++ )
          {
              Data[nInCount]->DrawShape();
              cout << endl;
          }
          cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _";
          cout << endl;
          break;

      }

    }
    while(nOptionNumber != 0);

    for( int nInCount = 0; nInCount < nCount; nInCount++ )
    {
        delete Data[nInCount];
    }



    return 0;
}
