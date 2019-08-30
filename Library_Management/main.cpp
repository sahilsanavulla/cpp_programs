
/**
 * File main.cpp - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains main function of library management system
 *
 * Author   : Alan Raj C.
 * Modified : Anurag J. K.
 * Version  : 1.0.0
 * Date     : 27-06-2019
 *
 */

#include "lmanage.h"

//***************************************************************
//        global declaration for stream object, object
//****************************************************************

fstream  g_fpBookFP;
fstream  g_fpStudentFP;
CBook    BOOK;
CStudent STUDENT;

//***************************************************************
//        THE MAIN FUNCTION OF PROGRAM
//****************************************************************


int main()
{
    char cOptionSel;
    Intro();
    do
    {
        system("cls");
        cout<<"\n\n\n\tMAIN MENU\
               \n\n\t01. BOOK ISSUE\
               \n\n\t02. BOOK DEPOSIT\
               \n\n\t03. ADMINISTRATOR MENU\
               \n\n\t04. EXIT\
               \n\n\tPlease Select Your Option (1-4) ";
        cOptionSel = getche();
        switch(cOptionSel)e
        {
        case '1':
            system("cls");
            BookIssue();
            break;
        case '2':
            BookDeposit();
            break;
        case '3':
            AdminMenu();
            break;
        case '4':
        default :
            cout<<"\a";
        }
    }
    while(cOptionSel != '4');
    return 0;
}

//***************************************************************
//                END OF PROJECT
//***************************************************************
