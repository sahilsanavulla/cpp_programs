#include <iostream>


using namespace std;




/**
 * File main.cpp - Copyright (C) 2019
 * Triassic solutions pvt ltd. All rights reserved.
 *
 * Author  : Aysha Kassim
 * Version : 1.0.0
 * Date    : 26-07-2019
 *
 */

#include <iostream>
#include <conio.h>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define MAX_COLONY_NAME 20
#define MAX_ADDRESS 30
#define MAX_NAME 15
#define MAX 10
#define MAX_SEX 7
#define MAX_JOB 15
#define MIN_VOTER_AGE 18
#define MIN_STUDENT_AGE 6
#define MAX_STUDENT_AGE 18
#define MAX_AGE 150

using namespace std;

int ValidateString( char[] );
int ValidateNumber( char[] );
int ReadColonyDetails();

/*
 *
 * Class CColony
 * Class to store details of colony
 * Author  : Aysha Kassim
 * Date    : 26-07-2019
 * Version : 1.0.0
 *
 */

class CColony
{
private:

    unsigned int m_nNumberOfHouses;

public:

    char m_szColonyName[MAX_COLONY_NAME];
    char m_szStreetAddress[MAX_ADDRESS];

    // ---------------------------------------------
    // Method      : ReadColonyName
    // Returns     : char[]
    // Parameters  : Nil
    // Description : function to read name of colony
    // ---------------------------------------------

    char* ReadColonyName()
    {
        cout << "\n\n\n\tEnter the name of Colony             :     ";
        cin.getline( m_szColonyName, MAX_NAME );
        if( 1 == ValidateString( m_szColonyName ) )
        {
            cout << "\n\n\t\tINVALID NAME!!!!!";
            ReadColonyName();
        }
        return m_szColonyName;
    }

    // --------------------------------------------------
    // Method      : ReadStreetAddress
    // Returns     : char[]
    // Parameters  : Nil
    // Description : function to read address of colony
    // --------------------------------------------------

    char* ReadStreetAddress()
    {
        cout << "\n\n\tEnter the street address             :     ";
        cin.getline( m_szStreetAddress, MAX_ADDRESS );
        if( 1 == ValidateString( m_szStreetAddress ) )
        {
            cout << "\n\n\t\tINVALID NAME!!!!!";
            ReadStreetAddress();
        }
        return m_szStreetAddress;
    }

    // -----------------------------------------------------------
    // Method      : ReadNumberOfHouses
    // Returns     : int
    // Parameters  : Nil
    // Description : function to read number of houses in a colony
    // -----------------------------------------------------------

    int ReadNumberOfHouses()
    {
        char szNumberOfHouses[MAX];

        cout << "\n\n\tEnter the number of houses in colony :     ";
        cin  >> szNumberOfHouses;
        if( -1 == ValidateNumber( szNumberOfHouses ) )
        {
            cout << "\n\n\t\tINVALID NUMBER!!!!!";
            ReadNumberOfHouses();
        }
        else
        {
            m_nNumberOfHouses = ValidateNumber( szNumberOfHouses );
        }
        return m_nNumberOfHouses;
    }
};

/*
 *
 * Class CFamily
 * Class to store details of a family
 * Author  : Aysha Kassim
 * Date    : 26-07-2019
 * Version : 1.0.0
 *
 */

class CFamily : public CColony
{
private:

    unsigned short int m_nNumberOfMembers;

public:

    int m_nDoorNumber;
    int m_nFamilyAge;

    // -------------------------------------------------------
    // Method      : ReadDoorNumber
    // Returns     : int
    // Parameters  : Nil
    // Description : function to read door number of a family
    // -------------------------------------------------------

    unsigned int ReadDoorNumber()
    {
        char szDoorNumber[MAX];

        cout << "\n\n\tEnter the door number        :     ";
        cin  >> szDoorNumber;
        if( -1 == ValidateNumber( szDoorNumber ) )
        {
            cout << "\n\n\t\tINVALID NUMBER!!!!!";
            ReadDoorNumber();
        }
        else
        {
            m_nDoorNumber = ValidateNumber( szDoorNumber );
        }
        return m_nDoorNumber;
    }

    // ------------------------------------------------------------
    // Method      : ReadNumberOfMembers
    // Returns     : int
    // Parameters  : Nil
    // Description : function to read number of members in a family
    // ------------------------------------------------------------

