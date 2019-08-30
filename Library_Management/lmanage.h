#ifndef LMANAGE_H_INCLUDED
#define LMANAGE_H_INCLUDED

#include    <iostream>
#include    <fstream>
#include    <conio.h>
#include    <stdio.h>
#include    <string.h>
#include    <stdlib.h>
#include    <iomanip>

using namespace std;


#define BOOK_NUM_MAX_LENGTH       6
#define BOOK_NAME_MAX_LENGTH      50
#define BOOK_AUTHOR_MAX_LENGTH    20
#define ADM_NUM_MAX_LENGTH        6
#define STUD_NAME_MAX_LENGTH      20


class CBook
{
    char m_szBookNumber[BOOK_NUM_MAX_LENGTH];
    char m_szBookName[BOOK_NAME_MAX_LENGTH];
    char m_szAuthorName[BOOK_AUTHOR_MAX_LENGTH];

public:
    void CreateBook();
    void ShowBook();
    void ModifyBook();
    char* ReturnBookNum();
    void Report();


};

class CStudent
{
    char m_szAdmNumber[ADM_NUM_MAX_LENGTH];
    char m_szName[STUD_NAME_MAX_LENGTH];
    char m_szStudBookNum[BOOK_NUM_MAX_LENGTH];
    int  m_nBooksIssued;

public:
    void CreateStudent();
    void ShowStudent();
    void ModifyStudent();
    char* ReturnAdmNum();
    char* RetStudBkNum();
    int RetBookIssued();
    void NumBooksIssued();
    void ResetBooksIssued();
    void GetStudBookNum(char szRet[]);
    void Report();

};
//***************************************************************
//        global declaration for stream object, object
//****************************************************************

extern fstream  g_fpBookFP;
extern fstream  g_fpStudentFP;
extern CBook    BOOK;
extern CStudent STUDENT;


void Intro();

void BookIssue();

void BookDeposit();

void WriteBook();

void WriteStudent();

void DisplaySpecificBook(char szBookNumber[]);

void DisplaySpecificStudent(char szStudAdmNumber[]);

void ModifyBook();

void ModifyStudent();

void DeleteStudent();

void DeleteBook();

void DisplayAllStudents();

void DisplayAllBooks();

void AdminMenu();


#endif // LMANAGE_H_INCLUDED
