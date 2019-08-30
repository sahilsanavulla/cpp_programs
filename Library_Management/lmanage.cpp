
/**
 * File lmanage.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains implementation of library management system
 * functions
 *
 * Author   : Alan Raj C.
 * Modified : Anurag J. K.
 * Version  : 1.0.0
 * Date     : 27-06-2019
 *
 */

#include "lmanage.h"

// -------------------------------------------------------
// Method      : CreateBook
// Parameters  : Nil
// Returns     : void
// Description : Member function to create new book entry
// -------------------------------------------------------

void CBook::CreateBook()
{
    cout<<"\nNEW BOOK ENTRY...\n";
    cout<<"\nEnter The book no.";
    cin>>m_szBookNumber;
    getchar();
    cout<<"\n\nEnter The Name of The Book ";
    gets(m_szBookName);
    cout<<"\n\nEnter The Author's Name ";
    gets(m_szAuthorName);
    cout<<"\n\n\nBook Created..";
}

// ----------------------------------------------------
// Method      : ShowBook
// Parameters  : Nil
// Returns     : void
// Description : Member function to show book details
// ----------------------------------------------------

void CBook::ShowBook()
{
    cout<<"\nBook no. : "<<m_szBookNumber;
    cout<<"\nBook Name : ";
    puts(m_szBookName);
    cout<<"Author Name : ";
    puts(m_szAuthorName);
}

// ------------------------------------------------------
// Method      : ModifyBook
// Parameters  : Nil
// Returns     : void
// Description : Member function to modify book details
// ------------------------------------------------------

void CBook::ModifyBook()
{
    cout<<"\nBook no. : "<<m_szBookNumber;
    cout<<"\nModify Book Name : ";
    gets(m_szBookName);
    cout<<"\nModify Author's Name of Book : ";
    gets(m_szAuthorName);
}

// ------------------------------------------------------
// Method      : ReturnBookNum
// Parameters  : Nil
// Returns     : void
// Description : Member function to return book number
// ------------------------------------------------------

char* CBook::ReturnBookNum()
{
    return m_szBookNumber;
}

// ------------------------------------------------------
// Method      : Report
// Parameters  : Nil
// Returns     : void
// Description : Member function to print report
// ------------------------------------------------------

void CBook::Report()
{
    cout<<setw(15)<<m_szBookNumber<<setw(15)<<m_szBookName<<setw(20)<<m_szAuthorName<<endl;
}

// ---------------------------------------------------------
// Method      : CreateStudent
// Parameters  : Nil
// Returns     : void
// Description : Member function to add new student entry
// ---------------------------------------------------------

void CStudent::CreateStudent()
{
    system("cls");
    cout<<"\nNEW STUDENT ENTRY...\n";
    cout<<"\nEnter The admission no. ";
    cin>>m_szAdmNumber;
    getchar();
    cout<<"\n\nEnter the name of Student ";
    gets(m_szName);
    m_nBooksIssued = 0;
    memset(m_szStudBookNum, 0, sizeof(m_szStudBookNum));
    cout<<"\n\nStudent Record Created..";
}

// ---------------------------------------------------------
// Method      : ShowStudent
// Parameters  : Nil
// Returns     : void
// Description : Member function to show student details
// ---------------------------------------------------------

void CStudent::ShowStudent()
{
    cout<<"\nAdmission no. : "<<m_szAdmNumber;
    cout<<"\nStudent Name : ";
    puts(m_szName);
    cout<<"\nNo of Book issued : "<<m_nBooksIssued;

    if(1 == m_nBooksIssued)
    {
        cout<<"\nBook No "<<m_szStudBookNum;
    }
}

// ---------------------------------------------------------
// Method      : ModifyStudent
// Parameters  : Nil
// Returns     : void
// Description : Member function to modify student details
// ---------------------------------------------------------

