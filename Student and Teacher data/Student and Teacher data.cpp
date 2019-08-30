/**
* File main.cpp - Copyright (C) 2019
* Triassic Solutions Private Limited. All rights reserved.
* This file contains implementation of student and staff data.
* Author  :T0581
* Version :1.0
* Date    :23-07-2019
*
*/


#include "Student and Teacher data.h"

using namespace std;


// -------------------------------------------------------
// Method      : GetData
// Parameters  : Nil
// Returns     : void
// Description : Member function to switch to functions
// -------------------------------------------------------


void CCollege::GetData()
{
    CCollege *College[Max];
    char chOptionNumber;
    static int nCount = 0;


    do
    {
        system("cls");


        cout << "\n\n\t\t\t\t\t----------MENU----------";
        cout << "\n\n\t\t\t\t\t\ta.STUDENT";
        cout << "\n\t\t\t\t\t\tb.STAFF";
        cout << "\n\t\t\t\t\t\tc.DISPLAY";
        cout << "\n\t\t\t\t\t\td.EXIT";
        cout << "\n\nSelect an option(a/b/c/d) : ";
        cin >> chOptionNumber;

        switch(chOptionNumber)
        {
        case 'a':
            system("cls");
            College[nCount] = new CStudent;
            cout << "\n----------STUDENT----------";
            cout << endl;
            College[nCount]->GetName();
            College[nCount]->GetGender();
            College[nCount]->JoinDate();
            College[nCount]->Course();
            nCount++;
            break;

        case 'b':
            system("cls");
            char chOption;


            cout << "\n\t\t\t\t\t----------STAFF----------";
Label:
            cout << "\n\n\t\t\t\t\ta.TEACHING STAFF";
            cout << "\n\t\t\t\t\tb.NON TEACHING STAFF";
            cout << "\n\nSelect an option : ";
            cin >> chOption;


            switch(chOption)
            {
            case 'a':
                system("cls");
                College[nCount] = new CTeachingStaff;
                cout << "\n----------TEACHING STAFF----------";
                cout << endl;
                College[nCount]->GetName();
                College[nCount]->GetGender();
                College[nCount]->JoinDate();
                College[nCount]->Department();
                College[nCount]->Salary();
                nCount++;
                break;

            case 'b':
                system("cls");
                College[nCount] = new CNonTeachingStaff;
                cout << "\n----------NON TEACHING STAFF----------";
                cout << endl;
                College[nCount]->GetName();
                College[nCount]->GetGender();
                College[nCount]->JoinDate();
                College[nCount]->Department();
                College[nCount]->Salary();
                nCount++;
                break;

            default:
                system("cls");
                cout << "\nPlease select a valid option";
                goto Label;
                break;
            }


            break;

        case 'c':
            system("cls");
            cout << "\n\n";
            for( int nInCount = 0; nInCount < nCount; nInCount++ )
            {
                College[nInCount]->Display();
                cout << endl;
            }

            cout << "\n\n\n\t\t\t\tPlease press Enter to continue";
            getche();
            break;

        case 'd':
            system("cls");
            cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tTHANK YOU\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            break;

        default:
            system("cls");
            cout << "\nPlease select a valid option";
            break;
        }
    }
    while(chOptionNumber != 'd');

    for( int nInCount = 0; nInCount < nCount; nInCount++ )
    {
        //delete College[nInCount];
    }
}


// -------------------------------------------------------
// Method      : GetName
// Parameters  : Nil
// Returns     : void
// Description : Member function to input name
// -------------------------------------------------------



void CCollege::GetName()
{
    cout << "\nEnter the name(maximum 20 characters) : ";
    getchar();
    cin.getline(m_szName, 20);
    int Length = strlen(m_szName);

    for(int i=0; i<Length ; i++)
    {


        if((m_szName[i] >= 65 && m_szName[i] <= 90)||(m_szName[i] >= 97 && m_szName[i] <= 122)||(m_szName[i] ==32))
        {

        }
        else
        {
            cout << "\n(Enter a valid name)";
            GetName();
            return;
        }

    }
}


/*void CCollege::xyz()
{
    int Length = strlen(m_szName);
    for(int i=0; i<Length ; i++)
    {


        if((m_szName[i] >= 65 && m_szName[i] <= 90)||(m_szName[i] >= 97 && m_szName[i] <= 122)||(m_szName[i] ==32))
        {

        }
        else
        {
            cout << "\n(Enter a valid name)";
            GetName();
            return;
        }

    }
}*/



// -------------------------------------------------------
// Method      : GetGender
// Parameters  : Nil
// Returns     : void
// Description : Member function to input gender
// -------------------------------------------------------



void CCollege::GetGender()
{
    string in;
    cout << "\nEnter the gender(M/F) : ";
    getline(cin, in);
    m_cGender = in[0];
    // int Test = in.size();




    if ((m_cGender == 77 && in.size() ==1) || (m_cGender == 109 &&  in.size() == 1) || (m_cGender == 70 &&  in.size() == 1) || (m_cGender == 102 &&  in.size() == 1))
    {
        return;
    }
    else
    {
        cout << "\n(Enter a valid gender)";
        GetGender();
        return;
    }

}


// -------------------------------------------------------
// Method      : JoinDate
// Parameters  : Nil
// Returns     : void
// Description : Member function to input join date
// -------------------------------------------------------



