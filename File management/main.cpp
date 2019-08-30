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



int main()
{
    CStudent Stud[MaxLength];
    int nStudentNumber;
    int nCount = 0;


    fstream file;


//creating a file and entering data into the file
    file.open("D:/users/Sahil Sanavulla/work.txt",ios::out);
    cout << "\n********FILL THE DATA********";
    cout << "\n\nEnter Number of Students : ";
    cin >> nStudentNumber;

    for( nCount = 0; nCount < nStudentNumber; nCount++)
    {

        Stud[nCount].GetData();
        file.write((char*)&Stud[nCount],sizeof(Stud[nCount]));
    }
    cout << "\nFile created successfully."<<endl;

    file.close();
    cout << "File saved and closed succesfully."<<endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------";



//Reading saved data from the file
    file.open("D:/users/Sahil Sanavulla/work.txt",ios::in);
    cout << "\n\n********STUDENT DETAILS********";
    cout << endl;

    for( nCount = 0; nCount < nStudentNumber; nCount++)
    {
        file.read((char*)&Stud[nCount],sizeof(Stud[nCount]));
        Stud[nCount].ShowData();
    }

    file.close();

    return 0;
}