void CStudent::ModifyStudent()
{
    cout<<"\nAdmission no. : "<<m_szAdmNumber;
    cout<<"\nModify Student Name : ";
    gets(m_szName);
}

// ---------------------------------------------------------
// Method      : ReturnAdmNum
// Parameters  : Nil
// Returns     : void
// Description : Member function to return admission number
// ---------------------------------------------------------

char* CStudent::ReturnAdmNum()
{
    return m_szAdmNumber;
}

// -----------------------------------------------------------
// Method      : RetStudBkNum
// Parameters  : Nil
// Returns     : void
// Description : Member function to return student book number
// -----------------------------------------------------------

char* CStudent::RetStudBkNum()
{
    return m_szStudBookNum;
}

// -----------------------------------------------------------
// Method      : RetBookIssued
// Parameters  : Nil
// Returns     : void
// Description : Member function to return book issued
// -----------------------------------------------------------

int CStudent::RetBookIssued()
{
    return m_nBooksIssued;
}

// --------------------------------------------------------------
// Method      : NumBooksIssued
// Parameters  : Nil
// Returns     : void
// Description : Member function to return number of books issued
// --------------------------------------------------------------

void CStudent::NumBooksIssued()
{
    m_nBooksIssued = 1;
}

// --------------------------------------------------------------
// Method      : ResetBooksIssued
// Parameters  : Nil
// Returns     : void
// Description : Member function to reset number of books issued
// --------------------------------------------------------------

void CStudent::ResetBooksIssued()
{
    m_nBooksIssued = 0;
}

// --------------------------------------------------------------
// Method      : GetStudBookNum
// Parameters  : Nil
// Returns     : void
// Description : Member function to get student book number
// --------------------------------------------------------------

void CStudent::GetStudBookNum(char szRet[])
{
    strcpy(m_szStudBookNum, szRet);
}

// --------------------------------------------------------------
// Method      : Report
// Parameters  : Nil
// Returns     : void
// Description : Member function to print report
// --------------------------------------------------------------
void CStudent::Report()
{
    cout<<setw(15)<<m_szAdmNumber<<setw(15)<<m_szName<<setw(10)<<m_nBooksIssued<<endl;
}


// -----------------------------------
// Method      : Intro
// Parameters  : Nil
// Returns     : void
// Description : Introduction Screen
// -----------------------------------

void Intro()
{
    system("cls");
    cout<<"LIBRARY MANAGEMENT SYSTEM\
           \n\nMADE BY : YOUR NAME\
           \n\nSCHOOL  : SCHOOL NAME";
    getch();
}

// -------------------------------------------
// Method      : BookIssue
// Parameters  : Nil
// Returns     : void
// Description : Function for Issuing the book
// -------------------------------------------


void BookIssue()
{
    char szStudAdmNum[ADM_NUM_MAX_LENGTH];
    char szBookNum[BOOK_NUM_MAX_LENGTH];

    int nStudFound = 0;
    int nBookFound = 0;
    int nPos       = 0;

    system("cls");
    cout<<"\n\nBOOK ISSUE ...\n\n\tEnter The student's admission no.";
    cin>>szStudAdmNum;
    g_fpBookFP.open("student.dat", ios::in | ios::out);
    g_fpStudentFP.open("book.dat", ios::in | ios::out);

    while(g_fpBookFP.read((char*)&STUDENT, sizeof(CStudent)) && nStudFound == 0)
    {
        if(0 == strcmpi(STUDENT.ReturnAdmNum(), szStudAdmNum))
        {
            nStudFound = 1;
            if(0 == STUDENT.RetBookIssued())
            {
                cout<<"\n\n\tEnter the book no. ";
                cin>>szBookNum;
                while(g_fpStudentFP.read((char*)&BOOK, sizeof(CBook)) && nBookFound == 0)
                {
                    if(0 == strcmpi(BOOK.ReturnBookNum(), szBookNum))
                    {
                        BOOK.ShowBook();
                        nBookFound = 1;
                        STUDENT.NumBooksIssued();
                        STUDENT.GetStudBookNum(BOOK.ReturnBookNum());
                        nPos = -1 * sizeof(STUDENT);
                        g_fpBookFP.seekp(nPos, ios::cur);
                        g_fpBookFP.write((char*)&STUDENT, sizeof(CStudent));
                        cout<<"\n\n\t Book issued successfully\n\nPlease Note: Write current date\
                                in backside of book and submit within 15 days fine Rs. 1 for each day\
                                after 15 days period";
                    }
                }
                if(0 == nBookFound)
                {
                    cout<<"Book number does not exist";
                }
            }
            else
            {
                cout<<"You have not returned the last book ";
            }
        }
    }
    if(0 == nStudFound)
    {
        cout<<"Student record not exist...";
    }
    getch();
    g_fpBookFP.close();
    g_fpStudentFP.close();
}

