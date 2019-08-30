#ifndef HOUSING_COLONY_CENSUS_H_INCLUDED
#define HOUSING_COLONY_CENSUS_H_INCLUDED

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>

#define Length 50

using namespace std;


/**
* Class CColony
* <Base Class>
* Author  :T0581
* Version :1.0
* Date    :26-07-2019
*
*/

class CColony
{
public:
    char m_szColonyName[Length];
    char m_szStreetName[Length];
    int m_nHouses;
    int m_nDoorNumber;
    int m_nMembersNumber;
    char m_szName[Length];
    int m_nAge;
    char m_cSex;
    char m_szJob[Length];


    void Menu();
    void ReadData();
    void WriteInfo();
    void DisplayData();
    void DisplayAge();
    void FamilyAge();
    void ReadTitle();
};


/**
* Class CFamily
* <Base Class>
* Author  :T0581
* Version :1.0
* Date    :26-07-2019
*
*/

class CFamily : public CColony
{
public:
    int m_nVotersCount = 0;
    int m_nStudentsCount = 0;
    int m_nCountmorf = 0;

    void VotersList();
    void StudentCount();
    void Countmorf();
};

#endif // HOUSING_COLONY_CENSUS_H_INCLUDED