    unsigned short int ReadNumberOfMembers()
    {
        char szNumberOfMembers[MAX];

        cout << "\n\n\tEnter number of members      :     ";
        cin  >> szNumberOfMembers;
        if( -1 == ValidateNumber( szNumberOfMembers ) )
        {
            cout << "\n\n\t\tINVALID NUMBER!!!!!";
            ReadNumberOfMembers();
        }
        else
        {
            m_nNumberOfMembers = ValidateNumber( szNumberOfMembers );
        }
        return m_nNumberOfMembers;
    }
};

/*
 *
 * Class CPerson
 * Class to store details of a person
 * Author  : Aysha Kassim
 * Date    : 26-07-2019
 * Version : 1.0.0
 *
 */

class CPerson : public CFamily
{
private:

    int m_nAge;

    char m_szName[MAX_NAME];
    char m_szSex[MAX_SEX];
    char m_szJob[MAX_JOB];

public:

    // ------------------------------------------------
    // Method      : ReadName
    // Returns     : char[]
    // Parameters  : Nil
    // Description : function to read name of a person
    // ------------------------------------------------

    char* ReadName()
    {
        cout << "\n\n\n\tEnter the name of person     :     ";
        cin >> m_szName;
        if( 1 == ValidateString( m_szName ) )
        {
            cout << "\n\n\t\tINVALID NAME!!!!!";
            ReadName();
        }
        return m_szName;
    }

    // ----------------------------------------------
    // Method      : ReadAge
    // Returns     : int
    // Parameters  : Nil
    // Description : function to read age of a person
    // ----------------------------------------------

    int ReadAge()
    {
        char szAge[MAX];

        cout << "\n\tEnter the age                :     ";
        cin  >> szAge;
        if( -1 == ValidateNumber( szAge ) || MAX_AGE < ValidateNumber( szAge ) )
        {
            cout << "\n\n\t\tINVALID AGE!!!!!\n";
            ReadAge();
        }
        else
        {
            m_nAge = ValidateNumber( szAge );
        }
        return m_nAge;
    }

    // ----------------------------------------------
    // Method      : ReadSex
    // Returns     : int
    // Parameters  : Nil
    // Description : function to read sex of a person
    // ----------------------------------------------

    int ReadSex()
    {
        char cSex;
        cout << "\n\tEnter the sex(F/M)           :     ";
        cSex = getche();
        if( cSex == 'f' || cSex == 'F' )
        {
            strcpy( m_szSex, "FEMALE" );
        }
        else if( cSex == 'm' || cSex == 'M' )
        {
            strcpy( m_szSex, "MALE" );
        }
        else
        {
            cout << "\n\n\t\tINVALID SEX!!!!!";
            ReadSex();
        }
        return 0;
    }

    // ----------------------------------------------
    // Method      : ReadJob
    // Returns     : int
    // Parameters  : Nil
    // Description : function to read job of a person
    // ----------------------------------------------

    int ReadJob()
    {
        cout << "\n\n\tEnter the job                :     ";
        cin  >> m_szJob;
        if( 1 == ValidateString( m_szJob ) )
        {
            cout << "\n\n\t\tINVALID NAME!!!!!";
            ReadSex();
        }
        return 0;
    }

    // ------------------------------------------------------------------------
    // Method      : DisplayBasedOnAge
    // Returns     : int
    // Parameters  : Nil
    // Description : function to display details of a person based on given age
    // ------------------------------------------------------------------------

    int DisplayBasedOnAge( unsigned short int nAge )
    {
        ifstream ReadFile;

        ReadFile.open( "Colony.dat", ios::in );

        if( !ReadFile.is_open() )
        {
            cout << "\n\n\n\tERROR IN OPENING FILE!!!!!";
        }
        ReadFile.seekg( 0, ios::end );
        if( 0 == ReadFile.tellg() )
        {
            cout << "\n\t\tFILE EMPTY!!!!\n";
        }
        ReadFile.seekg( 0, ios::beg );
        while( ReadFile.read( (char *)this, sizeof( *this ) ) )
        {
            if( nAge == this->m_nAge )
            {
                cout << "\n-------------------------------------------------------";
                cout << "\n\n\n\tNAME            :     " << this->m_szName
                     << "\n\n\tAGE             :     " << this->m_nAge
                     << "\n\n\tSEX             :     " << this->m_szSex
                     << "\n\n\tJOB             :     " << this->m_szJob
                     << "\n";
            }
        }
        return 0;
    }

    // -----------------------------------------------
    // Method      : DisplayVoters
    // Returns     : int
    // Parameters  : Nil
    // Description : function to display voters list
    // -----------------------------------------------