// ----------------------------------------------
// Method      : BookDeposit
// Parameters  : Nil
// Returns     : void
// Description : Function for depositing the book
// ----------------------------------------------

void BookDeposit()
{
    char szStudAdmNum[ADM_NUM_MAX_LENGTH];

    int nStudFound = 0;
    int nBookFound = 0;
    int nDay       = 0;
    int nFine      = 0;
    int nPos       = 0;

    system("cls");
    cout<<"\n\nBOOK DEPOSIT ...\n\n\tEnter The student's admission no.";
    cin>>szStudAdmNum;
    g_fpBookFP.open("student.dat", ios::in | ios::out);
    g_fpStudentFP.open("book.dat", ios::in | ios::out);
    while(g_fpBookFP.read((char*)&STUDENT, sizeof(CStudent)) && nStudFound == 0)
    {
        if(0 == strcmpi(STUDENT.ReturnAdmNum(), szStudAdmNum))
        {
            nStudFound = 1;
            if(1 == STUDENT.RetBookIssued())
            {
                while(g_fpStudentFP.read((char*)&BOOK, sizeof(CBook)) && nBookFound == 0)
                {
                    if(0 == strcmpi(BOOK.ReturnBookNum(), STUDENT.RetStudBkNum()))
                    {
                        BOOK.ShowBook();
                        nBookFound = 1;
                        cout<<"\n\nBook deposited in no. of days";
                        cin>>nDay;
                        if(nDay > 15)
                        {
                            nFine = (nDay - 15) * 1;
                            cout<<"\n\nFine has to deposited Rs. "<<nFine;
                        }
                        STUDENT.ResetBooksIssued();
                        nPos = -1 * sizeof(STUDENT);
                        g_fpBookFP.seekp(nPos, ios::cur);
                        g_fpBookFP.write((char*)&STUDENT, sizeof(CStudent));
                        cout<<"\n\n\t Book deposited successfully";
                    }
                }
                if(0 == nBookFound)
                {
                    cout<<"Book no does not exist";
                }
            }
            else
            {
                cout<<"No book is issued..please check!!";
            }
        }
    }
    if(0 == nStudFound)
    {
        cout<<"Student record not exist...";
    }
    getch();
    g_fpBookFP.close();
    g_fpStudentFP.close();
}

// ------------------------------------------------------
// Method      : WriteBook
// Parameters  : Nil
// Returns     : void
// Description : Function to write book details in file
// ------------------------------------------------------

void WriteBook()
{
    char cContinue;
    g_fpBookFP.open("book.dat", ios::out | ios::app);
    do
    {
        system("cls");
        BOOK.CreateBook();
        g_fpBookFP.write((char*)&BOOK, sizeof(CBook));
        cout<<"\n\nDo you want to add more record..(y/n?)";
        cin>>cContinue;
    }
    while(cContinue == 'y' || cContinue == 'Y');
    g_fpBookFP.close();
}

