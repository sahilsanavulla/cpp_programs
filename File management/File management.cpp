/**
 * File main.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains main function of file management
 *
 * Author   : T0581.
 * Version  : 1.0.0
 * Date     : 22-07-2019
 *
 */



#include "File management.h"


// -------------------------------------------------------
// Method      : GetData
// Parameters  : Nil
// Returns     : void
// Description : Member function to enter data
// -------------------------------------------------------


void CStudent::GetData()
{
    cout << "\nEnter name : ";
    getchar();
    cin.getline(m_szName, Name_Length);
    cout << "Enter Gender(M/F) : ";
    cin >> m_cGender;
    cout << "Enter Course : ";
    getchar();
    cin.getline(m_szCourse, Course_Length);
    cout<<"Enter the joining date(DD-MM-YYYY) : ";
    getline(cin, m_szDate);
}


// -------------------------------------------------------
// Method      : ShowData
// Parameters  : Nil
// Returns     : void
// Description : Member function to display data
// -------------------------------------------------------


void CStudent::ShowData()
{
    cout << "\nName : ";
    cout << m_szName;
    cout << "\nGender : ";
    cout << m_cGender;
    cout << "\nCourse : ";
    cout << m_szCourse;
    cout << "\nDate of Join : ";
    cout << m_szDate;
    cout << endl;
}
