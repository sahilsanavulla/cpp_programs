#ifndef STUDENT_AND_TEACHER_DATA_H_INCLUDED
#define STUDENT_AND_TEACHER_DATA_H_INCLUDED

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define Max 20
#define ARRAY_SIZE 20




/**
* Class CCollege
* <Base Class>
* Author  :T0581
* Version :1.0
* Date    :23-07-2019
*
*/



class CCollege
{
public:
    char m_szName[20];
    char m_cGender;
    int m_nDay;
    int m_nMonth;
    int m_nYear;




void GetData();
    void GetName();
    void GetGender();
    void JoinDate();
    void xyz();
    virtual void Course()
    {

    }
    virtual void Department()
    {

    }
    virtual void Salary()
    {

    }
    virtual void Display()
    {

    }

};




/**
* Class CStudent
* <Base Class>
* Author  :T0581
* Version :1.0
* Date    :23-07-2019
*
*/


class CStudent : public CCollege
{
private:
    char m_szCourse[50];

public:
    void Course();
    void Display();

};


/**
* Class CTeachingStaff
* <Base Class>
* Author  :T0581
* Version :1.0
* Date    :23-07-2019
*
*/


class CTeachingStaff : public CCollege
{
private:
    std::string m_szDepartment;
    int m_nSalary;

public:
    void Department();
    void Salary();
    void Display();
};



/**
* Class CNonTeachingStaff
* <Base Class>
* Author  :T0581
* Version :1.0
* Date    :23-07-2019
*
*/

class CNonTeachingStaff : public CCollege
{
private:
    std::string m_szDepartmentNT;
    int m_nSalaryNT;


public:
    void Department();
    void Salary();
    void Display();
};

int DateCheck(char m_szJoining[ARRAY_SIZE]);
#endif // STUDENT_AND_TEACHER_DATA_H_INCLUDED
