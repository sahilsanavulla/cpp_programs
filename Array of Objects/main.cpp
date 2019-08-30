/**
* File main.cpp - Copyright (C) 2019
* Triassic Solutions Private Limited. All rights reserved.
* This file contains implementation of Array of objects
*
* Author  :T0581
* Version :1.0
* Date    :10-07-2019
*
*/

#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//#define nMaxLength = 20
//#define nLengthLimit = 15

using namespace std;

/**
* Class CEmployee
* <To store and display employ details>
* Author  :T0581
* Version :1.0
* Date    :10-07-2019
*
*/

class CEmployee
{
public:

    char m_szName[10];
    int m_nAge = 0;
    char m_szAge[10];
    int m_nDesignation;
    char m_szDesignation[25];
    int m_nSalary = 0;
    char m_szSalary[10];

    void GetName();
    void GetAge();
    void GetDesignation();
    void GetSalary();
    void DisplayData();

};

// -------------------------------------------------------
// Method      : GetName
// Parameters  : Nil
// Returns     : void
// Description : Member function to input Employee Name
// -------------------------------------------------------

void CEmployee::GetName()
{
    cout << "Enter the Employee Name : ";
    cin >> m_szName;
}

// -------------------------------------------------------
// Method      : GetAge
// Parameters  : Nil
// Returns     : void
// Description : Member function to input Employee Age
// -------------------------------------------------------

void CEmployee::GetAge()
{
    cout << "Enter the Employee Age : ";
    cin >> m_szAge;
    m_nAge = atoi(m_szAge);
    if(m_nAge == 0)
    {
        cout << "Invalid Age";
        cout << endl;
        GetAge();
    }
}

// -------------------------------------------------------
// Method      : GetDesignation
// Parameters  : Nil
// Returns     : void
// Description : Member function to input Employee Designation
// -------------------------------------------------------

void CEmployee::GetDesignation()
{
    char str_1[] = "Teacher";
    char str_2[] = "Engineer";
    char str_3[] = "Doctor";
    cout << "Select the Employee Designation: \n1.Teacher\n2.Engineer\n3.Doctor ";
    cout << endl;
    cin >> m_nDesignation;

    switch(m_nDesignation)
    {
    case 1:
        strcpy(m_szDesignation, str_1);
        break;
    case 2:
        strcpy(m_szDesignation, str_2);
        break;
    case 3:
        strcpy(m_szDesignation, str_3);
        break;
    default:
        cout << "\nSelect a valid Designation";
        GetDesignation();
        break;
    }

}

// -------------------------------------------------------
// Method      : GetSalary
// Parameters  : Nil
// Returns     : void
// Description : Member function to input Employee Salary
// -------------------------------------------------------

void CEmployee::GetSalary()
{
    cout << "\nEnter the Employee Salary : ";
    cin >> m_szSalary;
    m_nSalary = atoi(m_szSalary);
    if(m_nSalary == 0)
    {
        cout << "Invalid Salary";
        cout << endl;
        GetSalary();
    }
}

// -------------------------------------------------------
// Method      : DisplayData
// Parameters  : Nil
// Returns     : void
// Description : Member function to display Employee data
// -------------------------------------------------------

void CEmployee::DisplayData()
{
    cout << "\nEmployee Name : ";
    cout << m_szName;
    cout << "\nAge : ";
    cout << m_nAge;
    cout << "\nDesignation : ";
    cout << m_szDesignation;
    cout << "\nSalary : ";
    cout << m_nSalary;
    cout << endl;
}

int main()
{
    int nNumberOfEntries = 0;
    int nNumber;

    cout << "Enter the Number of Employees : ";
    cin >> nNumberOfEntries;

    CEmployee EmployeeDetails[nNumberOfEntries];

    for( nNumber = 0; nNumber < nNumberOfEntries; nNumber++ )
    {
        EmployeeDetails[nNumber].GetName();
        EmployeeDetails[nNumber].GetAge();
        EmployeeDetails[nNumber].GetDesignation();
        EmployeeDetails[nNumber].GetSalary();
        cout << endl;
    }

    for( nNumber = 0; nNumber < nNumberOfEntries; nNumber++ )
    {
        EmployeeDetails[nNumber].DisplayData();
    }

    cout << "\nTeachers";

    for ( nNumber = 0; nNumber < nNumberOfEntries; nNumber++ )
    {

       cout << EmployeeDetails[nNumber].m_szDesignation;
        if( EmployeeDetails[nNumber].m_szDesignation == "Teacher" )

        {

            cout <<"\nName of employee : ";
            cout << EmployeeDetails[nNumber].m_szName;
            cout<< "\nAge : ";
            cout << EmployeeDetails[nNumber].m_nAge;
            cout<< "\nsalary " <<EmployeeDetails[nNumber].m_nSalary;
            cout<<"\n";
        }
        else
        {
            cout <<"hai";
        }
    }

    cout << "\nEngineers";

    for ( nNumber = 0; nNumber < nNumberOfEntries; nNumber++ )
    {
        cout << EmployeeDetails[nNumber].m_szDesignation;
        if( EmployeeDetails[nNumber].m_szDesignation == "Engineer")
        {

            cout <<"\nName of employee : ";
            cout << EmployeeDetails[nNumber].m_szName;
            cout<< "\nAge : ";
            cout << EmployeeDetails[nNumber].m_nAge;
            cout<< "\nsalary " <<EmployeeDetails[nNumber].m_nSalary;
            cout<<"\n";
        }

    }

    cout << "\nDoctors";

    for ( nNumber = 0; nNumber < nNumberOfEntries; nNumber++ )
    {
        cout << EmployeeDetails[nNumber].m_szDesignation;
        if( EmployeeDetails[nNumber].m_szDesignation == "Doctor")
        {

            cout <<"\nName of employee : ";
            cout << EmployeeDetails[nNumber].m_szName;
            cout<< "\nAge : ";
            cout << EmployeeDetails[nNumber].m_nAge;
            cout<< "\nsalary " <<EmployeeDetails[nNumber].m_nSalary;
            cout<<"\n";
        }

    }


    return 0;

}