// ------------------------------------------------------
// Method      : WriteStudent
// Parameters  : Nil
// Returns     : void
// Description : Function to write Student details in file
// ------------------------------------------------------

void WriteStudent()
{
    char cContinue;
    g_fpBookFP.open("student.dat", ios::out | ios::app);
    do
    {
        STUDENT.CreateStudent();
        g_fpBookFP.write((char*)&STUDENT, sizeof(CStudent));
        cout<<"\n\ndo you want to add more record..(y/n?)";
        cin>>cContinue;
    }
    while(cContinue == 'y' || cContinue == 'Y');
    g_fpBookFP.close();
}

// --------------------------------------------------------------
// Method      : DisplaySpecificBook
// Parameters  :
//   <param 1> - <char []> - BookNumber to be retrieved.
// Returns     : void
// Description : Function to read specific book record from file
// --------------------------------------------------------------

void DisplaySpecificBook(char szBookNumber[])
{
    cout<<"\nBOOK DETAILS\n";
    int nBookFound = 0;
    g_fpBookFP.open("book.dat", ios::in);
    while(g_fpBookFP.read((char*)&BOOK, sizeof(CBook)))
    {
        if(0 == strcmpi(BOOK.ReturnBookNum(), szBookNumber))
        {
            BOOK.ShowBook();
            nBookFound = 1;
        }
    }
    g_fpBookFP.close();
    if(0 == nBookFound)
    {
        cout<<"\n\nBook does not exist";
    }
    getch();
}

// ------------------------------------------------------------------
// Method      : DisplaySpecificStudent
// Parameters  :
//   <param 1> - <char []> - Student admission number to be retrieved.
// Returns     : void
// Description : Function to read specific student record from file
// ------------------------------------------------------------------

void DisplaySpecificStudent(char szStudAdmNumber[])
{
    cout<<"\nSTUDENT DETAILS\n";
    int nStudFound = 0;
    g_fpBookFP.open("student.dat", ios::in);
    while(g_fpBookFP.read((char*)&STUDENT, sizeof(CStudent)))
    {
        if((0 == strcmpi(STUDENT.ReturnAdmNum(), szStudAdmNumber)))
        {
            STUDENT.ShowStudent();
            nStudFound = 1;
        }
    }

    g_fpBookFP.close();
    if(0 == nStudFound)
    {
        cout<<"\n\nStudent does not exist";
    }
    getch();
}

// ------------------------------------------------------
// Method      : ModifyBook
// Parameters  : Nil
// Returns     : void
// Description : Function to modify existing book record
// ------------------------------------------------------

void ModifyBook()
{
    char szBookNum[BOOK_NUM_MAX_LENGTH];
    int nBookFound = 0;
    int nPos       = 0;
    system("cls");
    cout<<"\n\n\tMODIFY BOOK RECORD.... \n\n\tEnter The book no. of The book: ";
    cin>>szBookNum;
    getchar();
    g_fpBookFP.open("book.dat", ios::in | ios::out);
    while(g_fpBookFP.read((char*)&BOOK, sizeof(CBook)) && nBookFound == 0)
    {
        if(0 == strcmpi(BOOK.ReturnBookNum(), szBookNum))
        {
            BOOK.ShowBook();
            cout<<"\nEnter The New Details of book: "<<endl;
            BOOK.ModifyBook();
            nPos = -1 * sizeof(BOOK);
            g_fpBookFP.seekp(nPos, ios::cur);
            g_fpBookFP.write((char*)&BOOK, sizeof(CBook));
            cout<<"\n\n\t Record Updated";
            nBookFound = 1;
        }
    }
    g_fpBookFP.close();
    if(0 == nBookFound)
    {
        cout<<"\n\n Record Not Found ";
    }
    getch();
}

// ---------------------------------------------------------
// Method      : ModifyStudent
// Parameters  : Nil
// Returns     : void
// Description : Function to modify existing student record
// ---------------------------------------------------------

