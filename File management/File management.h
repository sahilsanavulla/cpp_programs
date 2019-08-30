#ifndef FILE_MANAGEMENT_H_INCLUDED
#define FILE_MANAGEMENT_H_INCLUDED

#include <iostream>
#include <fstream>

#define Name_Length 30
#define Course_Length 40
#define MaxLength 50

using namespace std;


/**
* Class CStudent
* <Concept of Class and Objects>
* Author  :T0581
* Version :1.0
* Date    :22-07-2019
*
*/


class CStudent
{
    private:
        char m_szName[Name_Length];//To input name
        char m_cGender;//To input gender
        char m_szCourse[Course_Length];//To input course
        string m_szDate;//To input date

    public:
        void GetData();
        void ShowData();

};




#endif // FILE_MANAGEMENT_H_INCLUDED