    int DisplayVoters()
    {
        unsigned int nVotersCount = 0;

        ifstream ReadFile;

        ReadFile.open( "Colony.dat", ios::in );

        if( !ReadFile.is_open() )
        {
            cout << "\n\n\n\tERROR IN OPENING FILE!!!!!";
        }
        ReadFile.seekg( 0, ios::end );
        if( 0 == ReadFile.tellg() )
        {
            cout << "\n\n\t\tFILE EMPTY!!!!\n";
        }
        ReadFile.seekg( 0, ios::beg );
        while( ReadFile.read( (char *)this, sizeof( *this ) ) )
        {
            if( MIN_VOTER_AGE <= this->m_nAge )
            {
                ++nVotersCount;
                cout << "\n-------------------------------------------------------";
                cout << "\n\n\n\tNAME            :     " << this->m_szName
                     << "\n\n\tAGE             :     " << this->m_nAge
                     << "\n\n\tSEX             :     " << this->m_szSex
                     << "\n\n\tDOOR NUMBER     :     " << this->m_nDoorNumber
                     << "\n";
            }
        }
        cout << "\n\n\tTOTAL COUNT OF ELIGIBLE VOTERS           :     " << nVotersCount;
        return 0;
    }

    // ----------------------------------------------------------
    // Method      : CountMaleFemale
    // Returns     : int
    // Parameters  :
    // Description : function to count of male and female members
    // ----------------------------------------------------------

    int CountMaleFemale()
    {
        unsigned short int nMaleCount   = 0;
        unsigned short int nFemaleCount = 0;

        ifstream ReadFile;

        ReadFile.open( "Colony.dat", ios::in );
        while( ReadFile.read( (char *)this, sizeof( *this ) ) )
        {
            if( 0 == strcmp( this-> m_szSex, "MALE") )
            {
                nMaleCount++;
            }
            else
            {
                nFemaleCount++;
            }
        }
        cout << "\n\n\n\tNUMBER OF FEMALES   =     " << nFemaleCount
             << "\n\n\tNUMBER OF MALES     =     " << nMaleCount;
        return 0;
    }

    int DisplayAll();
    int DisplayStudent();
    int DisplayBasedOnFamilyAge( int );
};

// ---------------------------------------------------------
// Method      : DisplayAll
// Returns     : int
// Parameters  :
// Description : function to display details of all members
// ---------------------------------------------------------

int CPerson::DisplayAll()
{
    ifstream ReadFile;

    ReadFile.open( "Colony.dat", ios::in );

    if( !ReadFile.is_open() )
    {
        cout << "\n\n\tERROR IN OPENING FILE!!!!!";
    }
    ReadFile.seekg( 0, ios::end );
    if( 0 == ReadFile.tellg() )
    {
        cout << "\n\n\t\tFILE EMPTY!!!!\n";
    }
    ReadFile.seekg( 0, ios::beg );
    while( ReadFile.read( (char *)this, sizeof( *this ) ) )
    {
        cout << "\n-------------------------------------------------------";
        cout << "\n\n\n\tNAME            :     " << this->m_szName
             << "\n\n\tADDRESS         :     " << this->m_nDoorNumber << "\t" << this->m_szColonyName
             << "\n\n\t\t\t\t" << this->m_szStreetAddress;
    }
    return 0;
}

// ---------------------------------------------------------
// Method      : DisplayStudent
// Returns     : int
// Parameters  :
// Description : function to display details of all students
// ---------------------------------------------------------

int CPerson::DisplayStudent()
{
    unsigned int nStudentCount = 0;

    ifstream ReadFile;

    ReadFile.open( "Colony.dat", ios::in );

    if( !ReadFile.is_open() )
    {
        cout << "\n\n\tERROR IN OPENING FILE!!!!!";
    }
    ReadFile.seekg( 0, ios::end );
    if( 0 == ReadFile.tellg() )
    {
        cout << "\n\n\t\tFILE EMPTY!!!!\n";
    }
    ReadFile.seekg( 0, ios::beg );
    while( ReadFile.read( (char *)this, sizeof( *this ) ) )
    {
        if( ( MIN_STUDENT_AGE <= this->m_nAge ) && ( MAX_STUDENT_AGE >= this->m_nAge ) )
        {
            ++nStudentCount;
            cout << "\n-------------------------------------------------------";
            cout << "\n\n\n\tNAME            :     " << this->m_szName
                 << "\n\n\tAGE             :     " << this->m_nAge
                 << "\n\n\tSEX             :     " << this->m_szSex
                 << "\n\n\tJOB             :     " << this->m_szJob
                 << "\n\n\tDOOR NUMBER     :     " << this->m_nDoorNumber
                 << "\n\n\tFAMILY AGE      :     " << this->m_nFamilyAge;
        }
    }
    cout << "\n\n\n\tTOTAL STUDENT COUNT          =     " << nStudentCount;
    return 0;
}