void ModifyStudent()
{
    char szStudAdmNum[ADM_NUM_MAX_LENGTH];
    int nStudFound = 0;
    int nPos       = 0;

    system("cls");
    cout<<"\n\n\tMODIFY STUDENT RECORD... \n\n\tEnter the admission no. of student: ";
    cin>>szStudAdmNum;
    getchar();
    g_fpBookFP.open("student.dat", ios::in | ios::out);
    while(g_fpBookFP.read((char*)&STUDENT, sizeof(CStudent)) && nStudFound == 0)
    {
        if(0 == strcmpi(STUDENT.ReturnAdmNum(), szStudAdmNum))
        {
            STUDENT.ShowStudent();
            cout<<"\nEnter The New Details of student"<<endl;
            STUDENT.ModifyStudent();
            nPos = -1 * sizeof(STUDENT);
            g_fpBookFP.seekp(nPos, ios::cur);
            g_fpBookFP.write((char*)&STUDENT, sizeof(CStudent));
            cout<<"\n\n\t Record Updated";
            nStudFound = 1;
        }
    }

    g_fpBookFP.close();
    if(0 == nStudFound)
    {
        cout<<"\n\n Record Not Found ";
    }
    getch();
}

// ---------------------------------------------------------
// Method      : DeleteStudent
// Parameters  : Nil
// Returns     : void
// Description : Function to delete student record from file
// ---------------------------------------------------------


void DeleteStudent()
{
    char szStudAdmNum[ADM_NUM_MAX_LENGTH];
    int nStudFound = 0;

    system("cls");
    cout<<"\n\n\n\tDELETE STUDENT...\n\nEnter The admission no. of the Student You Want To Delete : ";
    cin>>szStudAdmNum;
    g_fpBookFP.open("student.dat", ios::in | ios::out);
    fstream g_fpBookFP2;
    g_fpBookFP2.open("Temp.dat", ios::out);
    g_fpBookFP.seekg(0, ios::beg);
    while(g_fpBookFP.read((char*)&STUDENT, sizeof(CStudent)))
    {
        if(0 != strcmpi(STUDENT.ReturnAdmNum(), szStudAdmNum))
        {
            g_fpBookFP2.write((char*)&STUDENT, sizeof(CStudent));
        }
        else
        {
            nStudFound = 1;
        }
    }

    g_fpBookFP2.close();
    g_fpBookFP.close();
    remove("student.dat");
    rename("Temp.dat","student.dat");
    if(1 == nStudFound)
    {
        cout<<"\n\n\tRecord Deleted ..";
    }
    else
    {
        cout<<"\n\nRecord not found";
    }
    getch();
}

// ---------------------------------------------------------
// Method      : DeleteBook
// Parameters  : Nil
// Returns     : void
// Description : Function to delete book record from file
// ---------------------------------------------------------

void DeleteBook()
{
    char szBookNum[BOOK_NUM_MAX_LENGTH];
    system("cls");
    cout<<"\n\n\n\tDELETE BOOK ...\n\nEnter The Book no. of the Book You Want To Delete : ";
    cin>>szBookNum;
    g_fpBookFP.open("book.dat", ios::in | ios::out);
    fstream g_fpBookFP2;
    g_fpBookFP2.open("Temp.dat", ios::out);
    g_fpBookFP.seekg(0, ios::beg);
    while(g_fpBookFP.read((char*)&BOOK, sizeof(CBook)))
    {
        if(0 != strcmpi(BOOK.ReturnBookNum(), szBookNum))
        {
            g_fpBookFP2.write((char*)&BOOK, sizeof(CBook));
        }
    }

    g_fpBookFP2.close();
    g_fpBookFP.close();
    remove("book.dat");
    rename("Temp.dat", "book.dat");
    cout<<"\n\n\tRecord Deleted ..";
    getch();
}

// ---------------------------------------------------------
// Method      : DisplayAllStudents
// Parameters  : Nil
// Returns     : void
// Description : Function to display all students list
// ---------------------------------------------------------

