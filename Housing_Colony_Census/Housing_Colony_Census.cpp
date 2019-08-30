
/**
 * File main.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains main function of Housing Colony Census
 *
 * Author   : T0581.
 * Version  : 1.0.0
 * Date     : 26-07-2019
 *
 */

using namespace std;


#include "Housing_Colony_Census.h"


// -------------------------------------------------------
// Method      : ReadData
// Parameters  : Nil
// Returns     : void
// Description : Member function to input data
// -------------------------------------------------------


void CColony::Menu()
{
    char chOptionNumber;
    CColony Object;
    CFamily Obj;

    do
    {
        system("cls");
        cout << "\n\n\t\t\t\t\t----------MENU----------";
        cout << "\n\n\n\t\t\t\ta.ENTER DATA";
        cout << "\n\n\t\t\t\tb.DISPLAY";
        cout << "\n\n\t\t\t\tc.NUMBER OF PEOPLE ELIGIBLE FOR VOTING";
        cout << "\n\n\t\t\t\td.NUMBER OF STUDENTS IN THE COLONY";
        cout << "\n\n\t\t\t\te.NUMBER OF MALES AND FEMALES";
        cout << "\n\n\t\t\t\tf.EXIT";
        cout << "\n\n\nSELECT AN OPTION(a/b/c/d/e/f) : ";
        cin >> chOptionNumber;

        switch(chOptionNumber)
        {
        case 'a':
            Object.WriteInfo();
            break;

        case 'b':
            char chOption;
            system("cls");
            cout << "\n\n\t\t\t\t\t----------DISPLAY----------";
            cout << "\n\n\n\n\t\t\t\t\ta.BASED ON AGE ";
            cout << "\n\n\t\t\t\t\tb.BASED ON FAMILY AGE";
            cout << "\n\n\t\t\t\t\tc.ALL FAMILY DETAILS";
            cout << "\n\n\nSELECT AN OPTION(a/b/c) : ";
            cin >> chOption;

            switch(chOption)
            {
            case 'a':
                system("cls");
                Object.DisplayAge();
                getchar();
                break;

            case 'b':
                system("cls");
                Object.FamilyAge();
                getchar();
                break;

            case 'c':
                system("cls");
                Object.DisplayData();
                getchar();
                break;

            }

            break;

        case 'c':
            system("cls");
            getchar();
            Obj.VotersList();
            break;

        case 'd':
            system("cls");
            getchar();
            Obj.StudentCount();
            break;

        case 'e':
            system("cls");
            getchar();
            Obj.Countmorf();
            break;

        case 'f':
            system("cls");
            cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tTHANK YOU\n\n\n\n\n\n\n\n\n\n\n\n";
            break;
        }

    }
    while(chOptionNumber != 'f');

}


// -------------------------------------------------------
// Method      : WriteInfo
// Parameters  : Nil
// Returns     : void
// Description : Member function to write data
// -------------------------------------------------------

void CColony::ReadTitle()
{
    cout << "\n\t\t\t\t\t----------ENTER DETAILS----------\n";
}



// -------------------------------------------------------
// Method      : ReadData
// Parameters  : Nil
// Returns     : void
// Description : Member function to input data
// -------------------------------------------------------

void CColony::ReadData()
{

Label_c:
    cout << "\nEnter Name          : ";
    getchar();
    cin.getline(m_szName, 50);
    int Check_c = strlen(m_szName);
    for(int k=0; k<Check_c ; k++)
    {


        if((m_szName[k] >= 65 && m_szName[k] <= 90)||(m_szName[k] >= 97 && m_szName[k] <= 122)||(m_szName[k] ==32))
        {

        }
        else
        {
            cout << "\n(Enter a valid name)";
            goto Label_c;
            return;
        }

    }



    int Select( int );
    cout << "\nEnter Age           : ";
    cin >> m_nAge;
    m_nAge = Select( m_nAge);



    cout << "\nEnter Sex(M/F)      : ";
    cin >> m_cSex;


    /*Label_d:
        string in;
        cout << "\nEnter the Sex(M/F) : ";
        getchar();
        getline(cin, in);
        m_cSex = in[0];


        if ((m_cSex == 77 && in.size() ==1) || (m_cSex == 109 &&  in.size() == 1) || (m_cSex == 70 &&  in.size() == 1) || (m_cSex == 102 &&  in.size() == 1))
        {
            return;
        }
        else
        {
            cout << "\n(Enter a valid gender)";
            goto Label_d;
            return;
        }
    */

    cout << "\nEnter Job           : ";
    cin.getline(m_szJob, 50);
    getchar();

}


// -------------------------------------------------------
// Method      : WriteInfo
// Parameters  : Nil
// Returns     : void
// Description : Member function to write data
// -------------------------------------------------------