void CCollege::JoinDate()
{
    char m_szJoining[20];
    int DateChecker;
    int nDay;
    int nMonth;
    int nYear;
    do
    {
        cout << endl << "\tEnter date: ";
        getchar();
        cin >> nDay >> nMonth >> nYear;
        DateCheck( m_szJoining);
        DateChecker = DateCheck( m_szJoining);
    }
    while( 0 == DateChecker );

}


int DateCheck(char m_szJoining[ARRAY_SIZE])
{
    string day = "" ;
    string month = "";
    string year = "";

    int nIterator;
    int nDay;
    int nMonth;
    int nYear;


    for( nIterator = 0; nIterator < 10; nIterator++ )
    {
        if(nIterator < 2)
        {
            day = day + m_szJoining[nIterator];
        }
        else if( nIterator > 2 && nIterator < 5 )
        {
            month += m_szJoining[nIterator];
        }
        else if(nIterator > 5 && nIterator < 10 )
        {
            year += m_szJoining[nIterator];
        }
    }

    nDay = atoi(day.c_str());
    nMonth = atoi(month.c_str());
    nYear = atoi(year.c_str());

    if( nDay < 1 || nDay > 31 || nMonth < 1 || nMonth > 12 || nYear < 1950 || nYear > 2019 )
    {
        cout << "\n\tInvalid Date input!" << endl;
        return 0;
    }
    else
    {
        return 1;
    }
}
// -------------------------------------------------------
// Method      : Course
// Parameters  : Nil
// Returns     : void
// Description : Member function to input course
// -------------------------------------------------------



void CStudent::Course()
{
    cout << "\nEnter the course(maximum 50 characters) : ";
    getchar();
    cin.getline(m_szCourse, 20);
    int Length = strlen(m_szCourse);
    for(int i=0; i<Length ; i++)
    {


        if((m_szCourse[i] >= 65 && m_szCourse[i] <= 90)||(m_szCourse[i] >= 97 && m_szCourse[i] <= 122)||(m_szCourse[i] ==32))
        {

        }
        else
        {
            cout << "\n(Enter a valid course)";
            Course();
            return;
        }

    }

}


// -------------------------------------------------------
// Method      : Display
// Parameters  : Nil
// Returns     : void
// Description : Member function to display student data
// -------------------------------------------------------


void CStudent::Display()
{
    cout << "\nSTUDENT";
    cout << "\n-------";
    cout << "\nName : ";
    cout << m_szName;
    cout << "\nGender : ";
    cout << m_cGender;
    cout << "\nCourse : ";
    cout << m_szCourse;
    cout << "\nDate of Join : ";
    cout << m_nDay << "-" << m_nMonth << "-"<< m_nYear;
}


// -------------------------------------------------------
// Method      : Department
// Parameters  : Nil
// Returns     : void
// Description : Member function to input department
// -------------------------------------------------------


void CTeachingStaff::Department()
{
    cout << "\nEnter the teaching department : ";
    cin >> m_szDepartment;
}


// -------------------------------------------------------
// Method      : Salary
// Parameters  : Nil
// Returns     : void
// Description : Member function to input salary
// -------------------------------------------------------


void CTeachingStaff::Salary()
{
    cout << "\nEnter the salary : ";
    cin >> m_nSalary;
}


// -------------------------------------------------------
// Method      : Display
// Parameters  : Nil
// Returns     : void
// Description : Member function to display data
// -------------------------------------------------------


void CTeachingStaff::Display()
{
    cout << "\nTEACHING STAFF";
    cout << "\n--------------";
    cout << "\nName : ";
    cout << m_szName;
    cout << "\nGender : ";
    cout << m_cGender;
    cout << "\nDate of Join : ";
    cout << m_nDay << "-" << m_nMonth << "-"<< m_nYear;
    cout << "\nDepartment : ";
    cout << m_szDepartment;
    cout << "\nSalary : ";
    cout << m_nSalary;
}


// -------------------------------------------------------
// Method      : Department
// Parameters  : Nil
// Returns     : void
// Description : Member function to input department
// -------------------------------------------------------

void CNonTeachingStaff::Department()
{
    cout << "\nEnter the non-teaching department : ";
    cin >> m_szDepartmentNT;
}


// -------------------------------------------------------
// Method      : Salary
// Parameters  : Nil
// Returns     : void
// Description : Member function to input salary
// -------------------------------------------------------


void CNonTeachingStaff::Salary()
{
    cout << "\nEnter the salary : ";
    cin >> m_nSalaryNT;
}


// -------------------------------------------------------
// Method      : Display
// Parameters  : Nil
// Returns     : void
// Description : Member function to display data
// -------------------------------------------------------


void CNonTeachingStaff::Display()
{
    cout << "\nNON TEACHING STAFF";
    cout << "\n------------------";
    cout << "\nName : ";
    cout << m_szName;
    cout << "\nGender : ";
    cout << m_cGender;
    cout << "\nDate of Join : ";
    cout << m_nDay << "-" << m_nMonth << "-"<< m_nYear;
    cout << "\nDepartment : ";
    cout << m_szDepartmentNT;
    cout << "\nSalary : ";
    cout << m_nSalaryNT;
}