void DisplayAllStudents()
{
    system("cls");
    g_fpBookFP.open("student.dat", ios::in);
    if(!g_fpBookFP)
    {
        cout<<"ERROR!!! FILE COULD NOT BE OPENED ";
        getch();
        return;
    }

    cout<<"\n\n\t\tSTUDENT LIST\n\n";
    cout<<"==================================================================\n";
    cout<<setw(20)<<"Admission No."<<setw(10)<<"Name"<<setw(20)<<"Book Issued\n";
    cout<<"==================================================================\n";

    while(g_fpBookFP.read((char*)&STUDENT, sizeof(CStudent)))
    {
        STUDENT.Report();
    }

    g_fpBookFP.close();
    getch();
}

// ---------------------------------------------------------
// Method      : DisplayAllBooks
// Parameters  : Nil
// Returns     : void
// Description : Function to display all books list
// ---------------------------------------------------------

void DisplayAllBooks()
{
    system("cls");
    g_fpBookFP.open("book.dat", ios::in);
    if(!g_fpBookFP)
    {
        cout<<"ERROR!!! FILE COULD NOT BE OPENED ";
        getch();
        return;
    }

    cout<<"\n\n\t\tBOOK LIST\n\n";
    cout<<"=========================================================================\n";
    cout<<setw(15)<<"Book Number"<<setw(15)<<"Book Name"<<setw(20)<<"Author\n";
    cout<<"=========================================================================\n";

    while(g_fpBookFP.read((char*)&BOOK, sizeof(CBook)))
    {
        BOOK.Report();
    }
    g_fpBookFP.close();
    getch();
}

// ---------------------------------------------------------
// Method      : AdminMenu
// Parameters  : Nil
// Returns     : void
// Description : Administrator menu function
// ---------------------------------------------------------

void AdminMenu()
{
    system("cls");
    int cOptionSel;
    cout<<"\n\n\n\tADMINISTRATOR MENU\
           \n\n\t1.CREATE STUDENT RECORD\
           \n\n\t2.DISPLAY ALL STUDENTS RECORD\
           \n\n\t3.DISPLAY SPECIFIC STUDENT RECORD\
           \n\n\t4.MODIFY STUDENT RECORD\
           \n\n\t5.DELETE STUDENT RECORD\
           \n\n\t6.CREATE BOOK\
           \n\n\t7.DISPLAY ALL BOOKS\
           \n\n\t8.DISPLAY SPECIFIC BOOK\
           \n\n\t9.MODIFY BOOK\
           \n\n\t10.DELETE BOOK\
           \n\n\t11.BACK TO MAIN MENU\
           \n\n\tPlease Enter Your Choice (1-11) ";
    cin>>cOptionSel;
    switch(cOptionSel)
    {
    case 1:
        system("cls");
        WriteStudent();
        break;
    case 2:
        DisplayAllStudents();
        break;
    case 3:
        char szStudAdmNum[ADM_NUM_MAX_LENGTH];
        system("cls");
        cout<<"\n\n\tPlease Enter The Admission No. ";
        cin>>szStudAdmNum;
        DisplaySpecificStudent(szStudAdmNum);
        break;
    case 4:
        ModifyStudent();
        break;
    case 5:
        DeleteStudent();
        break;
    case 6:
        system("cls");
        WriteBook();
        break;
    case 7:
        DisplayAllBooks();
        break;
    case 8:
    {
        char szBookNum[BOOK_NUM_MAX_LENGTH];
        system("cls");
        cout<<"\n\n\tPlease Enter The book No. ";
        cin>>szBookNum;
        DisplaySpecificBook(szBookNum);
        break;
    }
    case 9:
        ModifyBook();
        break;
    case 10:
        DeleteBook();
        break;
    case 11:
        return;
    default:
        cout<<"\a";
    }
    AdminMenu();
}