void CColony::WriteInfo()
{

    CColony Obj;
    char cChoice;
    ofstream WritePointer;
    //opening file
    WritePointer.open("Colony.dat",ios::out|ios::app);
    if (!WritePointer.is_open())
    {
        cout << "Cant open file ";
        cout << endl;
    }

    system("cls");

    do
    {
        this->ReadTitle();
Label_a:

        cout << "\n\nHousing Colony Name : ";
        getchar();
        cin.getline(m_szColonyName, 50);
        int Check_a = strlen(m_szColonyName);
        for(int i=0; i<Check_a ; i++)
        {


            if((m_szColonyName[i] >= 65 && m_szColonyName[i] <= 90)||(m_szColonyName[i] >= 97 && m_szColonyName[i] <= 122)||(m_szColonyName[i] ==32))
            {

            }
            else
            {
                cout << "\n(Enter a valid name)";
                goto Label_a;
                return;
            }

        }

Label_b:
        cout << "\nStreet Address      : ";
        cin.getline(m_szStreetName, 50);
        int Check_b = strlen(m_szStreetName);
        for(int j=0; j<Check_b ; j++)
        {


            if((m_szStreetName[j] >= 65 && m_szStreetName[j] <= 90)||(m_szStreetName[j] >= 97 && m_szStreetName[j] <= 122)||(m_szStreetName[j] ==32))
            {

            }
            else
            {
                cout << "\n(Enter a valid name)";
                goto Label_b;
                return;
            }

        }

        int Select( int );
        cout << "\nNumber of houses    : ";
        cin >> m_nHouses;
        m_nHouses = Select( m_nHouses);

        cout << "\nDoor number         : ";
        cin >> m_nDoorNumber;
        m_nDoorNumber = Select( m_nDoorNumber);

        cout << "\nNumber of members   : ";
        cin >> m_nMembersNumber;
        m_nMembersNumber = Select( m_nMembersNumber);

        Obj.ReadData();
        //writing to file
        WritePointer.write((char*)&Obj,sizeof(CColony));
        getchar();
        cout << "\n\n\n\t\t\t\t(Please press ENTER to continue)";
        cin  >>cChoice;
        getche();
    }
    while(cChoice == 'y' || cChoice == 'Y');
    WritePointer.close();
}




// -------------------------------------------------------
// Method      : DisplayData
// Parameters  : Nil
// Returns     : void
// Description : Member function to display
// -------------------------------------------------------


void CColony::DisplayData()
{
    CColony Obj;

    ifstream WritePointer;
    WritePointer.open("Colony.dat",ios::in | ios::binary);
    if (!WritePointer.is_open())
    {
        cout << "Cant open file ";
        cout << endl;
    }
    while (WritePointer.read((char*)&Obj, sizeof(CColony) ))
    {

        cout << "\nName         : ";
        cout << m_szName;
        cout << "\nAge          : ";
        cout << m_nAge;
        cout << "\nSex          : ";
        cout << m_cSex;
        cout << "\nDoor Number  : ";
        cout << m_nDoorNumber;
        cout << "\nColony Name  : ";
        cout << m_szColonyName;
        cout << "\nStreet Name  : ";
        cout << m_szStreetName;
        cout <<"\n\n\n";

    }
    cout << "\n\n\n\t\t\t\t(Please press ENTER to continue)";
    WritePointer.close();
    getchar();

}


// -------------------------------------------------------
// Method      : DisplayAge
// Parameters  : Nil
// Returns     : int
// Description : Member function to display based on age
// -------------------------------------------------------


void CColony::DisplayAge()
{
    cout << "\nBASED ON AGE.";
    cout << endl;
    CColony Obj;

    ifstream WritePointer;
    WritePointer.open("Colony.dat",ios::in | ios::binary);
    if (!WritePointer.is_open())
    {
        cout << "Cant open file ";
        cout << endl;
    }
    while (WritePointer.read((char*)&Obj, sizeof(CColony) ))
    {

        cout << "\nName         : ";
        cout << m_szName;
        cout << "\nAge          : ";
        cout << m_nAge;
        cout << "\nDoor Number  : ";
        cout << m_nDoorNumber;
        cout <<"\n\n\n";


    }
    cout << "\n\n\n\t\t\t\t(Please press ENTER to continue)";
    WritePointer.close();
    getchar();

}


// -------------------------------------------------------
// Method      : Select
// Parameters  : Nil
// Returns     : int
// Description : Member function to check integer
// -------------------------------------------------------


void CColony::FamilyAge()
{
    cout << "\nBASED ON FAMILY AGE.";
    cout << endl;

}



// -------------------------------------------------------
// Method      : VotersList
// Parameters  : Nil
// Returns     : void
// Description : Member function to count voters
// -------------------------------------------------------

void CFamily::VotersList()
{
    cout << "\n\nNumber of voters in the colony : ";
    cout << "\n\n\n\t\t\t\t(Please press ENTER to continue)";
    getchar();
}



// -------------------------------------------------------
// Method      : StudentCount
// Parameters  : Nil
// Returns     : void
// Description : Member function to count students
// -------------------------------------------------------

void CFamily::StudentCount()
{
    cout << "\n\nNumber of students in the colony : ";
    cout << "\n\n\n\t\t\t\t(Please press ENTER to continue)";
    getchar();

}


// -------------------------------------------------------
// Method      : Countmorf
// Parameters  : Nil
// Returns     : void
// Description : Member function to count male and female
// -------------------------------------------------------

void CFamily::Countmorf()
{
    cout << "\n\nNumber of males in the colony    : ";
    cout << "\n\nNumber of females in the colony  : ";
    cout << "\n\n\n\t\t\t\t(Please press ENTER to continue)";
    getchar();
}



// -------------------------------------------------------
// Method      : Select
// Parameters  : Nil
// Returns     : int
// Description : Member function to check integer
// -------------------------------------------------------

int Select( int option)
{
    while(1)
    {
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "Invalid, enter again: ";
            cin >>option;
        }
        else
        {
            return option;
        }
    }
}