// ------------------------------------------------------------------------
// Method      : DisplayBasedOnFamilyAge
// Returns     : int
// Parameters  :
// nFamilyAge  : int
// Description : function to display details of family based on family age
// ------------------------------------------------------------------------

int CPerson::DisplayBasedOnFamilyAge( int nFamilyAge )
{
    int nDoorNumber;

    ifstream ReadFile;

    ReadFile.open( "Colony.dat", ios::in );

    if( !ReadFile.is_open() )
    {
        cout << "\n\n\tERROR IN OPENING FILE!!!!!";
    }
    ReadFile.seekg( 0, ios::end );
    if( 0 == ReadFile.tellg() )
    {
        cout << "\n\n\t\tFILE EMPTY!!!!\n";
    }
    ReadFile.seekg( 0, ios::beg );
    while( ReadFile.read( (char *)this, sizeof( *this ) ) )
    {
        if( nFamilyAge == this->m_nFamilyAge )
        {
            nDoorNumber = this->m_nDoorNumber;
        }
    }
    ReadFile.seekg( 0, ios::beg );
    while( ReadFile.read( ( char * )this, sizeof( *this ) ) )
    {
        if( nDoorNumber == this->m_nDoorNumber )
        {
            cout << "\n\n\n\tNAME            :     " << this->m_szName
                 << "\n\n\tAGE             :     " << this->m_nAge
                 << "\n\n\tSEX             :     " << this->m_szSex
                 << "\n\n\tJOB             :     " << this->m_szJob
                 << "\n\n\tDOOR NUMBER     :     " << this->m_nDoorNumber
                 << "\n\n\tFAMILY AGE      :     " << this->m_nFamilyAge;
        }
    }
    return 0;
}

// -----------------------------------------
// Method      : ValidateString
// Returns     : int
// Parameters  :
// szName      : char[]
// Description : function to validate string
// -----------------------------------------

int ValidateString( char szName[MAX_NAME] )
{
    unsigned int nLoopVar;
    int nFlag = 0;
    for( nLoopVar = 0; nLoopVar < strlen( szName ); nLoopVar++ )
    {
        if( !(isalpha( szName[nLoopVar] ) || szName[nLoopVar] == ' ' ) )
        {
            nFlag = 1;
        }
    }
    if( 1 == nFlag )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// -----------------------------------------
// Method      : ValidateNumber
// Returns     : int
// Parameters  :
// szName      : char[]
// Description : function to validate number
// -----------------------------------------

int ValidateNumber( char szNumber[MAX] )
{
    int nNumber;
    char szString[MAX];
    nNumber = atoi( szNumber );
    itoa( nNumber, szString , 10 );
    if( 0 != strcmp( szNumber, szString ) )
    {
        return -1;
    }
    return nNumber;
}

// -----------------------------------------
// Method      : ReadColonyDetails
// Returns     : int
// Parameters  :
// Description : function to read details
// -----------------------------------------

int ReadColonyDetails()
{
    int nAge                      = 0;
    unsigned int nNumberofHouses  = 0;
    unsigned int nNumberofMembers = 0;
    unsigned int nLoopVar1        = 0;
    unsigned int nLoopVar2        = 0;

    CPerson PersonObj;
    ofstream WriteFile;

    WriteFile.open( "Colony.dat", ios::out | ios::app );
    PersonObj.ReadColonyName();
    PersonObj.ReadStreetAddress();
    nNumberofHouses = PersonObj.ReadNumberOfHouses();

    for( nLoopVar1 = 0; nLoopVar1 < nNumberofHouses; nLoopVar1++ )
    {
        system( "CLS" );
        PersonObj.ReadDoorNumber();
        PersonObj.m_nFamilyAge = 0;
        nNumberofMembers = PersonObj.ReadNumberOfMembers();
        for( nLoopVar2 = 0; nLoopVar2 < nNumberofMembers; nLoopVar2++ )
        {
            PersonObj.ReadName();
            nAge = PersonObj.ReadAge();
            PersonObj.m_nFamilyAge += nAge;
            PersonObj.ReadSex();
            PersonObj.ReadJob();
            WriteFile.write( ( char* )&PersonObj, sizeof( PersonObj ) );
        }
    }
    WriteFile.close();
    return 0;
}

//****************************************************************************************
//                                  THE MAIN FUNCTION OF PROGRAM
//****************************************************************************************

int main()
{
    char cOption1;
    char cOption2;
    char szAge[MAX];

    int nAge;

    CPerson PersonObj;

    cout << "\n\n\n\n\n\n\t\t\t HOUSING COLONY CENSUS APPLICATION \n\n";
    cout << "\t\t-----------------------------------------------------\n";
    getche();
    do
    {
        here:
        system( "CLS" );
        cout << "\n\n\n\tMENU"
             << "\n\n\t1. READ COLONY DETAILS"
             << "\n\n\t2. DISPLAY DETAILS"
             << "\n\n\t3. VOTERS LIST"
             << "\n\n\t4. STUDENTS LIST"
             << "\n\n\t5. NUMBER OF MALE AND FEMALES"
             << "\n\n\t6. EXIT"
             << "\n\n\tEnter the choice : ";
        cOption1 = getche();
        switch( cOption1 )
        {
        case '1':
            system( "CLS" );
            ReadColonyDetails();
            cout << "\n\n\t\t";
            system( "PAUSE" );
            break;

        case '2':
            do
            {
                system( "CLS" );
                cout << "\n\n\n\tMENU"
                     << "\n\n\t1. BASED ON AGE"
                     << "\n\n\t2. BASED ON FAMILY AGE"
                     << "\n\n\t3. ALL FAMILY DETAILS"
                     << "\n\n\t4. BACK TO MAIN MENU"
                     << "\n\n\tEnter your choice : ";
                cOption2 = getche();
                switch( cOption2 )
                {
                case '1':
                    system( "CLS" );
                    cout << "\n\n\n\tEnter the age     :     ";
                    cin  >> szAge;
                    if( -1 == ValidateNumber( szAge ) || ValidateNumber( szAge ) > MAX_AGE )
                    {
                        cout << "\n\n\tINVALID AGE!!!!";
                        cout << "\n\n\t\t";
                        system( "PAUSE" );
                        break;
                    }
                    else
                    {
                        nAge = ValidateNumber( szAge );
                        PersonObj.DisplayBasedOnAge( nAge );
                        cout << "\n\n\t\t";
                        system( "PAUSE" );
                    }
                    break;

                case '2':
                    system( "CLS" );
                    cout << "\n\n\n\tEnter the family age     :     ";
                    cin  >> szAge;
                    if( -1 == ValidateNumber( szAge ) || ValidateNumber( szAge ) > MAX_AGE )
                    {
                        cout << "\n\n\tINVALID AGE!!!!";
                        cout << "\n\n\t\t";
                        system( "PAUSE" );
                        break;
                    }
                    else
                    {
                        nAge = ValidateNumber( szAge );
                        PersonObj.DisplayBasedOnFamilyAge( nAge );
                        cout << "\n\n\t\t";
                        system( "PAUSE" );
                    }
                    break;

                case '3':
                    system( "CLS" );
                    PersonObj.DisplayAll();
                    cout << "\n\n\t\t";
                    system( "PAUSE" );
                    break;

                case '4':
                    {
                        goto here;
                        break;
                    }

                default:
                    cout << "\n\n\t\tINVALID CHOICE!!!!!\n\n";
                    cout << "\n\n\t\t";
                    system( "PAUSE" );
                    break;
                }
            } while( 4 != cOption2 );
            break;

        case '3':
            system( "CLS" );
            PersonObj.DisplayVoters();
            cout << "\n\n\t\t";
            system( "PAUSE" );
            break;

        case '4':
            system( "CLS" );
            PersonObj.DisplayStudent();
            cout << "\n\n\t\t";
            system( "PAUSE" );
            break;

        case '5':
            system( "CLS" );
            PersonObj.CountMaleFemale();
            cout << "\n\n\t\t";
            system( "PAUSE" );
            break;

        case '6':
            exit(0);
            break;

        default:
            cout << "\n\n\t\tINVALID CHOICE!!!!!!\n";
            cout << "\n\n\t\t";
            system( "PAUSE" );
            break;
        }

    } while( 6 != cOption1 );
    return 0;
}

//****************************************************************************************************
//                                            END OF PROJECT
//****************************************************************************************************
